//
// Generated file, do not edit! Created by opp_msgc 4.3 from attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage.msg.
//

#ifndef _NA_SINKHOLEMESSAGE_M_H_
#define _NA_SINKHOLEMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "omnetpp.h"
typedef cPar *ParPtr;
// }}



/**
 * Class generated from <tt>attacks/controlmessages/sinkholeAttack/NA_SinkholeMessage.msg</tt> by opp_msgc.
 * <pre>
 * message NA_SinkholeMessage {
 *     bool sinkOnlyWhenRouteInTable; 	
 *     								
 *     double sinkholeAttackProbability;  	
 *     ParPtr seqnoAdded; 					
 *     int numHops;						
 * }
 * </pre>
 */
class NA_SinkholeMessage : public ::cMessage
{
  protected:
    bool sinkOnlyWhenRouteInTable_var;
    double sinkholeAttackProbability_var;
    ParPtr seqnoAdded_var;
    int numHops_var;

  private:
    void copy(const NA_SinkholeMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NA_SinkholeMessage&);

  public:
    NA_SinkholeMessage(const char *name=NULL, int kind=0);
    NA_SinkholeMessage(const NA_SinkholeMessage& other);
    virtual ~NA_SinkholeMessage();
    NA_SinkholeMessage& operator=(const NA_SinkholeMessage& other);
    virtual NA_SinkholeMessage *dup() const {return new NA_SinkholeMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getSinkOnlyWhenRouteInTable() const;
    virtual void setSinkOnlyWhenRouteInTable(bool sinkOnlyWhenRouteInTable);
    virtual double getSinkholeAttackProbability() const;
    virtual void setSinkholeAttackProbability(double sinkholeAttackProbability);
    virtual ParPtr& getSeqnoAdded();
    virtual const ParPtr& getSeqnoAdded() const {return const_cast<NA_SinkholeMessage*>(this)->getSeqnoAdded();}
    virtual void setSeqnoAdded(const ParPtr& seqnoAdded);
    virtual int getNumHops() const;
    virtual void setNumHops(int numHops);
};

inline void doPacking(cCommBuffer *b, NA_SinkholeMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NA_SinkholeMessage& obj) {obj.parsimUnpack(b);}


#endif // _NA_SINKHOLEMESSAGE_M_H_
