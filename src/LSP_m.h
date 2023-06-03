//
// Generated file, do not edit! Created by opp_msgtool 6.0 from LSP.msg.
//

#ifndef __LSP_M_H
#define __LSP_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class LSP;
#include "Packet_m.h" // import Packet

/**
 * Class generated from <tt>LSP.msg:21</tt> by opp_msgtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet LSP extends Packet
 * {
 *     int node;
 *     int neighbor[2]; // left and right. In this order
 * }
 * </pre>
 */
class LSP : public ::Packet
{
  protected:
    int node = 0;
    int neighbor[2] = {0};

  private:
    void copy(const LSP& other);

  protected:
    bool operator==(const LSP&) = delete;

  public:
    LSP(const char *name=nullptr, short kind=0);
    LSP(const LSP& other);
    virtual ~LSP();
    LSP& operator=(const LSP& other);
    virtual LSP *dup() const override {return new LSP(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getNode() const;
    virtual void setNode(int node);

    virtual size_t getNeighborArraySize() const;
    virtual int getNeighbor(size_t k) const;
    virtual void setNeighbor(size_t k, int neighbor);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LSP& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LSP& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline LSP *fromAnyPtr(any_ptr ptr) { return check_and_cast<LSP*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __LSP_M_H

