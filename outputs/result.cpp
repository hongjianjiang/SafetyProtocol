/******************************
  Program "result.m" compiled by "Caching Murphi Release 5.4.9.1"

  Murphi Last Compiled date: "Oct 20 2020"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.9.1"
#define MURPHI_DATE "Oct 20 2020"
#define PROTOCOL_NAME "result"
#define BITS_IN_WORLD 59712
#define ALIGN
#define HASHC

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_indexType: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_indexType& val) { return mu__byte::operator=((int) val); };
  mu_1_indexType (const char *name, int os): mu__byte(0, 100, 7, name, os) {};
  mu_1_indexType (void): mu__byte(0, 100, 7) {};
  mu_1_indexType (int val): mu__byte(0, 100, 7, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_indexType mu_1_indexType_undefined_var;

class mu_1_roleANums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleANums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleANums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleANums (void): mu__byte(1, 1, 1) {};
  mu_1_roleANums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleANums mu_1_roleANums_undefined_var;

class mu_1_roleSNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleSNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleSNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleSNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleSNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleSNums mu_1_roleSNums_undefined_var;

class mu_1_roleBNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_roleBNums& val) { return mu__byte::operator=((int) val); };
  mu_1_roleBNums (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_roleBNums (void): mu__byte(1, 1, 1) {};
  mu_1_roleBNums (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_roleBNums mu_1_roleBNums_undefined_var;

class mu_1_msgLen: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_msgLen& val) { return mu__byte::operator=((int) val); };
  mu_1_msgLen (const char *name, int os): mu__byte(0, 5, 3, name, os) {};
  mu_1_msgLen (void): mu__byte(0, 5, 3) {};
  mu_1_msgLen (int val): mu__byte(0, 5, 3, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_msgLen mu_1_msgLen_undefined_var;

class mu_1_chanNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_chanNums& val) { return mu__byte::operator=((int) val); };
  mu_1_chanNums (const char *name, int os): mu__byte(0, 18, 5, name, os) {};
  mu_1_chanNums (void): mu__byte(0, 18, 5) {};
  mu_1_chanNums (int val): mu__byte(0, 18, 5, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_chanNums mu_1_chanNums_undefined_var;

class mu_1_invokeNums: public mu__byte
{
 public:
  inline int operator=(int val) { return mu__byte::operator=(val); };
  inline int operator=(const mu_1_invokeNums& val) { return mu__byte::operator=((int) val); };
  mu_1_invokeNums (const char *name, int os): mu__byte(0, 10, 4, name, os) {};
  mu_1_invokeNums (void): mu__byte(0, 10, 4) {};
  mu_1_invokeNums (int val): mu__byte(0, 10, 4, "Parameter or function result.", 0)
  {
    operator=(val);
  };
  char * Name() { return tsprintf("%d",value()); };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
};

/*** end of subrange decl ***/
mu_1_invokeNums mu_1_invokeNums_undefined_var;

class mu_1_AgentType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AgentType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AgentType& val)
  {
    if (val.defined())
      return ( s << mu_1_AgentType::values[ int(val) - 1] );
    else return ( s << "Undefined" );
  };

  mu_1_AgentType (const char *name, int os): mu__byte(1, 5, 3, name, os) {};
  mu_1_AgentType (void): mu__byte(1, 5, 3) {};
  mu_1_AgentType (int val): mu__byte(1, 5, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -1]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -1] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AgentType::values[] = {"anyAgent","Intruder","Alice","Bob","Server",NULL };

/*** end of enum declaration ***/
mu_1_AgentType mu_1_AgentType_undefined_var;

class mu_1_NonceType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_NonceType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_NonceType& val)
  {
    if (val.defined())
      return ( s << mu_1_NonceType::values[ int(val) - 6] );
    else return ( s << "Undefined" );
  };

  mu_1_NonceType (const char *name, int os): mu__byte(6, 14, 4, name, os) {};
  mu_1_NonceType (void): mu__byte(6, 14, 4) {};
  mu_1_NonceType (int val): mu__byte(6, 14, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -6]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -6] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_NonceType::values[] = {"anyNonce","Na","N","Kab","Nb","na","n","kab","nb",NULL };

/*** end of enum declaration ***/
mu_1_NonceType mu_1_NonceType_undefined_var;

class mu_1_ConstType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_ConstType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_ConstType& val)
  {
    if (val.defined())
      return ( s << mu_1_ConstType::values[ int(val) - 15] );
    else return ( s << "Undefined" );
  };

  mu_1_ConstType (const char *name, int os): mu__byte(15, 15, 1, name, os) {};
  mu_1_ConstType (void): mu__byte(15, 15, 1) {};
  mu_1_ConstType (int val): mu__byte(15, 15, 1, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -15]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -15] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_ConstType::values[] = {"anyNumber",NULL };

/*** end of enum declaration ***/
mu_1_ConstType mu_1_ConstType_undefined_var;

class mu_1_MsgType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MsgType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MsgType& val)
  {
    if (val.defined())
      return ( s << mu_1_MsgType::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_MsgType (const char *name, int os): mu__byte(16, 27, 4, name, os) {};
  mu_1_MsgType (void): mu__byte(16, 27, 4) {};
  mu_1_MsgType (int val): mu__byte(16, 27, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -16]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -16] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MsgType::values[] = {"null","agent","nonce","key","aenc","senc","concat","hash","tmp","mod","e","number",NULL };

/*** end of enum declaration ***/
mu_1_MsgType mu_1_MsgType_undefined_var;

class mu_1_EncryptType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_EncryptType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_EncryptType& val)
  {
    if (val.defined())
      return ( s << mu_1_EncryptType::values[ int(val) - 28] );
    else return ( s << "Undefined" );
  };

  mu_1_EncryptType (const char *name, int os): mu__byte(28, 31, 3, name, os) {};
  mu_1_EncryptType (void): mu__byte(28, 31, 3) {};
  mu_1_EncryptType (int val): mu__byte(28, 31, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -28]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -28] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_EncryptType::values[] = {"PK","SK","Symk","MsgK",NULL };

/*** end of enum declaration ***/
mu_1_EncryptType mu_1_EncryptType_undefined_var;

class mu_1_KeyType
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_EncryptType mu_encType;
  mu_1_AgentType mu_ag;
  mu_1_AgentType mu_ag1;
  mu_1_AgentType mu_ag2;
  mu_1_indexType mu_m;
  mu_1_KeyType ( const char *n, int os ) { set_self(n,os); };
  mu_1_KeyType ( void ) {};

  virtual ~mu_1_KeyType(); 
friend int CompareWeight(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = CompareWeight(a.mu_encType, b.mu_encType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag1, b.mu_ag1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag2, b.mu_ag2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m, b.mu_m);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_KeyType& a, mu_1_KeyType& b)
  {
    int w;
    w = Compare(a.mu_encType, b.mu_encType);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = Compare(a.mu_ag1, b.mu_ag1);
    if (w!=0) return w;
    w = Compare(a.mu_ag2, b.mu_ag2);
    if (w!=0) return w;
    w = Compare(a.mu_m, b.mu_m);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_encType.MultisetSort();
    mu_ag.MultisetSort();
    mu_ag1.MultisetSort();
    mu_ag2.MultisetSort();
    mu_m.MultisetSort();
  }
  void print_statistic()
  {
    mu_encType.print_statistic();
    mu_ag.print_statistic();
    mu_ag1.print_statistic();
    mu_ag2.print_statistic();
    mu_m.print_statistic();
  }
  void clear() {
    mu_encType.clear();
    mu_ag.clear();
    mu_ag1.clear();
    mu_ag2.clear();
    mu_m.clear();
 };
  void undefine() {
    mu_encType.undefine();
    mu_ag.undefine();
    mu_ag1.undefine();
    mu_ag2.undefine();
    mu_m.undefine();
 };
  void reset() {
    mu_encType.reset();
    mu_ag.reset();
    mu_ag1.reset();
    mu_ag2.reset();
    mu_m.reset();
 };
  void print() {
    mu_encType.print();
    mu_ag.print();
    mu_ag1.print();
    mu_ag2.print();
    mu_m.print();
  };
  void print_diff(state *prevstate) {
    mu_encType.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
    mu_ag1.print_diff(prevstate);
    mu_ag2.print_diff(prevstate);
    mu_m.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_encType.to_state(thestate);
    mu_ag.to_state(thestate);
    mu_ag1.to_state(thestate);
    mu_ag2.to_state(thestate);
    mu_m.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_KeyType& operator= (const mu_1_KeyType& from) {
    mu_encType.value(from.mu_encType.value());
    mu_ag.value(from.mu_ag.value());
    mu_ag1.value(from.mu_ag1.value());
    mu_ag2.value(from.mu_ag2.value());
    mu_m.value(from.mu_m.value());
    return *this;
  };
};

  void mu_1_KeyType::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_KeyType::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_KeyType::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_encType.set_self_2(name, ".encType", os + 0 ); else mu_encType.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
  if (name) mu_ag1.set_self_2(name, ".ag1", os + 16 ); else mu_ag1.set_self_2(NULL, NULL, 0);
  if (name) mu_ag2.set_self_2(name, ".ag2", os + 24 ); else mu_ag2.set_self_2(NULL, NULL, 0);
  if (name) mu_m.set_self_2(name, ".m", os + 32 ); else mu_m.set_self_2(NULL, NULL, 0);
}

mu_1_KeyType::~mu_1_KeyType()
{
}

/*** end record declaration ***/
mu_1_KeyType mu_1_KeyType_undefined_var;

class mu_1_AStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_AStatus::values[ int(val) - 32] );
    else return ( s << "Undefined" );
  };

  mu_1_AStatus (const char *name, int os): mu__byte(32, 33, 2, name, os) {};
  mu_1_AStatus (void): mu__byte(32, 33, 2) {};
  mu_1_AStatus (int val): mu__byte(32, 33, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -32]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -32] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_AStatus::values[] = {"A1","A2",NULL };

/*** end of enum declaration ***/
mu_1_AStatus mu_1_AStatus_undefined_var;

class mu_1_SStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_SStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_SStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_SStatus::values[ int(val) - 34] );
    else return ( s << "Undefined" );
  };

  mu_1_SStatus (const char *name, int os): mu__byte(34, 35, 2, name, os) {};
  mu_1_SStatus (void): mu__byte(34, 35, 2) {};
  mu_1_SStatus (int val): mu__byte(34, 35, 2, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -34]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -34] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_SStatus::values[] = {"S1","S2",NULL };

/*** end of enum declaration ***/
mu_1_SStatus mu_1_SStatus_undefined_var;

class mu_1_BStatus: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_BStatus& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_BStatus& val)
  {
    if (val.defined())
      return ( s << mu_1_BStatus::values[ int(val) - 36] );
    else return ( s << "Undefined" );
  };

  mu_1_BStatus (const char *name, int os): mu__byte(36, 39, 3, name, os) {};
  mu_1_BStatus (void): mu__byte(36, 39, 3) {};
  mu_1_BStatus (int val): mu__byte(36, 39, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -36]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -36] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_BStatus::values[] = {"B1","B2","B3","B4",NULL };

/*** end of enum declaration ***/
mu_1_BStatus mu_1_BStatus_undefined_var;

class mu_1__type_0
{
 public:
  mu_1_indexType array[ 6 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os) { set_self(n, os); };
  mu_1__type_0 ( void ) {};
  virtual ~mu_1__type_0 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 5 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    for (int i = 0; i < 6; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<6; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<6; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<6; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 6; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 6; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 6; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 6; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 6; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 6; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 6; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end array declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_Message
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_MsgType mu_msgType;
  mu_1_AgentType mu_ag;
  mu_1_NonceType mu_noncePart;
  mu_1_ConstType mu_constPart;
  mu_1_indexType mu_tmpPart;
  mu_1_KeyType mu_k;
  mu_1_indexType mu_modMsg1;
  mu_1_indexType mu_modMsg2;
  mu_1_indexType mu_hashMsg;
  mu_1_indexType mu_hashKey;
  mu_1_indexType mu_expMsg1;
  mu_1_indexType mu_expMsg2;
  mu_1_indexType mu_aencMsg;
  mu_1_indexType mu_aencKey;
  mu_1_indexType mu_sencMsg;
  mu_1_indexType mu_sencKey;
  mu_1__type_0 mu_concatPart;
  mu_1_indexType mu_length;
  mu_1_Message ( const char *n, int os ) { set_self(n,os); };
  mu_1_Message ( void ) {};

  virtual ~mu_1_Message(); 
friend int CompareWeight(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = CompareWeight(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = CompareWeight(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_constPart, b.mu_constPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_tmpPart, b.mu_tmpPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = CompareWeight(a.mu_modMsg1, b.mu_modMsg1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_modMsg2, b.mu_modMsg2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_hashMsg, b.mu_hashMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_hashKey, b.mu_hashKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_expMsg1, b.mu_expMsg1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_expMsg2, b.mu_expMsg2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_concatPart, b.mu_concatPart);
    if (w!=0) return w;
    w = CompareWeight(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = Compare(a.mu_msgType, b.mu_msgType);
    if (w!=0) return w;
    w = Compare(a.mu_ag, b.mu_ag);
    if (w!=0) return w;
    w = Compare(a.mu_noncePart, b.mu_noncePart);
    if (w!=0) return w;
    w = Compare(a.mu_constPart, b.mu_constPart);
    if (w!=0) return w;
    w = Compare(a.mu_tmpPart, b.mu_tmpPart);
    if (w!=0) return w;
    w = Compare(a.mu_k, b.mu_k);
    if (w!=0) return w;
    w = Compare(a.mu_modMsg1, b.mu_modMsg1);
    if (w!=0) return w;
    w = Compare(a.mu_modMsg2, b.mu_modMsg2);
    if (w!=0) return w;
    w = Compare(a.mu_hashMsg, b.mu_hashMsg);
    if (w!=0) return w;
    w = Compare(a.mu_hashKey, b.mu_hashKey);
    if (w!=0) return w;
    w = Compare(a.mu_expMsg1, b.mu_expMsg1);
    if (w!=0) return w;
    w = Compare(a.mu_expMsg2, b.mu_expMsg2);
    if (w!=0) return w;
    w = Compare(a.mu_aencMsg, b.mu_aencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_aencKey, b.mu_aencKey);
    if (w!=0) return w;
    w = Compare(a.mu_sencMsg, b.mu_sencMsg);
    if (w!=0) return w;
    w = Compare(a.mu_sencKey, b.mu_sencKey);
    if (w!=0) return w;
    w = Compare(a.mu_concatPart, b.mu_concatPart);
    if (w!=0) return w;
    w = Compare(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msgType.MultisetSort();
    mu_ag.MultisetSort();
    mu_noncePart.MultisetSort();
    mu_constPart.MultisetSort();
    mu_tmpPart.MultisetSort();
    mu_k.MultisetSort();
    mu_modMsg1.MultisetSort();
    mu_modMsg2.MultisetSort();
    mu_hashMsg.MultisetSort();
    mu_hashKey.MultisetSort();
    mu_expMsg1.MultisetSort();
    mu_expMsg2.MultisetSort();
    mu_aencMsg.MultisetSort();
    mu_aencKey.MultisetSort();
    mu_sencMsg.MultisetSort();
    mu_sencKey.MultisetSort();
    mu_concatPart.MultisetSort();
    mu_length.MultisetSort();
  }
  void print_statistic()
  {
    mu_msgType.print_statistic();
    mu_ag.print_statistic();
    mu_noncePart.print_statistic();
    mu_constPart.print_statistic();
    mu_tmpPart.print_statistic();
    mu_k.print_statistic();
    mu_modMsg1.print_statistic();
    mu_modMsg2.print_statistic();
    mu_hashMsg.print_statistic();
    mu_hashKey.print_statistic();
    mu_expMsg1.print_statistic();
    mu_expMsg2.print_statistic();
    mu_aencMsg.print_statistic();
    mu_aencKey.print_statistic();
    mu_sencMsg.print_statistic();
    mu_sencKey.print_statistic();
    mu_concatPart.print_statistic();
    mu_length.print_statistic();
  }
  void clear() {
    mu_msgType.clear();
    mu_ag.clear();
    mu_noncePart.clear();
    mu_constPart.clear();
    mu_tmpPart.clear();
    mu_k.clear();
    mu_modMsg1.clear();
    mu_modMsg2.clear();
    mu_hashMsg.clear();
    mu_hashKey.clear();
    mu_expMsg1.clear();
    mu_expMsg2.clear();
    mu_aencMsg.clear();
    mu_aencKey.clear();
    mu_sencMsg.clear();
    mu_sencKey.clear();
    mu_concatPart.clear();
    mu_length.clear();
 };
  void undefine() {
    mu_msgType.undefine();
    mu_ag.undefine();
    mu_noncePart.undefine();
    mu_constPart.undefine();
    mu_tmpPart.undefine();
    mu_k.undefine();
    mu_modMsg1.undefine();
    mu_modMsg2.undefine();
    mu_hashMsg.undefine();
    mu_hashKey.undefine();
    mu_expMsg1.undefine();
    mu_expMsg2.undefine();
    mu_aencMsg.undefine();
    mu_aencKey.undefine();
    mu_sencMsg.undefine();
    mu_sencKey.undefine();
    mu_concatPart.undefine();
    mu_length.undefine();
 };
  void reset() {
    mu_msgType.reset();
    mu_ag.reset();
    mu_noncePart.reset();
    mu_constPart.reset();
    mu_tmpPart.reset();
    mu_k.reset();
    mu_modMsg1.reset();
    mu_modMsg2.reset();
    mu_hashMsg.reset();
    mu_hashKey.reset();
    mu_expMsg1.reset();
    mu_expMsg2.reset();
    mu_aencMsg.reset();
    mu_aencKey.reset();
    mu_sencMsg.reset();
    mu_sencKey.reset();
    mu_concatPart.reset();
    mu_length.reset();
 };
  void print() {
    mu_msgType.print();
    mu_ag.print();
    mu_noncePart.print();
    mu_constPart.print();
    mu_tmpPart.print();
    mu_k.print();
    mu_modMsg1.print();
    mu_modMsg2.print();
    mu_hashMsg.print();
    mu_hashKey.print();
    mu_expMsg1.print();
    mu_expMsg2.print();
    mu_aencMsg.print();
    mu_aencKey.print();
    mu_sencMsg.print();
    mu_sencKey.print();
    mu_concatPart.print();
    mu_length.print();
  };
  void print_diff(state *prevstate) {
    mu_msgType.print_diff(prevstate);
    mu_ag.print_diff(prevstate);
    mu_noncePart.print_diff(prevstate);
    mu_constPart.print_diff(prevstate);
    mu_tmpPart.print_diff(prevstate);
    mu_k.print_diff(prevstate);
    mu_modMsg1.print_diff(prevstate);
    mu_modMsg2.print_diff(prevstate);
    mu_hashMsg.print_diff(prevstate);
    mu_hashKey.print_diff(prevstate);
    mu_expMsg1.print_diff(prevstate);
    mu_expMsg2.print_diff(prevstate);
    mu_aencMsg.print_diff(prevstate);
    mu_aencKey.print_diff(prevstate);
    mu_sencMsg.print_diff(prevstate);
    mu_sencKey.print_diff(prevstate);
    mu_concatPart.print_diff(prevstate);
    mu_length.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msgType.to_state(thestate);
    mu_ag.to_state(thestate);
    mu_noncePart.to_state(thestate);
    mu_constPart.to_state(thestate);
    mu_tmpPart.to_state(thestate);
    mu_k.to_state(thestate);
    mu_modMsg1.to_state(thestate);
    mu_modMsg2.to_state(thestate);
    mu_hashMsg.to_state(thestate);
    mu_hashKey.to_state(thestate);
    mu_expMsg1.to_state(thestate);
    mu_expMsg2.to_state(thestate);
    mu_aencMsg.to_state(thestate);
    mu_aencKey.to_state(thestate);
    mu_sencMsg.to_state(thestate);
    mu_sencKey.to_state(thestate);
    mu_concatPart.to_state(thestate);
    mu_length.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Message& operator= (const mu_1_Message& from) {
    mu_msgType.value(from.mu_msgType.value());
    mu_ag.value(from.mu_ag.value());
    mu_noncePart.value(from.mu_noncePart.value());
    mu_constPart.value(from.mu_constPart.value());
    mu_tmpPart.value(from.mu_tmpPart.value());
    mu_k = from.mu_k;
    mu_modMsg1.value(from.mu_modMsg1.value());
    mu_modMsg2.value(from.mu_modMsg2.value());
    mu_hashMsg.value(from.mu_hashMsg.value());
    mu_hashKey.value(from.mu_hashKey.value());
    mu_expMsg1.value(from.mu_expMsg1.value());
    mu_expMsg2.value(from.mu_expMsg2.value());
    mu_aencMsg.value(from.mu_aencMsg.value());
    mu_aencKey.value(from.mu_aencKey.value());
    mu_sencMsg.value(from.mu_sencMsg.value());
    mu_sencKey.value(from.mu_sencKey.value());
    mu_concatPart = from.mu_concatPart;
    mu_length.value(from.mu_length.value());
    return *this;
  };
};

  void mu_1_Message::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Message::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Message::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msgType.set_self_2(name, ".msgType", os + 0 ); else mu_msgType.set_self_2(NULL, NULL, 0);
  if (name) mu_ag.set_self_2(name, ".ag", os + 8 ); else mu_ag.set_self_2(NULL, NULL, 0);
  if (name) mu_noncePart.set_self_2(name, ".noncePart", os + 16 ); else mu_noncePart.set_self_2(NULL, NULL, 0);
  if (name) mu_constPart.set_self_2(name, ".constPart", os + 24 ); else mu_constPart.set_self_2(NULL, NULL, 0);
  if (name) mu_tmpPart.set_self_2(name, ".tmpPart", os + 32 ); else mu_tmpPart.set_self_2(NULL, NULL, 0);
  if (name) mu_k.set_self_2(name, ".k", os + 40 ); else mu_k.set_self_2(NULL, NULL, 0);
  if (name) mu_modMsg1.set_self_2(name, ".modMsg1", os + 80 ); else mu_modMsg1.set_self_2(NULL, NULL, 0);
  if (name) mu_modMsg2.set_self_2(name, ".modMsg2", os + 88 ); else mu_modMsg2.set_self_2(NULL, NULL, 0);
  if (name) mu_hashMsg.set_self_2(name, ".hashMsg", os + 96 ); else mu_hashMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_hashKey.set_self_2(name, ".hashKey", os + 104 ); else mu_hashKey.set_self_2(NULL, NULL, 0);
  if (name) mu_expMsg1.set_self_2(name, ".expMsg1", os + 112 ); else mu_expMsg1.set_self_2(NULL, NULL, 0);
  if (name) mu_expMsg2.set_self_2(name, ".expMsg2", os + 120 ); else mu_expMsg2.set_self_2(NULL, NULL, 0);
  if (name) mu_aencMsg.set_self_2(name, ".aencMsg", os + 128 ); else mu_aencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_aencKey.set_self_2(name, ".aencKey", os + 136 ); else mu_aencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_sencMsg.set_self_2(name, ".sencMsg", os + 144 ); else mu_sencMsg.set_self_2(NULL, NULL, 0);
  if (name) mu_sencKey.set_self_2(name, ".sencKey", os + 152 ); else mu_sencKey.set_self_2(NULL, NULL, 0);
  if (name) mu_concatPart.set_self_2(name, ".concatPart", os + 160 ); else mu_concatPart.set_self_2(NULL, NULL, 0);
  if (name) mu_length.set_self_2(name, ".length", os + 208 ); else mu_length.set_self_2(NULL, NULL, 0);
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu_1_Channel
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_Message mu_msg;
  mu_1_AgentType mu_sender;
  mu_1_AgentType mu_receiver;
  mu_0_boolean mu_empty;
  mu_1_Channel ( const char *n, int os ) { set_self(n,os); };
  mu_1_Channel ( void ) {};

  virtual ~mu_1_Channel(); 
friend int CompareWeight(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = CompareWeight(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = CompareWeight(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = CompareWeight(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Channel& a, mu_1_Channel& b)
  {
    int w;
    w = Compare(a.mu_msg, b.mu_msg);
    if (w!=0) return w;
    w = Compare(a.mu_sender, b.mu_sender);
    if (w!=0) return w;
    w = Compare(a.mu_receiver, b.mu_receiver);
    if (w!=0) return w;
    w = Compare(a.mu_empty, b.mu_empty);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_msg.MultisetSort();
    mu_sender.MultisetSort();
    mu_receiver.MultisetSort();
    mu_empty.MultisetSort();
  }
  void print_statistic()
  {
    mu_msg.print_statistic();
    mu_sender.print_statistic();
    mu_receiver.print_statistic();
    mu_empty.print_statistic();
  }
  void clear() {
    mu_msg.clear();
    mu_sender.clear();
    mu_receiver.clear();
    mu_empty.clear();
 };
  void undefine() {
    mu_msg.undefine();
    mu_sender.undefine();
    mu_receiver.undefine();
    mu_empty.undefine();
 };
  void reset() {
    mu_msg.reset();
    mu_sender.reset();
    mu_receiver.reset();
    mu_empty.reset();
 };
  void print() {
    mu_msg.print();
    mu_sender.print();
    mu_receiver.print();
    mu_empty.print();
  };
  void print_diff(state *prevstate) {
    mu_msg.print_diff(prevstate);
    mu_sender.print_diff(prevstate);
    mu_receiver.print_diff(prevstate);
    mu_empty.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_msg.to_state(thestate);
    mu_sender.to_state(thestate);
    mu_receiver.to_state(thestate);
    mu_empty.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Channel& operator= (const mu_1_Channel& from) {
    mu_msg = from.mu_msg;
    mu_sender.value(from.mu_sender.value());
    mu_receiver.value(from.mu_receiver.value());
    mu_empty.value(from.mu_empty.value());
    return *this;
  };
};

  void mu_1_Channel::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Channel::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Channel::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_msg.set_self_2(name, ".msg", os + 0 ); else mu_msg.set_self_2(NULL, NULL, 0);
  if (name) mu_sender.set_self_2(name, ".sender", os + 216 ); else mu_sender.set_self_2(NULL, NULL, 0);
  if (name) mu_receiver.set_self_2(name, ".receiver", os + 224 ); else mu_receiver.set_self_2(NULL, NULL, 0);
  if (name) mu_empty.set_self_2(name, ".empty", os + 232 ); else mu_empty.set_self_2(NULL, NULL, 0);
}

mu_1_Channel::~mu_1_Channel()
{
}

/*** end record declaration ***/
mu_1_Channel mu_1_Channel_undefined_var;

class mu_1_RoleA
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na;
  mu_1_NonceType mu_N;
  mu_1_NonceType mu_Kab;
  mu_1_NonceType mu_Nb;
  mu_1_NonceType mu_na;
  mu_1_NonceType mu_n;
  mu_1_NonceType mu_kab;
  mu_1_NonceType mu_nb;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_S;
  mu_1_AgentType mu_B;
  mu_1_Message mu_m1;
  mu_1_Message mu_m2;
  mu_1_NonceType mu_locNa;
  mu_1_NonceType mu_locN;
  mu_1_NonceType mu_locKab;
  mu_1_NonceType mu_locNb;
  mu_1_NonceType mu_locna;
  mu_1_NonceType mu_locn;
  mu_1_NonceType mu_lockab;
  mu_1_NonceType mu_locnb;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locS;
  mu_1_AgentType mu_locB;
  mu_1_Message mu_locm1;
  mu_1_Message mu_locm2;
  mu_1_AStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleA ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleA ( void ) {};

  virtual ~mu_1_RoleA(); 
friend int CompareWeight(mu_1_RoleA& a, mu_1_RoleA& b)
  {
    int w;
    w = CompareWeight(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_N, b.mu_N);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Kab, b.mu_Kab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_na, b.mu_na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_n, b.mu_n);
    if (w!=0) return w;
    w = CompareWeight(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_nb, b.mu_nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m2, b.mu_m2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN, b.mu_locN);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locKab, b.mu_locKab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locna, b.mu_locna);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locn, b.mu_locn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locnb, b.mu_locnb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm2, b.mu_locm2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleA& a, mu_1_RoleA& b)
  {
    int w;
    w = Compare(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = Compare(a.mu_N, b.mu_N);
    if (w!=0) return w;
    w = Compare(a.mu_Kab, b.mu_Kab);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_na, b.mu_na);
    if (w!=0) return w;
    w = Compare(a.mu_n, b.mu_n);
    if (w!=0) return w;
    w = Compare(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = Compare(a.mu_nb, b.mu_nb);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = Compare(a.mu_m2, b.mu_m2);
    if (w!=0) return w;
    w = Compare(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = Compare(a.mu_locN, b.mu_locN);
    if (w!=0) return w;
    w = Compare(a.mu_locKab, b.mu_locKab);
    if (w!=0) return w;
    w = Compare(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = Compare(a.mu_locna, b.mu_locna);
    if (w!=0) return w;
    w = Compare(a.mu_locn, b.mu_locn);
    if (w!=0) return w;
    w = Compare(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = Compare(a.mu_locnb, b.mu_locnb);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = Compare(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = Compare(a.mu_locm2, b.mu_locm2);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Na.MultisetSort();
    mu_N.MultisetSort();
    mu_Kab.MultisetSort();
    mu_Nb.MultisetSort();
    mu_na.MultisetSort();
    mu_n.MultisetSort();
    mu_kab.MultisetSort();
    mu_nb.MultisetSort();
    mu_A.MultisetSort();
    mu_S.MultisetSort();
    mu_B.MultisetSort();
    mu_m1.MultisetSort();
    mu_m2.MultisetSort();
    mu_locNa.MultisetSort();
    mu_locN.MultisetSort();
    mu_locKab.MultisetSort();
    mu_locNb.MultisetSort();
    mu_locna.MultisetSort();
    mu_locn.MultisetSort();
    mu_lockab.MultisetSort();
    mu_locnb.MultisetSort();
    mu_locA.MultisetSort();
    mu_locS.MultisetSort();
    mu_locB.MultisetSort();
    mu_locm1.MultisetSort();
    mu_locm2.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na.print_statistic();
    mu_N.print_statistic();
    mu_Kab.print_statistic();
    mu_Nb.print_statistic();
    mu_na.print_statistic();
    mu_n.print_statistic();
    mu_kab.print_statistic();
    mu_nb.print_statistic();
    mu_A.print_statistic();
    mu_S.print_statistic();
    mu_B.print_statistic();
    mu_m1.print_statistic();
    mu_m2.print_statistic();
    mu_locNa.print_statistic();
    mu_locN.print_statistic();
    mu_locKab.print_statistic();
    mu_locNb.print_statistic();
    mu_locna.print_statistic();
    mu_locn.print_statistic();
    mu_lockab.print_statistic();
    mu_locnb.print_statistic();
    mu_locA.print_statistic();
    mu_locS.print_statistic();
    mu_locB.print_statistic();
    mu_locm1.print_statistic();
    mu_locm2.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na.clear();
    mu_N.clear();
    mu_Kab.clear();
    mu_Nb.clear();
    mu_na.clear();
    mu_n.clear();
    mu_kab.clear();
    mu_nb.clear();
    mu_A.clear();
    mu_S.clear();
    mu_B.clear();
    mu_m1.clear();
    mu_m2.clear();
    mu_locNa.clear();
    mu_locN.clear();
    mu_locKab.clear();
    mu_locNb.clear();
    mu_locna.clear();
    mu_locn.clear();
    mu_lockab.clear();
    mu_locnb.clear();
    mu_locA.clear();
    mu_locS.clear();
    mu_locB.clear();
    mu_locm1.clear();
    mu_locm2.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na.undefine();
    mu_N.undefine();
    mu_Kab.undefine();
    mu_Nb.undefine();
    mu_na.undefine();
    mu_n.undefine();
    mu_kab.undefine();
    mu_nb.undefine();
    mu_A.undefine();
    mu_S.undefine();
    mu_B.undefine();
    mu_m1.undefine();
    mu_m2.undefine();
    mu_locNa.undefine();
    mu_locN.undefine();
    mu_locKab.undefine();
    mu_locNb.undefine();
    mu_locna.undefine();
    mu_locn.undefine();
    mu_lockab.undefine();
    mu_locnb.undefine();
    mu_locA.undefine();
    mu_locS.undefine();
    mu_locB.undefine();
    mu_locm1.undefine();
    mu_locm2.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na.reset();
    mu_N.reset();
    mu_Kab.reset();
    mu_Nb.reset();
    mu_na.reset();
    mu_n.reset();
    mu_kab.reset();
    mu_nb.reset();
    mu_A.reset();
    mu_S.reset();
    mu_B.reset();
    mu_m1.reset();
    mu_m2.reset();
    mu_locNa.reset();
    mu_locN.reset();
    mu_locKab.reset();
    mu_locNb.reset();
    mu_locna.reset();
    mu_locn.reset();
    mu_lockab.reset();
    mu_locnb.reset();
    mu_locA.reset();
    mu_locS.reset();
    mu_locB.reset();
    mu_locm1.reset();
    mu_locm2.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na.print();
    mu_N.print();
    mu_Kab.print();
    mu_Nb.print();
    mu_na.print();
    mu_n.print();
    mu_kab.print();
    mu_nb.print();
    mu_A.print();
    mu_S.print();
    mu_B.print();
    mu_m1.print();
    mu_m2.print();
    mu_locNa.print();
    mu_locN.print();
    mu_locKab.print();
    mu_locNb.print();
    mu_locna.print();
    mu_locn.print();
    mu_lockab.print();
    mu_locnb.print();
    mu_locA.print();
    mu_locS.print();
    mu_locB.print();
    mu_locm1.print();
    mu_locm2.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na.print_diff(prevstate);
    mu_N.print_diff(prevstate);
    mu_Kab.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_na.print_diff(prevstate);
    mu_n.print_diff(prevstate);
    mu_kab.print_diff(prevstate);
    mu_nb.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_S.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_m1.print_diff(prevstate);
    mu_m2.print_diff(prevstate);
    mu_locNa.print_diff(prevstate);
    mu_locN.print_diff(prevstate);
    mu_locKab.print_diff(prevstate);
    mu_locNb.print_diff(prevstate);
    mu_locna.print_diff(prevstate);
    mu_locn.print_diff(prevstate);
    mu_lockab.print_diff(prevstate);
    mu_locnb.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locS.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_locm1.print_diff(prevstate);
    mu_locm2.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na.to_state(thestate);
    mu_N.to_state(thestate);
    mu_Kab.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_na.to_state(thestate);
    mu_n.to_state(thestate);
    mu_kab.to_state(thestate);
    mu_nb.to_state(thestate);
    mu_A.to_state(thestate);
    mu_S.to_state(thestate);
    mu_B.to_state(thestate);
    mu_m1.to_state(thestate);
    mu_m2.to_state(thestate);
    mu_locNa.to_state(thestate);
    mu_locN.to_state(thestate);
    mu_locKab.to_state(thestate);
    mu_locNb.to_state(thestate);
    mu_locna.to_state(thestate);
    mu_locn.to_state(thestate);
    mu_lockab.to_state(thestate);
    mu_locnb.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locS.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_locm1.to_state(thestate);
    mu_locm2.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleA& operator= (const mu_1_RoleA& from) {
    mu_Na.value(from.mu_Na.value());
    mu_N.value(from.mu_N.value());
    mu_Kab.value(from.mu_Kab.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_na.value(from.mu_na.value());
    mu_n.value(from.mu_n.value());
    mu_kab.value(from.mu_kab.value());
    mu_nb.value(from.mu_nb.value());
    mu_A.value(from.mu_A.value());
    mu_S.value(from.mu_S.value());
    mu_B.value(from.mu_B.value());
    mu_m1 = from.mu_m1;
    mu_m2 = from.mu_m2;
    mu_locNa.value(from.mu_locNa.value());
    mu_locN.value(from.mu_locN.value());
    mu_locKab.value(from.mu_locKab.value());
    mu_locNb.value(from.mu_locNb.value());
    mu_locna.value(from.mu_locna.value());
    mu_locn.value(from.mu_locn.value());
    mu_lockab.value(from.mu_lockab.value());
    mu_locnb.value(from.mu_locnb.value());
    mu_locA.value(from.mu_locA.value());
    mu_locS.value(from.mu_locS.value());
    mu_locB.value(from.mu_locB.value());
    mu_locm1 = from.mu_locm1;
    mu_locm2 = from.mu_locm2;
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleA::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleA::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleA::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na.set_self_2(name, ".Na", os + 0 ); else mu_Na.set_self_2(NULL, NULL, 0);
  if (name) mu_N.set_self_2(name, ".N", os + 8 ); else mu_N.set_self_2(NULL, NULL, 0);
  if (name) mu_Kab.set_self_2(name, ".Kab", os + 16 ); else mu_Kab.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 24 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_na.set_self_2(name, ".na", os + 32 ); else mu_na.set_self_2(NULL, NULL, 0);
  if (name) mu_n.set_self_2(name, ".n", os + 40 ); else mu_n.set_self_2(NULL, NULL, 0);
  if (name) mu_kab.set_self_2(name, ".kab", os + 48 ); else mu_kab.set_self_2(NULL, NULL, 0);
  if (name) mu_nb.set_self_2(name, ".nb", os + 56 ); else mu_nb.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 64 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_S.set_self_2(name, ".S", os + 72 ); else mu_S.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 80 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_m1.set_self_2(name, ".m1", os + 88 ); else mu_m1.set_self_2(NULL, NULL, 0);
  if (name) mu_m2.set_self_2(name, ".m2", os + 304 ); else mu_m2.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa.set_self_2(name, ".locNa", os + 520 ); else mu_locNa.set_self_2(NULL, NULL, 0);
  if (name) mu_locN.set_self_2(name, ".locN", os + 528 ); else mu_locN.set_self_2(NULL, NULL, 0);
  if (name) mu_locKab.set_self_2(name, ".locKab", os + 536 ); else mu_locKab.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb.set_self_2(name, ".locNb", os + 544 ); else mu_locNb.set_self_2(NULL, NULL, 0);
  if (name) mu_locna.set_self_2(name, ".locna", os + 552 ); else mu_locna.set_self_2(NULL, NULL, 0);
  if (name) mu_locn.set_self_2(name, ".locn", os + 560 ); else mu_locn.set_self_2(NULL, NULL, 0);
  if (name) mu_lockab.set_self_2(name, ".lockab", os + 568 ); else mu_lockab.set_self_2(NULL, NULL, 0);
  if (name) mu_locnb.set_self_2(name, ".locnb", os + 576 ); else mu_locnb.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 584 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locS.set_self_2(name, ".locS", os + 592 ); else mu_locS.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 600 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_locm1.set_self_2(name, ".locm1", os + 608 ); else mu_locm1.set_self_2(NULL, NULL, 0);
  if (name) mu_locm2.set_self_2(name, ".locm2", os + 824 ); else mu_locm2.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 1040 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 1048 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleA::~mu_1_RoleA()
{
}

/*** end record declaration ***/
mu_1_RoleA mu_1_RoleA_undefined_var;

class mu_1_RoleS
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na;
  mu_1_NonceType mu_N;
  mu_1_NonceType mu_Kab;
  mu_1_NonceType mu_Nb;
  mu_1_NonceType mu_na;
  mu_1_NonceType mu_n;
  mu_1_NonceType mu_kab;
  mu_1_NonceType mu_nb;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_S;
  mu_1_AgentType mu_B;
  mu_1_Message mu_m1;
  mu_1_Message mu_m2;
  mu_1_NonceType mu_locNa;
  mu_1_NonceType mu_locN;
  mu_1_NonceType mu_locKab;
  mu_1_NonceType mu_locNb;
  mu_1_NonceType mu_locna;
  mu_1_NonceType mu_locn;
  mu_1_NonceType mu_lockab;
  mu_1_NonceType mu_locnb;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locS;
  mu_1_AgentType mu_locB;
  mu_1_Message mu_locm1;
  mu_1_Message mu_locm2;
  mu_1_SStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleS ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleS ( void ) {};

  virtual ~mu_1_RoleS(); 
friend int CompareWeight(mu_1_RoleS& a, mu_1_RoleS& b)
  {
    int w;
    w = CompareWeight(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_N, b.mu_N);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Kab, b.mu_Kab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_na, b.mu_na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_n, b.mu_n);
    if (w!=0) return w;
    w = CompareWeight(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_nb, b.mu_nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m2, b.mu_m2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN, b.mu_locN);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locKab, b.mu_locKab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locna, b.mu_locna);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locn, b.mu_locn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locnb, b.mu_locnb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm2, b.mu_locm2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleS& a, mu_1_RoleS& b)
  {
    int w;
    w = Compare(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = Compare(a.mu_N, b.mu_N);
    if (w!=0) return w;
    w = Compare(a.mu_Kab, b.mu_Kab);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_na, b.mu_na);
    if (w!=0) return w;
    w = Compare(a.mu_n, b.mu_n);
    if (w!=0) return w;
    w = Compare(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = Compare(a.mu_nb, b.mu_nb);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = Compare(a.mu_m2, b.mu_m2);
    if (w!=0) return w;
    w = Compare(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = Compare(a.mu_locN, b.mu_locN);
    if (w!=0) return w;
    w = Compare(a.mu_locKab, b.mu_locKab);
    if (w!=0) return w;
    w = Compare(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = Compare(a.mu_locna, b.mu_locna);
    if (w!=0) return w;
    w = Compare(a.mu_locn, b.mu_locn);
    if (w!=0) return w;
    w = Compare(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = Compare(a.mu_locnb, b.mu_locnb);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = Compare(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = Compare(a.mu_locm2, b.mu_locm2);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Na.MultisetSort();
    mu_N.MultisetSort();
    mu_Kab.MultisetSort();
    mu_Nb.MultisetSort();
    mu_na.MultisetSort();
    mu_n.MultisetSort();
    mu_kab.MultisetSort();
    mu_nb.MultisetSort();
    mu_A.MultisetSort();
    mu_S.MultisetSort();
    mu_B.MultisetSort();
    mu_m1.MultisetSort();
    mu_m2.MultisetSort();
    mu_locNa.MultisetSort();
    mu_locN.MultisetSort();
    mu_locKab.MultisetSort();
    mu_locNb.MultisetSort();
    mu_locna.MultisetSort();
    mu_locn.MultisetSort();
    mu_lockab.MultisetSort();
    mu_locnb.MultisetSort();
    mu_locA.MultisetSort();
    mu_locS.MultisetSort();
    mu_locB.MultisetSort();
    mu_locm1.MultisetSort();
    mu_locm2.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na.print_statistic();
    mu_N.print_statistic();
    mu_Kab.print_statistic();
    mu_Nb.print_statistic();
    mu_na.print_statistic();
    mu_n.print_statistic();
    mu_kab.print_statistic();
    mu_nb.print_statistic();
    mu_A.print_statistic();
    mu_S.print_statistic();
    mu_B.print_statistic();
    mu_m1.print_statistic();
    mu_m2.print_statistic();
    mu_locNa.print_statistic();
    mu_locN.print_statistic();
    mu_locKab.print_statistic();
    mu_locNb.print_statistic();
    mu_locna.print_statistic();
    mu_locn.print_statistic();
    mu_lockab.print_statistic();
    mu_locnb.print_statistic();
    mu_locA.print_statistic();
    mu_locS.print_statistic();
    mu_locB.print_statistic();
    mu_locm1.print_statistic();
    mu_locm2.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na.clear();
    mu_N.clear();
    mu_Kab.clear();
    mu_Nb.clear();
    mu_na.clear();
    mu_n.clear();
    mu_kab.clear();
    mu_nb.clear();
    mu_A.clear();
    mu_S.clear();
    mu_B.clear();
    mu_m1.clear();
    mu_m2.clear();
    mu_locNa.clear();
    mu_locN.clear();
    mu_locKab.clear();
    mu_locNb.clear();
    mu_locna.clear();
    mu_locn.clear();
    mu_lockab.clear();
    mu_locnb.clear();
    mu_locA.clear();
    mu_locS.clear();
    mu_locB.clear();
    mu_locm1.clear();
    mu_locm2.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na.undefine();
    mu_N.undefine();
    mu_Kab.undefine();
    mu_Nb.undefine();
    mu_na.undefine();
    mu_n.undefine();
    mu_kab.undefine();
    mu_nb.undefine();
    mu_A.undefine();
    mu_S.undefine();
    mu_B.undefine();
    mu_m1.undefine();
    mu_m2.undefine();
    mu_locNa.undefine();
    mu_locN.undefine();
    mu_locKab.undefine();
    mu_locNb.undefine();
    mu_locna.undefine();
    mu_locn.undefine();
    mu_lockab.undefine();
    mu_locnb.undefine();
    mu_locA.undefine();
    mu_locS.undefine();
    mu_locB.undefine();
    mu_locm1.undefine();
    mu_locm2.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na.reset();
    mu_N.reset();
    mu_Kab.reset();
    mu_Nb.reset();
    mu_na.reset();
    mu_n.reset();
    mu_kab.reset();
    mu_nb.reset();
    mu_A.reset();
    mu_S.reset();
    mu_B.reset();
    mu_m1.reset();
    mu_m2.reset();
    mu_locNa.reset();
    mu_locN.reset();
    mu_locKab.reset();
    mu_locNb.reset();
    mu_locna.reset();
    mu_locn.reset();
    mu_lockab.reset();
    mu_locnb.reset();
    mu_locA.reset();
    mu_locS.reset();
    mu_locB.reset();
    mu_locm1.reset();
    mu_locm2.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na.print();
    mu_N.print();
    mu_Kab.print();
    mu_Nb.print();
    mu_na.print();
    mu_n.print();
    mu_kab.print();
    mu_nb.print();
    mu_A.print();
    mu_S.print();
    mu_B.print();
    mu_m1.print();
    mu_m2.print();
    mu_locNa.print();
    mu_locN.print();
    mu_locKab.print();
    mu_locNb.print();
    mu_locna.print();
    mu_locn.print();
    mu_lockab.print();
    mu_locnb.print();
    mu_locA.print();
    mu_locS.print();
    mu_locB.print();
    mu_locm1.print();
    mu_locm2.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na.print_diff(prevstate);
    mu_N.print_diff(prevstate);
    mu_Kab.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_na.print_diff(prevstate);
    mu_n.print_diff(prevstate);
    mu_kab.print_diff(prevstate);
    mu_nb.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_S.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_m1.print_diff(prevstate);
    mu_m2.print_diff(prevstate);
    mu_locNa.print_diff(prevstate);
    mu_locN.print_diff(prevstate);
    mu_locKab.print_diff(prevstate);
    mu_locNb.print_diff(prevstate);
    mu_locna.print_diff(prevstate);
    mu_locn.print_diff(prevstate);
    mu_lockab.print_diff(prevstate);
    mu_locnb.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locS.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_locm1.print_diff(prevstate);
    mu_locm2.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na.to_state(thestate);
    mu_N.to_state(thestate);
    mu_Kab.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_na.to_state(thestate);
    mu_n.to_state(thestate);
    mu_kab.to_state(thestate);
    mu_nb.to_state(thestate);
    mu_A.to_state(thestate);
    mu_S.to_state(thestate);
    mu_B.to_state(thestate);
    mu_m1.to_state(thestate);
    mu_m2.to_state(thestate);
    mu_locNa.to_state(thestate);
    mu_locN.to_state(thestate);
    mu_locKab.to_state(thestate);
    mu_locNb.to_state(thestate);
    mu_locna.to_state(thestate);
    mu_locn.to_state(thestate);
    mu_lockab.to_state(thestate);
    mu_locnb.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locS.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_locm1.to_state(thestate);
    mu_locm2.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleS& operator= (const mu_1_RoleS& from) {
    mu_Na.value(from.mu_Na.value());
    mu_N.value(from.mu_N.value());
    mu_Kab.value(from.mu_Kab.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_na.value(from.mu_na.value());
    mu_n.value(from.mu_n.value());
    mu_kab.value(from.mu_kab.value());
    mu_nb.value(from.mu_nb.value());
    mu_A.value(from.mu_A.value());
    mu_S.value(from.mu_S.value());
    mu_B.value(from.mu_B.value());
    mu_m1 = from.mu_m1;
    mu_m2 = from.mu_m2;
    mu_locNa.value(from.mu_locNa.value());
    mu_locN.value(from.mu_locN.value());
    mu_locKab.value(from.mu_locKab.value());
    mu_locNb.value(from.mu_locNb.value());
    mu_locna.value(from.mu_locna.value());
    mu_locn.value(from.mu_locn.value());
    mu_lockab.value(from.mu_lockab.value());
    mu_locnb.value(from.mu_locnb.value());
    mu_locA.value(from.mu_locA.value());
    mu_locS.value(from.mu_locS.value());
    mu_locB.value(from.mu_locB.value());
    mu_locm1 = from.mu_locm1;
    mu_locm2 = from.mu_locm2;
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleS::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleS::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleS::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na.set_self_2(name, ".Na", os + 0 ); else mu_Na.set_self_2(NULL, NULL, 0);
  if (name) mu_N.set_self_2(name, ".N", os + 8 ); else mu_N.set_self_2(NULL, NULL, 0);
  if (name) mu_Kab.set_self_2(name, ".Kab", os + 16 ); else mu_Kab.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 24 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_na.set_self_2(name, ".na", os + 32 ); else mu_na.set_self_2(NULL, NULL, 0);
  if (name) mu_n.set_self_2(name, ".n", os + 40 ); else mu_n.set_self_2(NULL, NULL, 0);
  if (name) mu_kab.set_self_2(name, ".kab", os + 48 ); else mu_kab.set_self_2(NULL, NULL, 0);
  if (name) mu_nb.set_self_2(name, ".nb", os + 56 ); else mu_nb.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 64 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_S.set_self_2(name, ".S", os + 72 ); else mu_S.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 80 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_m1.set_self_2(name, ".m1", os + 88 ); else mu_m1.set_self_2(NULL, NULL, 0);
  if (name) mu_m2.set_self_2(name, ".m2", os + 304 ); else mu_m2.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa.set_self_2(name, ".locNa", os + 520 ); else mu_locNa.set_self_2(NULL, NULL, 0);
  if (name) mu_locN.set_self_2(name, ".locN", os + 528 ); else mu_locN.set_self_2(NULL, NULL, 0);
  if (name) mu_locKab.set_self_2(name, ".locKab", os + 536 ); else mu_locKab.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb.set_self_2(name, ".locNb", os + 544 ); else mu_locNb.set_self_2(NULL, NULL, 0);
  if (name) mu_locna.set_self_2(name, ".locna", os + 552 ); else mu_locna.set_self_2(NULL, NULL, 0);
  if (name) mu_locn.set_self_2(name, ".locn", os + 560 ); else mu_locn.set_self_2(NULL, NULL, 0);
  if (name) mu_lockab.set_self_2(name, ".lockab", os + 568 ); else mu_lockab.set_self_2(NULL, NULL, 0);
  if (name) mu_locnb.set_self_2(name, ".locnb", os + 576 ); else mu_locnb.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 584 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locS.set_self_2(name, ".locS", os + 592 ); else mu_locS.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 600 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_locm1.set_self_2(name, ".locm1", os + 608 ); else mu_locm1.set_self_2(NULL, NULL, 0);
  if (name) mu_locm2.set_self_2(name, ".locm2", os + 824 ); else mu_locm2.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 1040 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 1048 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleS::~mu_1_RoleS()
{
}

/*** end record declaration ***/
mu_1_RoleS mu_1_RoleS_undefined_var;

class mu_1_RoleB
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_NonceType mu_Na;
  mu_1_NonceType mu_N;
  mu_1_NonceType mu_Kab;
  mu_1_NonceType mu_Nb;
  mu_1_NonceType mu_na;
  mu_1_NonceType mu_n;
  mu_1_NonceType mu_kab;
  mu_1_NonceType mu_nb;
  mu_1_AgentType mu_A;
  mu_1_AgentType mu_S;
  mu_1_AgentType mu_B;
  mu_1_Message mu_m1;
  mu_1_Message mu_m2;
  mu_1_NonceType mu_locNa;
  mu_1_NonceType mu_locN;
  mu_1_NonceType mu_locKab;
  mu_1_NonceType mu_locNb;
  mu_1_NonceType mu_locna;
  mu_1_NonceType mu_locn;
  mu_1_NonceType mu_lockab;
  mu_1_NonceType mu_locnb;
  mu_1_AgentType mu_locA;
  mu_1_AgentType mu_locS;
  mu_1_AgentType mu_locB;
  mu_1_Message mu_locm1;
  mu_1_Message mu_locm2;
  mu_1_BStatus mu_st;
  mu_0_boolean mu_commit;
  mu_1_RoleB ( const char *n, int os ) { set_self(n,os); };
  mu_1_RoleB ( void ) {};

  virtual ~mu_1_RoleB(); 
friend int CompareWeight(mu_1_RoleB& a, mu_1_RoleB& b)
  {
    int w;
    w = CompareWeight(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_N, b.mu_N);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Kab, b.mu_Kab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_na, b.mu_na);
    if (w!=0) return w;
    w = CompareWeight(a.mu_n, b.mu_n);
    if (w!=0) return w;
    w = CompareWeight(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_nb, b.mu_nb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = CompareWeight(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = CompareWeight(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_m2, b.mu_m2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locN, b.mu_locN);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locKab, b.mu_locKab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locna, b.mu_locna);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locn, b.mu_locn);
    if (w!=0) return w;
    w = CompareWeight(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locnb, b.mu_locnb);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = CompareWeight(a.mu_locm2, b.mu_locm2);
    if (w!=0) return w;
    w = CompareWeight(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = CompareWeight(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_RoleB& a, mu_1_RoleB& b)
  {
    int w;
    w = Compare(a.mu_Na, b.mu_Na);
    if (w!=0) return w;
    w = Compare(a.mu_N, b.mu_N);
    if (w!=0) return w;
    w = Compare(a.mu_Kab, b.mu_Kab);
    if (w!=0) return w;
    w = Compare(a.mu_Nb, b.mu_Nb);
    if (w!=0) return w;
    w = Compare(a.mu_na, b.mu_na);
    if (w!=0) return w;
    w = Compare(a.mu_n, b.mu_n);
    if (w!=0) return w;
    w = Compare(a.mu_kab, b.mu_kab);
    if (w!=0) return w;
    w = Compare(a.mu_nb, b.mu_nb);
    if (w!=0) return w;
    w = Compare(a.mu_A, b.mu_A);
    if (w!=0) return w;
    w = Compare(a.mu_S, b.mu_S);
    if (w!=0) return w;
    w = Compare(a.mu_B, b.mu_B);
    if (w!=0) return w;
    w = Compare(a.mu_m1, b.mu_m1);
    if (w!=0) return w;
    w = Compare(a.mu_m2, b.mu_m2);
    if (w!=0) return w;
    w = Compare(a.mu_locNa, b.mu_locNa);
    if (w!=0) return w;
    w = Compare(a.mu_locN, b.mu_locN);
    if (w!=0) return w;
    w = Compare(a.mu_locKab, b.mu_locKab);
    if (w!=0) return w;
    w = Compare(a.mu_locNb, b.mu_locNb);
    if (w!=0) return w;
    w = Compare(a.mu_locna, b.mu_locna);
    if (w!=0) return w;
    w = Compare(a.mu_locn, b.mu_locn);
    if (w!=0) return w;
    w = Compare(a.mu_lockab, b.mu_lockab);
    if (w!=0) return w;
    w = Compare(a.mu_locnb, b.mu_locnb);
    if (w!=0) return w;
    w = Compare(a.mu_locA, b.mu_locA);
    if (w!=0) return w;
    w = Compare(a.mu_locS, b.mu_locS);
    if (w!=0) return w;
    w = Compare(a.mu_locB, b.mu_locB);
    if (w!=0) return w;
    w = Compare(a.mu_locm1, b.mu_locm1);
    if (w!=0) return w;
    w = Compare(a.mu_locm2, b.mu_locm2);
    if (w!=0) return w;
    w = Compare(a.mu_st, b.mu_st);
    if (w!=0) return w;
    w = Compare(a.mu_commit, b.mu_commit);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_Na.MultisetSort();
    mu_N.MultisetSort();
    mu_Kab.MultisetSort();
    mu_Nb.MultisetSort();
    mu_na.MultisetSort();
    mu_n.MultisetSort();
    mu_kab.MultisetSort();
    mu_nb.MultisetSort();
    mu_A.MultisetSort();
    mu_S.MultisetSort();
    mu_B.MultisetSort();
    mu_m1.MultisetSort();
    mu_m2.MultisetSort();
    mu_locNa.MultisetSort();
    mu_locN.MultisetSort();
    mu_locKab.MultisetSort();
    mu_locNb.MultisetSort();
    mu_locna.MultisetSort();
    mu_locn.MultisetSort();
    mu_lockab.MultisetSort();
    mu_locnb.MultisetSort();
    mu_locA.MultisetSort();
    mu_locS.MultisetSort();
    mu_locB.MultisetSort();
    mu_locm1.MultisetSort();
    mu_locm2.MultisetSort();
    mu_st.MultisetSort();
    mu_commit.MultisetSort();
  }
  void print_statistic()
  {
    mu_Na.print_statistic();
    mu_N.print_statistic();
    mu_Kab.print_statistic();
    mu_Nb.print_statistic();
    mu_na.print_statistic();
    mu_n.print_statistic();
    mu_kab.print_statistic();
    mu_nb.print_statistic();
    mu_A.print_statistic();
    mu_S.print_statistic();
    mu_B.print_statistic();
    mu_m1.print_statistic();
    mu_m2.print_statistic();
    mu_locNa.print_statistic();
    mu_locN.print_statistic();
    mu_locKab.print_statistic();
    mu_locNb.print_statistic();
    mu_locna.print_statistic();
    mu_locn.print_statistic();
    mu_lockab.print_statistic();
    mu_locnb.print_statistic();
    mu_locA.print_statistic();
    mu_locS.print_statistic();
    mu_locB.print_statistic();
    mu_locm1.print_statistic();
    mu_locm2.print_statistic();
    mu_st.print_statistic();
    mu_commit.print_statistic();
  }
  void clear() {
    mu_Na.clear();
    mu_N.clear();
    mu_Kab.clear();
    mu_Nb.clear();
    mu_na.clear();
    mu_n.clear();
    mu_kab.clear();
    mu_nb.clear();
    mu_A.clear();
    mu_S.clear();
    mu_B.clear();
    mu_m1.clear();
    mu_m2.clear();
    mu_locNa.clear();
    mu_locN.clear();
    mu_locKab.clear();
    mu_locNb.clear();
    mu_locna.clear();
    mu_locn.clear();
    mu_lockab.clear();
    mu_locnb.clear();
    mu_locA.clear();
    mu_locS.clear();
    mu_locB.clear();
    mu_locm1.clear();
    mu_locm2.clear();
    mu_st.clear();
    mu_commit.clear();
 };
  void undefine() {
    mu_Na.undefine();
    mu_N.undefine();
    mu_Kab.undefine();
    mu_Nb.undefine();
    mu_na.undefine();
    mu_n.undefine();
    mu_kab.undefine();
    mu_nb.undefine();
    mu_A.undefine();
    mu_S.undefine();
    mu_B.undefine();
    mu_m1.undefine();
    mu_m2.undefine();
    mu_locNa.undefine();
    mu_locN.undefine();
    mu_locKab.undefine();
    mu_locNb.undefine();
    mu_locna.undefine();
    mu_locn.undefine();
    mu_lockab.undefine();
    mu_locnb.undefine();
    mu_locA.undefine();
    mu_locS.undefine();
    mu_locB.undefine();
    mu_locm1.undefine();
    mu_locm2.undefine();
    mu_st.undefine();
    mu_commit.undefine();
 };
  void reset() {
    mu_Na.reset();
    mu_N.reset();
    mu_Kab.reset();
    mu_Nb.reset();
    mu_na.reset();
    mu_n.reset();
    mu_kab.reset();
    mu_nb.reset();
    mu_A.reset();
    mu_S.reset();
    mu_B.reset();
    mu_m1.reset();
    mu_m2.reset();
    mu_locNa.reset();
    mu_locN.reset();
    mu_locKab.reset();
    mu_locNb.reset();
    mu_locna.reset();
    mu_locn.reset();
    mu_lockab.reset();
    mu_locnb.reset();
    mu_locA.reset();
    mu_locS.reset();
    mu_locB.reset();
    mu_locm1.reset();
    mu_locm2.reset();
    mu_st.reset();
    mu_commit.reset();
 };
  void print() {
    mu_Na.print();
    mu_N.print();
    mu_Kab.print();
    mu_Nb.print();
    mu_na.print();
    mu_n.print();
    mu_kab.print();
    mu_nb.print();
    mu_A.print();
    mu_S.print();
    mu_B.print();
    mu_m1.print();
    mu_m2.print();
    mu_locNa.print();
    mu_locN.print();
    mu_locKab.print();
    mu_locNb.print();
    mu_locna.print();
    mu_locn.print();
    mu_lockab.print();
    mu_locnb.print();
    mu_locA.print();
    mu_locS.print();
    mu_locB.print();
    mu_locm1.print();
    mu_locm2.print();
    mu_st.print();
    mu_commit.print();
  };
  void print_diff(state *prevstate) {
    mu_Na.print_diff(prevstate);
    mu_N.print_diff(prevstate);
    mu_Kab.print_diff(prevstate);
    mu_Nb.print_diff(prevstate);
    mu_na.print_diff(prevstate);
    mu_n.print_diff(prevstate);
    mu_kab.print_diff(prevstate);
    mu_nb.print_diff(prevstate);
    mu_A.print_diff(prevstate);
    mu_S.print_diff(prevstate);
    mu_B.print_diff(prevstate);
    mu_m1.print_diff(prevstate);
    mu_m2.print_diff(prevstate);
    mu_locNa.print_diff(prevstate);
    mu_locN.print_diff(prevstate);
    mu_locKab.print_diff(prevstate);
    mu_locNb.print_diff(prevstate);
    mu_locna.print_diff(prevstate);
    mu_locn.print_diff(prevstate);
    mu_lockab.print_diff(prevstate);
    mu_locnb.print_diff(prevstate);
    mu_locA.print_diff(prevstate);
    mu_locS.print_diff(prevstate);
    mu_locB.print_diff(prevstate);
    mu_locm1.print_diff(prevstate);
    mu_locm2.print_diff(prevstate);
    mu_st.print_diff(prevstate);
    mu_commit.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_Na.to_state(thestate);
    mu_N.to_state(thestate);
    mu_Kab.to_state(thestate);
    mu_Nb.to_state(thestate);
    mu_na.to_state(thestate);
    mu_n.to_state(thestate);
    mu_kab.to_state(thestate);
    mu_nb.to_state(thestate);
    mu_A.to_state(thestate);
    mu_S.to_state(thestate);
    mu_B.to_state(thestate);
    mu_m1.to_state(thestate);
    mu_m2.to_state(thestate);
    mu_locNa.to_state(thestate);
    mu_locN.to_state(thestate);
    mu_locKab.to_state(thestate);
    mu_locNb.to_state(thestate);
    mu_locna.to_state(thestate);
    mu_locn.to_state(thestate);
    mu_lockab.to_state(thestate);
    mu_locnb.to_state(thestate);
    mu_locA.to_state(thestate);
    mu_locS.to_state(thestate);
    mu_locB.to_state(thestate);
    mu_locm1.to_state(thestate);
    mu_locm2.to_state(thestate);
    mu_st.to_state(thestate);
    mu_commit.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_RoleB& operator= (const mu_1_RoleB& from) {
    mu_Na.value(from.mu_Na.value());
    mu_N.value(from.mu_N.value());
    mu_Kab.value(from.mu_Kab.value());
    mu_Nb.value(from.mu_Nb.value());
    mu_na.value(from.mu_na.value());
    mu_n.value(from.mu_n.value());
    mu_kab.value(from.mu_kab.value());
    mu_nb.value(from.mu_nb.value());
    mu_A.value(from.mu_A.value());
    mu_S.value(from.mu_S.value());
    mu_B.value(from.mu_B.value());
    mu_m1 = from.mu_m1;
    mu_m2 = from.mu_m2;
    mu_locNa.value(from.mu_locNa.value());
    mu_locN.value(from.mu_locN.value());
    mu_locKab.value(from.mu_locKab.value());
    mu_locNb.value(from.mu_locNb.value());
    mu_locna.value(from.mu_locna.value());
    mu_locn.value(from.mu_locn.value());
    mu_lockab.value(from.mu_lockab.value());
    mu_locnb.value(from.mu_locnb.value());
    mu_locA.value(from.mu_locA.value());
    mu_locS.value(from.mu_locS.value());
    mu_locB.value(from.mu_locB.value());
    mu_locm1 = from.mu_locm1;
    mu_locm2 = from.mu_locm2;
    mu_st.value(from.mu_st.value());
    mu_commit.value(from.mu_commit.value());
    return *this;
  };
};

  void mu_1_RoleB::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_RoleB::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_RoleB::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_Na.set_self_2(name, ".Na", os + 0 ); else mu_Na.set_self_2(NULL, NULL, 0);
  if (name) mu_N.set_self_2(name, ".N", os + 8 ); else mu_N.set_self_2(NULL, NULL, 0);
  if (name) mu_Kab.set_self_2(name, ".Kab", os + 16 ); else mu_Kab.set_self_2(NULL, NULL, 0);
  if (name) mu_Nb.set_self_2(name, ".Nb", os + 24 ); else mu_Nb.set_self_2(NULL, NULL, 0);
  if (name) mu_na.set_self_2(name, ".na", os + 32 ); else mu_na.set_self_2(NULL, NULL, 0);
  if (name) mu_n.set_self_2(name, ".n", os + 40 ); else mu_n.set_self_2(NULL, NULL, 0);
  if (name) mu_kab.set_self_2(name, ".kab", os + 48 ); else mu_kab.set_self_2(NULL, NULL, 0);
  if (name) mu_nb.set_self_2(name, ".nb", os + 56 ); else mu_nb.set_self_2(NULL, NULL, 0);
  if (name) mu_A.set_self_2(name, ".A", os + 64 ); else mu_A.set_self_2(NULL, NULL, 0);
  if (name) mu_S.set_self_2(name, ".S", os + 72 ); else mu_S.set_self_2(NULL, NULL, 0);
  if (name) mu_B.set_self_2(name, ".B", os + 80 ); else mu_B.set_self_2(NULL, NULL, 0);
  if (name) mu_m1.set_self_2(name, ".m1", os + 88 ); else mu_m1.set_self_2(NULL, NULL, 0);
  if (name) mu_m2.set_self_2(name, ".m2", os + 304 ); else mu_m2.set_self_2(NULL, NULL, 0);
  if (name) mu_locNa.set_self_2(name, ".locNa", os + 520 ); else mu_locNa.set_self_2(NULL, NULL, 0);
  if (name) mu_locN.set_self_2(name, ".locN", os + 528 ); else mu_locN.set_self_2(NULL, NULL, 0);
  if (name) mu_locKab.set_self_2(name, ".locKab", os + 536 ); else mu_locKab.set_self_2(NULL, NULL, 0);
  if (name) mu_locNb.set_self_2(name, ".locNb", os + 544 ); else mu_locNb.set_self_2(NULL, NULL, 0);
  if (name) mu_locna.set_self_2(name, ".locna", os + 552 ); else mu_locna.set_self_2(NULL, NULL, 0);
  if (name) mu_locn.set_self_2(name, ".locn", os + 560 ); else mu_locn.set_self_2(NULL, NULL, 0);
  if (name) mu_lockab.set_self_2(name, ".lockab", os + 568 ); else mu_lockab.set_self_2(NULL, NULL, 0);
  if (name) mu_locnb.set_self_2(name, ".locnb", os + 576 ); else mu_locnb.set_self_2(NULL, NULL, 0);
  if (name) mu_locA.set_self_2(name, ".locA", os + 584 ); else mu_locA.set_self_2(NULL, NULL, 0);
  if (name) mu_locS.set_self_2(name, ".locS", os + 592 ); else mu_locS.set_self_2(NULL, NULL, 0);
  if (name) mu_locB.set_self_2(name, ".locB", os + 600 ); else mu_locB.set_self_2(NULL, NULL, 0);
  if (name) mu_locm1.set_self_2(name, ".locm1", os + 608 ); else mu_locm1.set_self_2(NULL, NULL, 0);
  if (name) mu_locm2.set_self_2(name, ".locm2", os + 824 ); else mu_locm2.set_self_2(NULL, NULL, 0);
  if (name) mu_st.set_self_2(name, ".st", os + 1040 ); else mu_st.set_self_2(NULL, NULL, 0);
  if (name) mu_commit.set_self_2(name, ".commit", os + 1048 ); else mu_commit.set_self_2(NULL, NULL, 0);
}

mu_1_RoleB::~mu_1_RoleB()
{
}

/*** end record declaration ***/
mu_1_RoleB mu_1_RoleB_undefined_var;

class mu_1__type_1
{
 public:
  mu_1_indexType array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os) { set_self(n, os); };
  mu_1__type_1 ( void ) {};
  virtual ~mu_1__type_1 ();
  mu_1_indexType& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end array declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1_msgSet
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_1 mu_content;
  mu_1_indexType mu_length;
  mu_1_msgSet ( const char *n, int os ) { set_self(n,os); };
  mu_1_msgSet ( void ) {};

  virtual ~mu_1_msgSet(); 
friend int CompareWeight(mu_1_msgSet& a, mu_1_msgSet& b)
  {
    int w;
    w = CompareWeight(a.mu_content, b.mu_content);
    if (w!=0) return w;
    w = CompareWeight(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_msgSet& a, mu_1_msgSet& b)
  {
    int w;
    w = Compare(a.mu_content, b.mu_content);
    if (w!=0) return w;
    w = Compare(a.mu_length, b.mu_length);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_content.MultisetSort();
    mu_length.MultisetSort();
  }
  void print_statistic()
  {
    mu_content.print_statistic();
    mu_length.print_statistic();
  }
  void clear() {
    mu_content.clear();
    mu_length.clear();
 };
  void undefine() {
    mu_content.undefine();
    mu_length.undefine();
 };
  void reset() {
    mu_content.reset();
    mu_length.reset();
 };
  void print() {
    mu_content.print();
    mu_length.print();
  };
  void print_diff(state *prevstate) {
    mu_content.print_diff(prevstate);
    mu_length.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_content.to_state(thestate);
    mu_length.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_msgSet& operator= (const mu_1_msgSet& from) {
    mu_content = from.mu_content;
    mu_length.value(from.mu_length.value());
    return *this;
  };
};

  void mu_1_msgSet::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_msgSet::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_msgSet::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_content.set_self_2(name, ".content", os + 0 ); else mu_content.set_self_2(NULL, NULL, 0);
  if (name) mu_length.set_self_2(name, ".length", os + 808 ); else mu_length.set_self_2(NULL, NULL, 0);
}

mu_1_msgSet::~mu_1_msgSet()
{
}

/*** end record declaration ***/
mu_1_msgSet mu_1_msgSet_undefined_var;

class mu_1__type_2
{
 public:
  mu_1_Channel array[ 19 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_1_Channel& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 18 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 19; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<19; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<19; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<19; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<19; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 19; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 19; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 19; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 19; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 19; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 19; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_2::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 19; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 240 + os);
    delete[] s;
  }
};
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_1_RoleA array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_1_RoleA& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_3::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 1056 + os);
    delete[] s;
  }
};
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4
{
 public:
  mu_1_RoleS array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_1_RoleS& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_4::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 1056 + os);
    delete[] s;
  }
};
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_1_RoleB array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_1_RoleB& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_5::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 1; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 1), i * 1056 + os);
    delete[] s;
  }
};
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6
{
 public:
  mu_1_Message array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_1_Message& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 101; i++)
      array[i] = from.array[i];
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_6::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 216 + os);
    delete[] s;
  }
};
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1__type_7
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os) { set_self(n, os); };
  mu_1__type_7 ( void ) {};
  virtual ~mu_1__type_7 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_7::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end array declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_8::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_9::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_9::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_9::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_10::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_10::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_10::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

class mu_1__type_11
{
 public:
  mu_0_boolean array[ 101 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os) { set_self(n, os); };
  mu_1__type_11 ( void ) {};
  virtual ~mu_1__type_11 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 0 ) && ( index <= 100 ) )
      return array[ index - 0 ];
    else {
      if (index==UNDEFVAL) 
	Error.Error("Indexing to %s using an undefined value.", name);
      else
	Error.Error("%d not in index range of %s.", index, name);
      return array[0];
    }
#else
    return array[ index - 0 ];
#endif
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 101; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<101; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<101; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<101; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 101; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 101; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 101; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 101; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 101; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 101; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_11::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_11::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_11::set_self( const char *n, int os)
{
  char* s;
  name = (char *)n;
  for(int i = 0; i < 101; i++) {
    array[i].set_self_ar(n, s=tsprintf("%d",i + 0), i * 8 + os);
    delete[] s;
  }
};
mu_1__type_11::~mu_1__type_11()
{
}
/*** end array declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

const int mu_roleANum = 1;
const int mu_roleSNum = 1;
const int mu_roleBNum = 1;
const int mu_totalFact = 100;
const int mu_msgLength = 5;
const int mu_chanNum = 18;
const int mu_invokeNum = 10;
const int mu_anyAgent = 1;
const int mu_Intruder = 2;
const int mu_Alice = 3;
const int mu_Bob = 4;
const int mu_Server = 5;
const int mu_anyNonce = 6;
const int mu_Na = 7;
const int mu_N = 8;
const int mu_Kab = 9;
const int mu_Nb = 10;
const int mu_na = 11;
const int mu_n = 12;
const int mu_kab = 13;
const int mu_nb = 14;
const int mu_anyNumber = 15;
const int mu_null = 16;
const int mu_agent = 17;
const int mu_nonce = 18;
const int mu_key = 19;
const int mu_aenc = 20;
const int mu_senc = 21;
const int mu_concat = 22;
const int mu_hash = 23;
const int mu_tmp = 24;
const int mu_mod = 25;
const int mu_e = 26;
const int mu_number = 27;
const int mu_PK = 28;
const int mu_SK = 29;
const int mu_Symk = 30;
const int mu_MsgK = 31;
const int mu_A1 = 32;
const int mu_A2 = 33;
const int mu_S1 = 34;
const int mu_S2 = 35;
const int mu_B1 = 36;
const int mu_B2 = 37;
const int mu_B3 = 38;
const int mu_B4 = 39;
/*** Variable declaration ***/
mu_1__type_2 mu_ch("ch",0);

/*** Variable declaration ***/
mu_1__type_3 mu_roleA("roleA",4560);

/*** Variable declaration ***/
mu_1__type_4 mu_roleS("roleS",5616);

/*** Variable declaration ***/
mu_1__type_5 mu_roleB("roleB",6672);

/*** Variable declaration ***/
mu_1__type_6 mu_msgs("msgs",7728);

/*** Variable declaration ***/
mu_1_indexType mu_msg_end("msg_end",29544);

/*** Variable declaration ***/
mu_1_msgSet mu_pat1Set("pat1Set",29552);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat1Set("sPat1Set",30368);

/*** Variable declaration ***/
mu_1_msgSet mu_pat2Set("pat2Set",31184);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat2Set("sPat2Set",32000);

/*** Variable declaration ***/
mu_1_msgSet mu_pat3Set("pat3Set",32816);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat3Set("sPat3Set",33632);

/*** Variable declaration ***/
mu_1_msgSet mu_pat4Set("pat4Set",34448);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat4Set("sPat4Set",35264);

/*** Variable declaration ***/
mu_1_msgSet mu_pat5Set("pat5Set",36080);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat5Set("sPat5Set",36896);

/*** Variable declaration ***/
mu_1_msgSet mu_pat6Set("pat6Set",37712);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat6Set("sPat6Set",38528);

/*** Variable declaration ***/
mu_1_msgSet mu_pat7Set("pat7Set",39344);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat7Set("sPat7Set",40160);

/*** Variable declaration ***/
mu_1_msgSet mu_pat8Set("pat8Set",40976);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat8Set("sPat8Set",41792);

/*** Variable declaration ***/
mu_1_msgSet mu_pat9Set("pat9Set",42608);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat9Set("sPat9Set",43424);

/*** Variable declaration ***/
mu_1_msgSet mu_pat10Set("pat10Set",44240);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat10Set("sPat10Set",45056);

/*** Variable declaration ***/
mu_1_msgSet mu_pat11Set("pat11Set",45872);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat11Set("sPat11Set",46688);

/*** Variable declaration ***/
mu_1_msgSet mu_pat12Set("pat12Set",47504);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat12Set("sPat12Set",48320);

/*** Variable declaration ***/
mu_1_msgSet mu_pat13Set("pat13Set",49136);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat13Set("sPat13Set",49952);

/*** Variable declaration ***/
mu_1_msgSet mu_pat14Set("pat14Set",50768);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat14Set("sPat14Set",51584);

/*** Variable declaration ***/
mu_1_msgSet mu_pat15Set("pat15Set",52400);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat15Set("sPat15Set",53216);

/*** Variable declaration ***/
mu_1_msgSet mu_pat16Set("pat16Set",54032);

/*** Variable declaration ***/
mu_1_msgSet mu_sPat16Set("sPat16Set",54848);

/*** Variable declaration ***/
mu_1__type_7 mu_A_known("A_known",55664);

/*** Variable declaration ***/
mu_1__type_8 mu_S_known("S_known",56472);

/*** Variable declaration ***/
mu_1__type_9 mu_B_known("B_known",57280);

/*** Variable declaration ***/
mu_1__type_10 mu_Spy_known("Spy_known",58088);

/*** Variable declaration ***/
mu_1__type_11 mu_emit("emit",58896);

/*** Variable declaration ***/
mu_1_indexType mu_gnum("gnum",59704);

void mu_get_msgNo(mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

/*** Variable declaration ***/
mu_1_indexType mu_j("j",8);

/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",16);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_msg.mu_msgType) )
{
bool mu__boolexpr12;
bool mu__boolexpr13;
bool mu__boolexpr14;
bool mu__boolexpr15;
bool mu__boolexpr16;
bool mu__boolexpr17;
bool mu__boolexpr18;
bool mu__boolexpr19;
bool mu__boolexpr20;
bool mu__boolexpr21;
  if (!((mu_msg.mu_msgType) == (mu_agent))) mu__boolexpr21 = FALSE ;
  else {
  mu__boolexpr21 = ((mu_msgs[mu_i].mu_ag) == (mu_msg.mu_ag)) ; 
}
  if (mu__boolexpr21) mu__boolexpr20 = TRUE ;
  else {
bool mu__boolexpr22;
  if (!((mu_msg.mu_msgType) == (mu_nonce))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = ((mu_msgs[mu_i].mu_noncePart) == (mu_msg.mu_noncePart)) ; 
}
  mu__boolexpr20 = (mu__boolexpr22) ; 
}
  if (mu__boolexpr20) mu__boolexpr19 = TRUE ;
  else {
bool mu__boolexpr23;
  if (!((mu_msg.mu_msgType) == (mu_tmp))) mu__boolexpr23 = FALSE ;
  else {
  mu__boolexpr23 = ((mu_msgs[mu_i].mu_tmpPart) == (mu_msg.mu_tmpPart)) ; 
}
  mu__boolexpr19 = (mu__boolexpr23) ; 
}
  if (mu__boolexpr19) mu__boolexpr18 = TRUE ;
  else {
bool mu__boolexpr24;
bool mu__boolexpr25;
  if (!((mu_msg.mu_msgType) == (mu_mod))) mu__boolexpr25 = FALSE ;
  else {
  mu__boolexpr25 = ((mu_msgs[mu_i].mu_modMsg1) == (mu_msg.mu_modMsg1)) ; 
}
  if (!(mu__boolexpr25)) mu__boolexpr24 = FALSE ;
  else {
  mu__boolexpr24 = ((mu_msgs[mu_i].mu_modMsg2) == (mu_msg.mu_modMsg2)) ; 
}
  mu__boolexpr18 = (mu__boolexpr24) ; 
}
  if (mu__boolexpr18) mu__boolexpr17 = TRUE ;
  else {
bool mu__boolexpr26;
bool mu__boolexpr27;
  if (!((mu_msg.mu_msgType) == (mu_e))) mu__boolexpr27 = FALSE ;
  else {
  mu__boolexpr27 = ((mu_msgs[mu_i].mu_expMsg1) == (mu_msg.mu_expMsg1)) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
  mu__boolexpr26 = ((mu_msgs[mu_i].mu_expMsg2) == (mu_msg.mu_expMsg2)) ; 
}
  mu__boolexpr17 = (mu__boolexpr26) ; 
}
  if (mu__boolexpr17) mu__boolexpr16 = TRUE ;
  else {
bool mu__boolexpr28;
  if (!((mu_msg.mu_msgType) == (mu_number))) mu__boolexpr28 = FALSE ;
  else {
  mu__boolexpr28 = ((mu_msgs[mu_i].mu_constPart) == (mu_msg.mu_constPart)) ; 
}
  mu__boolexpr16 = (mu__boolexpr28) ; 
}
  if (mu__boolexpr16) mu__boolexpr15 = TRUE ;
  else {
bool mu__boolexpr29;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr29 = FALSE ;
  else {
bool mu__boolexpr30;
bool mu__boolexpr31;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr31 = FALSE ;
  else {
  mu__boolexpr31 = ((mu_msg.mu_k.mu_encType) != (mu_Symk)) ; 
}
  if (!(mu__boolexpr31)) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_msgs[mu_i].mu_k.mu_ag) == (mu_msg.mu_k.mu_ag)) ; 
}
  mu__boolexpr29 = (mu__boolexpr30) ; 
}
  mu__boolexpr15 = (mu__boolexpr29) ; 
}
  if (mu__boolexpr15) mu__boolexpr14 = TRUE ;
  else {
bool mu__boolexpr32;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr32 = FALSE ;
  else {
bool mu__boolexpr33;
bool mu__boolexpr34;
bool mu__boolexpr35;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_msg.mu_k.mu_encType))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_msg.mu_k.mu_encType) == (mu_Symk)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_msgs[mu_i].mu_k.mu_ag1) == (mu_msg.mu_k.mu_ag1)) ; 
}
  if (!(mu__boolexpr34)) mu__boolexpr33 = FALSE ;
  else {
  mu__boolexpr33 = ((mu_msgs[mu_i].mu_k.mu_ag2) == (mu_msg.mu_k.mu_ag2)) ; 
}
  mu__boolexpr32 = (mu__boolexpr33) ; 
}
  mu__boolexpr14 = (mu__boolexpr32) ; 
}
  if (mu__boolexpr14) mu__boolexpr13 = TRUE ;
  else {
bool mu__boolexpr36;
  if (!((mu_msg.mu_msgType) == (mu_aenc))) mu__boolexpr36 = FALSE ;
  else {
bool mu__boolexpr37;
  if (!((mu_msgs[mu_i].mu_aencMsg) == (mu_msg.mu_aencMsg))) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_msgs[mu_i].mu_aencKey) == (mu_msg.mu_aencKey)) ; 
}
  mu__boolexpr36 = (mu__boolexpr37) ; 
}
  mu__boolexpr13 = (mu__boolexpr36) ; 
}
  if (mu__boolexpr13) mu__boolexpr12 = TRUE ;
  else {
bool mu__boolexpr38;
  if (!((mu_msg.mu_msgType) == (mu_senc))) mu__boolexpr38 = FALSE ;
  else {
bool mu__boolexpr39;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msg.mu_sencMsg))) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msg.mu_sencKey)) ; 
}
  mu__boolexpr38 = (mu__boolexpr39) ; 
}
  mu__boolexpr12 = (mu__boolexpr38) ; 
}
if ( mu__boolexpr12 )
{
mu_index = mu_i;
}
else
{
bool mu__boolexpr40;
  if (!((mu_msg.mu_msgType) == (mu_concat))) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_msg.mu_length) == (mu_msgs[mu_i].mu_length)) ; 
}
if ( mu__boolexpr40 )
{
mu_j = mu_msg.mu_length;
mu_flag = mu_true;
{
  bool mu__while_expr_42;  mu__while_expr_42 = (mu_j) > (0);
int mu__counter_41 = 0;
while (mu__while_expr_42) {
if ( ++mu__counter_41 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msg.mu_concatPart[mu_j]) != (mu_msgs[mu_i].mu_concatPart[mu_j]) )
{
mu_flag = mu_false;
}
mu_j = (mu_j) - (1);
};
mu__while_expr_42 = (mu_j) > (0);
}
};
if ( mu_flag )
{
mu_index = mu_i;
}
}
}
}
};
};
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_printMsg(mu_1_Message& mu_msg)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

if ( (mu_msg.mu_msgType) == (mu_null) )
{
cout << "null\n";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_agent) )
{
cout << ( mu_msg.mu_ag );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_nonce) )
{
cout << ( mu_msg.mu_noncePart );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_key) )
{
if ( (mu_msg.mu_k.mu_encType) == (mu_PK) )
{
cout << "PK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encType) == (mu_SK) )
{
cout << "SK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
else
{
if ( (mu_msg.mu_k.mu_encType) == (mu_Symk) )
{
cout << "SymK(";
cout << ( mu_msg.mu_k.mu_ag );
cout << ")";
}
}
}
}
else
{
if ( (mu_msg.mu_msgType) == (mu_aenc) )
{
cout << "aenc{";
mu_printMsg ( mu_msgs[mu_msg.mu_aencMsg] );
cout << "}";
mu_printMsg ( mu_msgs[mu_msg.mu_aencKey] );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
cout << "senc{";
mu_printMsg ( mu_msgs[mu_msg.mu_sencMsg] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_sencKey] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_mod) )
{
cout << "mod{";
mu_printMsg ( mu_msgs[mu_msg.mu_modMsg1] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_modMsg2] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_e) )
{
cout << "exp{";
mu_printMsg ( mu_msgs[mu_msg.mu_expMsg1] );
cout << ",";
mu_printMsg ( mu_msgs[mu_msg.mu_expMsg2] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_number) )
{
cout << ( mu_msg.mu_constPart );
}
else
{
if ( (mu_msg.mu_msgType) == (mu_tmp) )
{
cout << "tmp{";
mu_printMsg ( mu_msgs[mu_msg.mu_tmpPart] );
cout << "}";
}
else
{
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
cout << "concat(";
mu_i = 1;
{
  bool mu__while_expr_44;  mu__while_expr_44 = (mu_i) < (mu_msg.mu_length);
int mu__counter_43 = 0;
while (mu__while_expr_44) {
if ( ++mu__counter_43 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ",";
mu_i = (mu_i) + (1);
};
mu__while_expr_44 = (mu_i) < (mu_msg.mu_length);
}
};
mu_printMsg ( mu_msgs[mu_msg.mu_concatPart[mu_i]] );
cout << ")";
}
}
}
}
}
}
}
}
}
}
}
};
/*** end procedure declaration ***/

mu_1_Message mu_inverseKey(mu_1_Message& mu_msgK)
{
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

mu_key_inv.mu_msgType = mu_null;
if ( (mu_msgK.mu_msgType) == (mu_key) )
{
mu_key_inv.mu_msgType = mu_msgK.mu_msgType;
if ( (mu_msgK.mu_k.mu_encType) == (mu_PK) )
{
mu_key_inv.mu_k.mu_encType = mu_SK;
mu_key_inv.mu_k.mu_ag = mu_msgK.mu_k.mu_ag;
}
else
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_SK) )
{
mu_key_inv.mu_k.mu_encType = mu_PK;
mu_key_inv.mu_k.mu_ag = mu_msgK.mu_k.mu_ag;
}
else
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_Symk) )
{
mu_key_inv.mu_k.mu_encType = mu_Symk;
mu_key_inv.mu_k.mu_ag1 = mu_msgK.mu_k.mu_ag1;
mu_key_inv.mu_k.mu_ag2 = mu_msgK.mu_k.mu_ag2;
}
}
}
}
else
{
if ( (mu_msgK.mu_msgType) != (mu_key) )
{
if ( (mu_msgK.mu_k.mu_encType) == (mu_MsgK) )
{
mu_key_inv.mu_msgType = mu_msgK.mu_msgType;
if ( (mu_msgK.mu_msgType) == (mu_mod) )
{
mu_key_inv = mu_msgs[mu_msgs[mu_msgK.mu_modMsg1].mu_expMsg1];
mu_key_inv.mu_k.mu_encType = mu_MsgK;
}
}
}
}
return mu_key_inv;
	Error.Error("The end of function inverseKey reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct3By1122(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr45;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr45 = FALSE ;
  else {
  mu__boolexpr45 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr45 )
{
bool mu__boolexpr46;
bool mu__boolexpr47;
bool mu__boolexpr48;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr47)) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr46 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
mu_msgs[mu_index].mu_length = 4;
}
return mu_index;
	Error.Error("The end of function construct3By1122 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct5By34(const mu_1_indexType& mu_msgNo31,const mu_1_indexType& mu_msgNo42)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr49;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msgNo31))) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msgNo42)) ; 
}
if ( mu__boolexpr49 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_msgNo31.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_msgNo31;
if (mu_msgNo42.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_msgNo42;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct5By34 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct6By1225(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr50;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr50 )
{
bool mu__boolexpr51;
bool mu__boolexpr52;
bool mu__boolexpr53;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr53)) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr52)) mu__boolexpr51 = FALSE ;
  else {
  mu__boolexpr51 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr51 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
mu_msgs[mu_index].mu_length = 4;
}
return mu_index;
	Error.Error("The end of function construct6By1225 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct7By11(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr54;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr54 = FALSE ;
  else {
  mu__boolexpr54 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr54 )
{
bool mu__boolexpr55;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr55 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
mu_msgs[mu_index].mu_length = 2;
}
return mu_index;
	Error.Error("The end of function construct7By11 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct8By74(const mu_1_indexType& mu_msgNo71,const mu_1_indexType& mu_msgNo42)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr56;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_msgNo71))) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = ((mu_msgs[mu_i].mu_sencKey) == (mu_msgNo42)) ; 
}
if ( mu__boolexpr56 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_msgNo71.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_msgNo71;
if (mu_msgNo42.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_msgNo42;
mu_msgs[mu_index].mu_length = 1;
}
return mu_index;
	Error.Error("The end of function construct8By74 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct9By18(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr57;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr57 )
{
bool mu__boolexpr58;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr58 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
mu_msgs[mu_index].mu_length = 2;
}
return mu_index;
	Error.Error("The end of function construct9By18 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct11By122105(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4,const mu_1_indexType& mu_msgNo5)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr59;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_msgs[mu_i].mu_length) == (5)) ; 
}
if ( mu__boolexpr59 )
{
bool mu__boolexpr60;
bool mu__boolexpr61;
bool mu__boolexpr62;
bool mu__boolexpr63;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr63)) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr62)) mu__boolexpr61 = FALSE ;
  else {
  mu__boolexpr61 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
  if (!(mu__boolexpr61)) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_msgNo5)) ; 
}
if ( mu__boolexpr60 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
if (mu_msgNo5.isundefined())
  mu_msgs[mu_index].mu_concatPart[5].undefine();
else
  mu_msgs[mu_index].mu_concatPart[5] = mu_msgNo5;
mu_msgs[mu_index].mu_length = 5;
}
return mu_index;
	Error.Error("The end of function construct11By122105 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct12By188(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr64;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr64 )
{
bool mu__boolexpr65;
bool mu__boolexpr66;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr66)) mu__boolexpr65 = FALSE ;
  else {
  mu__boolexpr65 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr65 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
mu_msgs[mu_index].mu_length = 3;
}
return mu_index;
	Error.Error("The end of function construct12By188 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct13By12210(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3,const mu_1_indexType& mu_msgNo4)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr67;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr67 )
{
bool mu__boolexpr68;
bool mu__boolexpr69;
bool mu__boolexpr70;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr70 = FALSE ;
  else {
  mu__boolexpr70 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr70)) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_msgNo4)) ; 
}
if ( mu__boolexpr68 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
if (mu_msgNo4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_msgNo4;
mu_msgs[mu_index].mu_length = 4;
}
return mu_index;
	Error.Error("The end of function construct13By12210 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct15By1148(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2,const mu_1_indexType& mu_msgNo3)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr71;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr71 )
{
bool mu__boolexpr72;
bool mu__boolexpr73;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr73 = FALSE ;
  else {
  mu__boolexpr73 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
  if (!(mu__boolexpr73)) mu__boolexpr72 = FALSE ;
  else {
  mu__boolexpr72 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_msgNo3)) ; 
}
if ( mu__boolexpr72 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
if (mu_msgNo3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_msgNo3;
mu_msgs[mu_index].mu_length = 3;
}
return mu_index;
	Error.Error("The end of function construct15By1148 reached without returning values.");
};
/*** end function declaration ***/

mu_1_indexType mu_construct16By114(const mu_1_indexType& mu_msgNo1,const mu_1_indexType& mu_msgNo2)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr74;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr74 )
{
bool mu__boolexpr75;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_msgNo1))) mu__boolexpr75 = FALSE ;
  else {
  mu__boolexpr75 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_msgNo2)) ; 
}
if ( mu__boolexpr75 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_msgNo1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_msgNo1;
if (mu_msgNo2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_msgNo2;
mu_msgs[mu_index].mu_length = 2;
}
return mu_index;
	Error.Error("The end of function construct16By114 reached without returning values.");
};
/*** end function declaration ***/

void mu_lookAddPat1(const mu_1_NonceType& mu_N, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_N) )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_nonce;
if (mu_N.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_N;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat1(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_nonce) )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat1(const mu_1_NonceType& mu_N, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_77;  mu__while_expr_77 = (mu_i) <= (mu_msg_end);
int mu__counter_76 = 0;
while (mu__while_expr_77) {
if ( ++mu__counter_76 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_nonce) )
{
if ( (mu_msgs[mu_i].mu_noncePart) == (mu_N) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_77 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_nonce;
if (mu_N.isundefined())
  mu_msgs[mu_index].mu_noncePart.undefine();
else
  mu_msgs[mu_index].mu_noncePart = mu_N;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat1Set.mu_length = (mu_sPat1Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat1Set.mu_content[mu_sPat1Set.mu_length].undefine();
else
  mu_sPat1Set.mu_content[mu_sPat1Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat2(const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_A) )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_agent;
if (mu_A.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_A;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat2(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_agent) )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat2(const mu_1_AgentType& mu_A, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_79;  mu__while_expr_79 = (mu_i) <= (mu_msg_end);
int mu__counter_78 = 0;
while (mu__while_expr_79) {
if ( ++mu__counter_78 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_agent) )
{
if ( (mu_msgs[mu_i].mu_ag) == (mu_A) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_79 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_agent;
if (mu_A.isundefined())
  mu_msgs[mu_index].mu_ag.undefine();
else
  mu_msgs[mu_index].mu_ag = mu_A;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat2Set.mu_length = (mu_sPat2Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat2Set.mu_content[mu_sPat2Set.mu_length].undefine();
else
  mu_sPat2Set.mu_content[mu_sPat2Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat3(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",648);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",864);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",872);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",880);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",888);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",896);

mu_index = 0;
mu_lookAddPat1 ( mu_Na, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_N, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_A, mu_msg3, mu_i3 );
mu_lookAddPat2 ( mu_B, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr80;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr80 )
{
bool mu__boolexpr81;
bool mu__boolexpr82;
bool mu__boolexpr83;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr83 = FALSE ;
  else {
  mu__boolexpr83 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr83)) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr81 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat3(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr84;
bool mu__boolexpr85;
bool mu__boolexpr86;
  if (!(mu_flagPart1)) mu__boolexpr86 = FALSE ;
  else {
  mu__boolexpr86 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr86)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = (mu_flagPart4) ; 
}
if ( mu__boolexpr84 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat3(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",40);

mu_index = 0;
mu_constructSpat1 ( mu_Na, mu_i1 );
mu_constructSpat1 ( mu_N, mu_i2 );
mu_constructSpat2 ( mu_A, mu_i3 );
mu_constructSpat2 ( mu_B, mu_i4 );
mu_i = 1;
{
  bool mu__while_expr_88;  mu__while_expr_88 = (mu_i) <= (mu_msg_end);
int mu__counter_87 = 0;
while (mu__while_expr_88) {
if ( ++mu__counter_87 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr89;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr89 )
{
bool mu__boolexpr90;
bool mu__boolexpr91;
bool mu__boolexpr92;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
  mu__boolexpr91 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr91)) mu__boolexpr90 = FALSE ;
  else {
  mu__boolexpr90 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr90 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_88 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
mu_sPat3Set.mu_length = (mu_sPat3Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat3Set.mu_content[mu_sPat3Set.mu_length].undefine();
else
  mu_sPat3Set.mu_content[mu_sPat3Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat4(const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_index = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_key) )
{
bool mu__boolexpr93;
bool mu__boolexpr94;
  if (!((mu_msgs[mu_i].mu_k.mu_encType) == (mu_Symk))) mu__boolexpr94 = FALSE ;
  else {
  mu__boolexpr94 = ((mu_msgs[mu_i].mu_k.mu_ag1) == (mu_Asymk1)) ; 
}
  if (!(mu__boolexpr94)) mu__boolexpr93 = FALSE ;
  else {
  mu__boolexpr93 = ((mu_msgs[mu_i].mu_k.mu_ag2) == (mu_Ssymk2)) ; 
}
if ( mu__boolexpr93 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_Symk;
if (mu_Asymk1.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag1.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag1 = mu_Asymk1;
if (mu_Ssymk2.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag2.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag2 = mu_Ssymk2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat4(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag1 = mu_false;
bool mu__boolexpr95;
  if (!((mu_msg.mu_msgType) == (mu_key))) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_msg.mu_k.mu_encType) == (mu_Symk)) ; 
}
if ( mu__boolexpr95 )
{
mu_flag1 = mu_true;
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat4(const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_97;  mu__while_expr_97 = (mu_i) <= (mu_msg_end);
int mu__counter_96 = 0;
while (mu__while_expr_97) {
if ( ++mu__counter_96 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr98;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_key))) mu__boolexpr98 = FALSE ;
  else {
  mu__boolexpr98 = ((mu_msgs[mu_i].mu_k.mu_encType) == (mu_Symk)) ; 
}
if ( mu__boolexpr98 )
{
bool mu__boolexpr99;
  if (!((mu_msgs[mu_i].mu_k.mu_ag1) == (mu_Asymk1))) mu__boolexpr99 = FALSE ;
  else {
  mu__boolexpr99 = ((mu_msgs[mu_i].mu_k.mu_ag2) == (mu_Ssymk2)) ; 
}
if ( mu__boolexpr99 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_97 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_key;
mu_msgs[mu_index].mu_k.mu_encType = mu_Symk;
if (mu_Asymk1.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag1.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag1 = mu_Asymk1;
if (mu_Ssymk2.isundefined())
  mu_msgs[mu_index].mu_k.mu_ag2.undefine();
else
  mu_msgs[mu_index].mu_k.mu_ag2 = mu_Ssymk2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat4Set.mu_length = (mu_sPat4Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat4Set.mu_content[mu_sPat4Set.mu_length].undefine();
else
  mu_sPat4Set.mu_content[mu_sPat4Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat5(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat3 ( mu_Na, mu_N, mu_A, mu_B, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_Asymk1, mu_Ssymk2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr100;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_i1))) mu__boolexpr100 = FALSE ;
  else {
  mu__boolexpr100 = ((mu_msgs[mu_i].mu_sencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr100 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat5(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
mu_isPat3 ( mu_msgs[mu_msg.mu_sencMsg], mu_flagPart1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_sencKey], mu_flagPart2 );
bool mu__boolexpr101;
  if (!(mu_flagPart1)) mu__boolexpr101 = FALSE ;
  else {
  mu__boolexpr101 = (mu_flagPart2) ; 
}
if ( mu__boolexpr101 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat5(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat3 ( mu_Na, mu_N, mu_A, mu_B, mu_i1 );
mu_constructSpat4 ( mu_Asymk1, mu_Ssymk2, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_103;  mu__while_expr_103 = (mu_i) <= (mu_msg_end);
int mu__counter_102 = 0;
while (mu__while_expr_103) {
if ( ++mu__counter_102 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr104;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_i1))) mu__boolexpr104 = FALSE ;
  else {
  mu__boolexpr104 = ((mu_msgs[mu_i].mu_sencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr104 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_103 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat5Set.mu_length = (mu_sPat5Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat5Set.mu_content[mu_sPat5Set.mu_length].undefine();
else
  mu_sPat5Set.mu_content[mu_sPat5Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat6(const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",648);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",864);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",872);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",880);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",888);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",896);

mu_index = 0;
mu_lookAddPat1 ( mu_N, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_A, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_B, mu_msg3, mu_i3 );
mu_lookAddPat5 ( mu_Na, mu_N, mu_A, mu_B, mu_Asymk1, mu_Ssymk2, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr105;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr105 = FALSE ;
  else {
  mu__boolexpr105 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr105 )
{
bool mu__boolexpr106;
bool mu__boolexpr107;
bool mu__boolexpr108;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr108 = FALSE ;
  else {
  mu__boolexpr108 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr108)) mu__boolexpr107 = FALSE ;
  else {
  mu__boolexpr107 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr107)) mu__boolexpr106 = FALSE ;
  else {
  mu__boolexpr106 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr106 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat6(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat5 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr109;
bool mu__boolexpr110;
bool mu__boolexpr111;
  if (!(mu_flagPart1)) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr111)) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr110)) mu__boolexpr109 = FALSE ;
  else {
  mu__boolexpr109 = (mu_flagPart4) ; 
}
if ( mu__boolexpr109 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat6(const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",40);

mu_index = 0;
mu_constructSpat1 ( mu_N, mu_i1 );
mu_constructSpat2 ( mu_A, mu_i2 );
mu_constructSpat2 ( mu_B, mu_i3 );
mu_constructSpat5 ( mu_Na, mu_N, mu_A, mu_B, mu_Asymk1, mu_Ssymk2, mu_i4 );
mu_i = 1;
{
  bool mu__while_expr_113;  mu__while_expr_113 = (mu_i) <= (mu_msg_end);
int mu__counter_112 = 0;
while (mu__while_expr_113) {
if ( ++mu__counter_112 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr114;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr114 )
{
bool mu__boolexpr115;
bool mu__boolexpr116;
bool mu__boolexpr117;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr117)) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr115 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_113 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
mu_sPat6Set.mu_length = (mu_sPat6Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat6Set.mu_content[mu_sPat6Set.mu_length].undefine();
else
  mu_sPat6Set.mu_content[mu_sPat6Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat7(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat1 ( mu_Na, mu_msg1, mu_i1 );
mu_lookAddPat1 ( mu_Kab, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr118;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr118 )
{
bool mu__boolexpr119;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr119 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat7(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr120;
  if (!(mu_flagPart1)) mu__boolexpr120 = FALSE ;
  else {
  mu__boolexpr120 = (mu_flagPart2) ; 
}
if ( mu__boolexpr120 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat7(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat1 ( mu_Na, mu_i1 );
mu_constructSpat1 ( mu_Kab, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_122;  mu__while_expr_122 = (mu_i) <= (mu_msg_end);
int mu__counter_121 = 0;
while (mu__while_expr_122) {
if ( ++mu__counter_121 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr123;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr123 = FALSE ;
  else {
  mu__boolexpr123 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr123 )
{
bool mu__boolexpr124;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr124 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_122 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat7Set.mu_length = (mu_sPat7Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat7Set.mu_content[mu_sPat7Set.mu_length].undefine();
else
  mu_sPat7Set.mu_content[mu_sPat7Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat8(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat7 ( mu_Na, mu_Kab, mu_msg1, mu_i1 );
mu_lookAddPat4 ( mu_Asymk1, mu_Ssymk2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr125;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_i1))) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_msgs[mu_i].mu_sencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr125 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat8(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_senc) )
{
mu_isPat7 ( mu_msgs[mu_msg.mu_sencMsg], mu_flagPart1 );
mu_isPat4 ( mu_msgs[mu_msg.mu_sencKey], mu_flagPart2 );
bool mu__boolexpr126;
  if (!(mu_flagPart1)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = (mu_flagPart2) ; 
}
if ( mu__boolexpr126 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat8(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat7 ( mu_Na, mu_Kab, mu_i1 );
mu_constructSpat4 ( mu_Asymk1, mu_Ssymk2, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_128;  mu__while_expr_128 = (mu_i) <= (mu_msg_end);
int mu__counter_127 = 0;
while (mu__while_expr_128) {
if ( ++mu__counter_127 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_senc) )
{
bool mu__boolexpr129;
  if (!((mu_msgs[mu_i].mu_sencMsg) == (mu_i1))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_msgs[mu_i].mu_sencKey) == (mu_i2)) ; 
}
if ( mu__boolexpr129 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_128 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_senc;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_sencMsg.undefine();
else
  mu_msgs[mu_index].mu_sencMsg = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_sencKey.undefine();
else
  mu_msgs[mu_index].mu_sencKey = mu_i2;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat8Set.mu_length = (mu_sPat8Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat8Set.mu_content[mu_sPat8Set.mu_length].undefine();
else
  mu_sPat8Set.mu_content[mu_sPat8Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat9(const mu_1_NonceType& mu_N, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat1 ( mu_N, mu_msg1, mu_i1 );
mu_lookAddPat8 ( mu_Na, mu_Kab, mu_Asymk1, mu_Ssymk2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr130;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr130 )
{
bool mu__boolexpr131;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr131 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat9(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat8 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr132;
  if (!(mu_flagPart1)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = (mu_flagPart2) ; 
}
if ( mu__boolexpr132 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat9(const mu_1_NonceType& mu_N, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat1 ( mu_N, mu_i1 );
mu_constructSpat8 ( mu_Na, mu_Kab, mu_Asymk1, mu_Ssymk2, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_134;  mu__while_expr_134 = (mu_i) <= (mu_msg_end);
int mu__counter_133 = 0;
while (mu__while_expr_134) {
if ( ++mu__counter_133 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr135;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr135 )
{
bool mu__boolexpr136;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr136 = FALSE ;
  else {
  mu__boolexpr136 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr136 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_134 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat9Set.mu_length = (mu_sPat9Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat9Set.mu_content[mu_sPat9Set.mu_length].undefine();
else
  mu_sPat9Set.mu_content[mu_sPat9Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat10(mu_1_Message& mu_m1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_msgs[mu_m1.mu_tmpPart], mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat10(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat10(mu_1_Message& mu_m1, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_138;  mu__while_expr_138 = (mu_i) <= (mu_msg_end);
int mu__counter_137 = 0;
while (mu__while_expr_138) {
if ( ++mu__counter_137 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_m1.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_138 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_m1.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat10Set.mu_length = (mu_sPat10Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat10Set.mu_content[mu_sPat10Set.mu_length].undefine();
else
  mu_sPat10Set.mu_content[mu_sPat10Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat11(const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_m1, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_Bsymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",648);

/*** Variable declaration ***/
mu_1_Message mu_msg5("msg5",864);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",1080);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",1088);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",1096);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",1104);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",1112);

/*** Variable declaration ***/
mu_1_indexType mu_i5("i5",1120);

mu_index = 0;
mu_lookAddPat1 ( mu_N, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_A, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_B, mu_msg3, mu_i3 );
mu_lookAddPat10 ( mu_m1, mu_msg4, mu_i4 );
mu_lookAddPat5 ( mu_Nb, mu_N, mu_A, mu_B, mu_Bsymk1, mu_Ssymk2, mu_msg5, mu_i5 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr139;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr139 = FALSE ;
  else {
  mu__boolexpr139 = ((mu_msgs[mu_i].mu_length) == (5)) ; 
}
if ( mu__boolexpr139 )
{
bool mu__boolexpr140;
bool mu__boolexpr141;
bool mu__boolexpr142;
bool mu__boolexpr143;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr143 = FALSE ;
  else {
  mu__boolexpr143 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr143)) mu__boolexpr142 = FALSE ;
  else {
  mu__boolexpr142 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr142)) mu__boolexpr141 = FALSE ;
  else {
  mu__boolexpr141 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
  if (!(mu__boolexpr141)) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_i5)) ; 
}
if ( mu__boolexpr140 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
if (mu_i5.isundefined())
  mu_msgs[mu_index].mu_concatPart[5].undefine();
else
  mu_msgs[mu_index].mu_concatPart[5] = mu_i5;
mu_msgs[mu_index].mu_length = 5;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat11(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart5("flagPart5",40);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
mu_flagPart5 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat10 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
mu_isPat5 ( mu_msgs[mu_msg.mu_concatPart[5]], mu_flagPart5 );
bool mu__boolexpr144;
bool mu__boolexpr145;
bool mu__boolexpr146;
bool mu__boolexpr147;
  if (!(mu_flagPart1)) mu__boolexpr147 = FALSE ;
  else {
  mu__boolexpr147 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr147)) mu__boolexpr146 = FALSE ;
  else {
  mu__boolexpr146 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr146)) mu__boolexpr145 = FALSE ;
  else {
  mu__boolexpr145 = (mu_flagPart4) ; 
}
  if (!(mu__boolexpr145)) mu__boolexpr144 = FALSE ;
  else {
  mu__boolexpr144 = (mu_flagPart5) ; 
}
if ( mu__boolexpr144 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat11(const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_m1, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_Bsymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",40);

/*** Variable declaration ***/
mu_1_indexType mu_i5("i5",48);

mu_index = 0;
mu_constructSpat1 ( mu_N, mu_i1 );
mu_constructSpat2 ( mu_A, mu_i2 );
mu_constructSpat2 ( mu_B, mu_i3 );
mu_constructSpat10 ( mu_m1, mu_i4 );
mu_constructSpat5 ( mu_Nb, mu_N, mu_A, mu_B, mu_Bsymk1, mu_Ssymk2, mu_i5 );
mu_i = 1;
{
  bool mu__while_expr_149;  mu__while_expr_149 = (mu_i) <= (mu_msg_end);
int mu__counter_148 = 0;
while (mu__while_expr_149) {
if ( ++mu__counter_148 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr150;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr150 = FALSE ;
  else {
  mu__boolexpr150 = ((mu_msgs[mu_i].mu_length) == (5)) ; 
}
if ( mu__boolexpr150 )
{
bool mu__boolexpr151;
bool mu__boolexpr152;
bool mu__boolexpr153;
bool mu__boolexpr154;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = FALSE ;
  else {
  mu__boolexpr153 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr153)) mu__boolexpr152 = FALSE ;
  else {
  mu__boolexpr152 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
  if (!(mu__boolexpr152)) mu__boolexpr151 = FALSE ;
  else {
  mu__boolexpr151 = ((mu_msgs[mu_i].mu_concatPart[5]) == (mu_i5)) ; 
}
if ( mu__boolexpr151 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_149 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
if (mu_i5.isundefined())
  mu_msgs[mu_index].mu_concatPart[5].undefine();
else
  mu_msgs[mu_index].mu_concatPart[5] = mu_i5;
mu_msgs[mu_index].mu_length = 5;
}
mu_sPat11Set.mu_length = (mu_sPat11Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat11Set.mu_content[mu_sPat11Set.mu_length].undefine();
else
  mu_sPat11Set.mu_content[mu_sPat11Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat12(const mu_1_NonceType& mu_N, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_Bsymk1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",648);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",656);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",664);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",672);

mu_index = 0;
mu_lookAddPat1 ( mu_N, mu_msg1, mu_i1 );
mu_lookAddPat8 ( mu_Na, mu_Kab, mu_Asymk1, mu_Ssymk2, mu_msg2, mu_i2 );
mu_lookAddPat8 ( mu_Nb, mu_Kab, mu_Bsymk1, mu_Ssymk2, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr155;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr155 = FALSE ;
  else {
  mu__boolexpr155 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr155 )
{
bool mu__boolexpr156;
bool mu__boolexpr157;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr157 = FALSE ;
  else {
  mu__boolexpr157 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr157)) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr156 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
mu_msgs[mu_index].mu_length = 3;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat12(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat8 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat8 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr158;
bool mu__boolexpr159;
  if (!(mu_flagPart1)) mu__boolexpr159 = FALSE ;
  else {
  mu__boolexpr159 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr159)) mu__boolexpr158 = FALSE ;
  else {
  mu__boolexpr158 = (mu_flagPart3) ; 
}
if ( mu__boolexpr158 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat12(const mu_1_NonceType& mu_N, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_Bsymk1, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

mu_index = 0;
mu_constructSpat1 ( mu_N, mu_i1 );
mu_constructSpat8 ( mu_Na, mu_Kab, mu_Asymk1, mu_Ssymk2, mu_i2 );
mu_constructSpat8 ( mu_Nb, mu_Kab, mu_Bsymk1, mu_Ssymk2, mu_i3 );
mu_i = 1;
{
  bool mu__while_expr_161;  mu__while_expr_161 = (mu_i) <= (mu_msg_end);
int mu__counter_160 = 0;
while (mu__while_expr_161) {
if ( ++mu__counter_160 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr162;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr162 )
{
bool mu__boolexpr163;
bool mu__boolexpr164;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr163 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_161 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
mu_msgs[mu_index].mu_length = 3;
}
mu_sPat12Set.mu_length = (mu_sPat12Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat12Set.mu_content[mu_sPat12Set.mu_length].undefine();
else
  mu_sPat12Set.mu_content[mu_sPat12Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat13(const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_m1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_Message mu_msg4("msg4",648);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",864);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",872);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",880);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",888);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",896);

mu_index = 0;
mu_lookAddPat1 ( mu_N, mu_msg1, mu_i1 );
mu_lookAddPat2 ( mu_A, mu_msg2, mu_i2 );
mu_lookAddPat2 ( mu_B, mu_msg3, mu_i3 );
mu_lookAddPat10 ( mu_m1, mu_msg4, mu_i4 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr165;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr165 = FALSE ;
  else {
  mu__boolexpr165 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr165 )
{
bool mu__boolexpr166;
bool mu__boolexpr167;
bool mu__boolexpr168;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr168 = FALSE ;
  else {
  mu__boolexpr168 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr168)) mu__boolexpr167 = FALSE ;
  else {
  mu__boolexpr167 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr167)) mu__boolexpr166 = FALSE ;
  else {
  mu__boolexpr166 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr166 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat13(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart4("flagPart4",32);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
mu_flagPart4 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat2 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
mu_isPat10 ( mu_msgs[mu_msg.mu_concatPart[4]], mu_flagPart4 );
bool mu__boolexpr169;
bool mu__boolexpr170;
bool mu__boolexpr171;
  if (!(mu_flagPart1)) mu__boolexpr171 = FALSE ;
  else {
  mu__boolexpr171 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr171)) mu__boolexpr170 = FALSE ;
  else {
  mu__boolexpr170 = (mu_flagPart3) ; 
}
  if (!(mu__boolexpr170)) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = (mu_flagPart4) ; 
}
if ( mu__boolexpr169 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat13(const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_m1, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

/*** Variable declaration ***/
mu_1_indexType mu_i4("i4",40);

mu_index = 0;
mu_constructSpat1 ( mu_N, mu_i1 );
mu_constructSpat2 ( mu_A, mu_i2 );
mu_constructSpat2 ( mu_B, mu_i3 );
mu_constructSpat10 ( mu_m1, mu_i4 );
mu_i = 1;
{
  bool mu__while_expr_173;  mu__while_expr_173 = (mu_i) <= (mu_msg_end);
int mu__counter_172 = 0;
while (mu__while_expr_173) {
if ( ++mu__counter_172 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr174;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr174 = FALSE ;
  else {
  mu__boolexpr174 = ((mu_msgs[mu_i].mu_length) == (4)) ; 
}
if ( mu__boolexpr174 )
{
bool mu__boolexpr175;
bool mu__boolexpr176;
bool mu__boolexpr177;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr177 = FALSE ;
  else {
  mu__boolexpr177 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr177)) mu__boolexpr176 = FALSE ;
  else {
  mu__boolexpr176 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
  if (!(mu__boolexpr176)) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_msgs[mu_i].mu_concatPart[4]) == (mu_i4)) ; 
}
if ( mu__boolexpr175 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_173 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
if (mu_i4.isundefined())
  mu_msgs[mu_index].mu_concatPart[4].undefine();
else
  mu_msgs[mu_index].mu_concatPart[4] = mu_i4;
mu_msgs[mu_index].mu_length = 4;
}
mu_sPat13Set.mu_length = (mu_sPat13Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat13Set.mu_content[mu_sPat13Set.mu_length].undefine();
else
  mu_sPat13Set.mu_content[mu_sPat13Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat14(mu_1_Message& mu_m2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_index("index",0);

mu_get_msgNo ( mu_msgs[mu_m2.mu_tmpPart], mu_index );
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat14(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

mu_flag = mu_true;
};
/*** end procedure declaration ***/

void mu_constructSpat14(mu_1_Message& mu_m2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

mu_index = 0;
mu_i = 1;
{
  bool mu__while_expr_179;  mu__while_expr_179 = (mu_i) <= (mu_msg_end);
int mu__counter_178 = 0;
while (mu__while_expr_179) {
if ( ++mu__counter_178 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( (mu_msgs[mu_i].mu_msgType) == (mu_tmp) )
{
if ( (mu_msgs[mu_i].mu_tmpPart) == (mu_m2.mu_tmpPart) )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_179 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_tmp;
mu_msgs[mu_index].mu_tmpPart = mu_m2.mu_tmpPart;
mu_msgs[mu_index].mu_length = 1;
}
mu_sPat14Set.mu_length = (mu_sPat14Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat14Set.mu_content[mu_sPat14Set.mu_length].undefine();
else
  mu_sPat14Set.mu_content[mu_sPat14Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat15(const mu_1_NonceType& mu_N, mu_1_Message& mu_m2, const mu_1_NonceType& mu_Nb, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Bsymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_Message mu_msg3("msg3",432);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",648);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",656);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",664);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",672);

mu_index = 0;
mu_lookAddPat1 ( mu_N, mu_msg1, mu_i1 );
mu_lookAddPat14 ( mu_m2, mu_msg2, mu_i2 );
mu_lookAddPat8 ( mu_Nb, mu_Kab, mu_Bsymk1, mu_Ssymk2, mu_msg3, mu_i3 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr180;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr180 = FALSE ;
  else {
  mu__boolexpr180 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr180 )
{
bool mu__boolexpr181;
bool mu__boolexpr182;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr182 = FALSE ;
  else {
  mu__boolexpr182 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr182)) mu__boolexpr181 = FALSE ;
  else {
  mu__boolexpr181 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr181 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
mu_msgs[mu_index].mu_length = 3;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat15(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart3("flagPart3",24);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
mu_flagPart3 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat14 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
mu_isPat8 ( mu_msgs[mu_msg.mu_concatPart[3]], mu_flagPart3 );
bool mu__boolexpr183;
bool mu__boolexpr184;
  if (!(mu_flagPart1)) mu__boolexpr184 = FALSE ;
  else {
  mu__boolexpr184 = (mu_flagPart2) ; 
}
  if (!(mu__boolexpr184)) mu__boolexpr183 = FALSE ;
  else {
  mu__boolexpr183 = (mu_flagPart3) ; 
}
if ( mu__boolexpr183 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat15(const mu_1_NonceType& mu_N, mu_1_Message& mu_m2, const mu_1_NonceType& mu_Nb, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Bsymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

/*** Variable declaration ***/
mu_1_indexType mu_i3("i3",32);

mu_index = 0;
mu_constructSpat1 ( mu_N, mu_i1 );
mu_constructSpat14 ( mu_m2, mu_i2 );
mu_constructSpat8 ( mu_Nb, mu_Kab, mu_Bsymk1, mu_Ssymk2, mu_i3 );
mu_i = 1;
{
  bool mu__while_expr_186;  mu__while_expr_186 = (mu_i) <= (mu_msg_end);
int mu__counter_185 = 0;
while (mu__while_expr_186) {
if ( ++mu__counter_185 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr187;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr187 = FALSE ;
  else {
  mu__boolexpr187 = ((mu_msgs[mu_i].mu_length) == (3)) ; 
}
if ( mu__boolexpr187 )
{
bool mu__boolexpr188;
bool mu__boolexpr189;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr189 = FALSE ;
  else {
  mu__boolexpr189 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
  if (!(mu__boolexpr189)) mu__boolexpr188 = FALSE ;
  else {
  mu__boolexpr188 = ((mu_msgs[mu_i].mu_concatPart[3]) == (mu_i3)) ; 
}
if ( mu__boolexpr188 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_186 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
if (mu_i3.isundefined())
  mu_msgs[mu_index].mu_concatPart[3].undefine();
else
  mu_msgs[mu_index].mu_concatPart[3] = mu_i3;
mu_msgs[mu_index].mu_length = 3;
}
mu_sPat15Set.mu_length = (mu_sPat15Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat15Set.mu_content[mu_sPat15Set.mu_length].undefine();
else
  mu_sPat15Set.mu_content[mu_sPat15Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_lookAddPat16(const mu_1_NonceType& mu_N, mu_1_Message& mu_m2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_Message mu_msg1("msg1",0);

/*** Variable declaration ***/
mu_1_Message mu_msg2("msg2",216);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",432);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",440);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",448);

mu_index = 0;
mu_lookAddPat1 ( mu_N, mu_msg1, mu_i1 );
mu_lookAddPat14 ( mu_m2, mu_msg2, mu_i2 );
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr190;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr190 = FALSE ;
  else {
  mu__boolexpr190 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr190 )
{
bool mu__boolexpr191;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr191 = FALSE ;
  else {
  mu__boolexpr191 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr191 )
{
mu_index = mu_i;
}
}
};
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
mu_msg = mu_msgs[mu_index];
};
/*** end procedure declaration ***/

void mu_isPat16(mu_1_Message& mu_msg, mu_0_boolean& mu_flag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag1("flag1",0);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart1("flagPart1",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPart2("flagPart2",16);

mu_flag1 = mu_false;
mu_flagPart1 = mu_false;
mu_flagPart2 = mu_false;
if ( (mu_msg.mu_msgType) == (mu_concat) )
{
mu_isPat1 ( mu_msgs[mu_msg.mu_concatPart[1]], mu_flagPart1 );
mu_isPat14 ( mu_msgs[mu_msg.mu_concatPart[2]], mu_flagPart2 );
bool mu__boolexpr192;
  if (!(mu_flagPart1)) mu__boolexpr192 = FALSE ;
  else {
  mu__boolexpr192 = (mu_flagPart2) ; 
}
if ( mu__boolexpr192 )
{
mu_flag1 = mu_true;
}
}
if (mu_flag1.isundefined())
  mu_flag.undefine();
else
  mu_flag = mu_flag1;
};
/*** end procedure declaration ***/

void mu_constructSpat16(const mu_1_NonceType& mu_N, mu_1_Message& mu_m2, mu_1_indexType& mu_num)
{
/*** Variable declaration ***/
mu_1_indexType mu_i("i",0);

/*** Variable declaration ***/
mu_1_indexType mu_index("index",8);

/*** Variable declaration ***/
mu_1_indexType mu_i1("i1",16);

/*** Variable declaration ***/
mu_1_indexType mu_i2("i2",24);

mu_index = 0;
mu_constructSpat1 ( mu_N, mu_i1 );
mu_constructSpat14 ( mu_m2, mu_i2 );
mu_i = 1;
{
  bool mu__while_expr_194;  mu__while_expr_194 = (mu_i) <= (mu_msg_end);
int mu__counter_193 = 0;
while (mu__while_expr_194) {
if ( ++mu__counter_193 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr195;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_concat))) mu__boolexpr195 = FALSE ;
  else {
  mu__boolexpr195 = ((mu_msgs[mu_i].mu_length) == (2)) ; 
}
if ( mu__boolexpr195 )
{
bool mu__boolexpr196;
  if (!((mu_msgs[mu_i].mu_concatPart[1]) == (mu_i1))) mu__boolexpr196 = FALSE ;
  else {
  mu__boolexpr196 = ((mu_msgs[mu_i].mu_concatPart[2]) == (mu_i2)) ; 
}
if ( mu__boolexpr196 )
{
if (mu_i.isundefined())
  mu_index.undefine();
else
  mu_index = mu_i;
}
}
mu_i = (mu_i) + (1);
};
mu__while_expr_194 = (mu_i) <= (mu_msg_end);
}
};
if ( (mu_index) == (0) )
{
mu_msg_end = (mu_msg_end) + (1);
if (mu_msg_end.isundefined())
  mu_index.undefine();
else
  mu_index = mu_msg_end;
mu_msgs[mu_index].mu_msgType = mu_concat;
if (mu_i1.isundefined())
  mu_msgs[mu_index].mu_concatPart[1].undefine();
else
  mu_msgs[mu_index].mu_concatPart[1] = mu_i1;
if (mu_i2.isundefined())
  mu_msgs[mu_index].mu_concatPart[2].undefine();
else
  mu_msgs[mu_index].mu_concatPart[2] = mu_i2;
mu_msgs[mu_index].mu_length = 2;
}
mu_sPat16Set.mu_length = (mu_sPat16Set.mu_length) + (1);
if (mu_index.isundefined())
  mu_sPat16Set.mu_content[mu_sPat16Set.mu_length].undefine();
else
  mu_sPat16Set.mu_content[mu_sPat16Set.mu_length] = mu_index;
if (mu_index.isundefined())
  mu_num.undefine();
else
  mu_num = mu_index;
};
/*** end procedure declaration ***/

void mu_cons1(const mu_1_NonceType& mu_N, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat1 ( mu_N, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct1(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_N)
{
mu_N = mu_msg.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons2(const mu_1_AgentType& mu_A, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat2 ( mu_A, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct2(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_AgentType& mu_A)
{
mu_A = mu_msg.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons3(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat3 ( mu_Na, mu_N, mu_A, mu_B, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct3(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_N, mu_1_AgentType& mu_A, mu_1_AgentType& mu_B)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",648);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",864);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Na = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_N = mu_msgNum2.mu_noncePart;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_A = mu_msgNum3.mu_ag;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_B = mu_msgNum4.mu_ag;
};
/*** end procedure declaration ***/

void mu_cons4(const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat4 ( mu_Asymk1, mu_Ssymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_cons5(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat5 ( mu_Na, mu_N, mu_A, mu_B, mu_Asymk1, mu_Ssymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct5(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_N, mu_1_AgentType& mu_A, mu_1_AgentType& mu_B, mu_1_AgentType& mu_Asymk1, mu_1_AgentType& mu_Ssymk2)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_sencMsg("sencMsg",40);

mu_sencMsg.clear();
mu_k1 = mu_msgs[mu_msg.mu_sencKey].mu_k;
mu_Asymk1 = mu_k1.mu_ag1;
mu_Ssymk2 = mu_k1.mu_ag2;
mu_sencMsg = mu_msgs[mu_msg.mu_sencMsg];
mu_destruct3 ( mu_agmsg, mu_sencMsg, mu_Na, mu_N, mu_A, mu_B );
};
/*** end procedure declaration ***/

void mu_cons6(const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, const mu_1_NonceType& mu_Na, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat6 ( mu_N, mu_A, mu_B, mu_Na, mu_Asymk1, mu_Ssymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct6(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_N, mu_1_AgentType& mu_A, mu_1_AgentType& mu_B, mu_1_NonceType& mu_Na, mu_1_AgentType& mu_Asymk1, mu_1_AgentType& mu_Ssymk2)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",648);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",864);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_N = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_A = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_B = mu_msgNum3.mu_ag;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_destruct5 ( mu_agmsg, mu_msgNum4, mu_Na, mu_N, mu_A, mu_B, mu_Asymk1, mu_Ssymk2 );
};
/*** end procedure declaration ***/

void mu_cons7(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat7 ( mu_Na, mu_Kab, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct7(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Kab)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",432);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_Na = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_Kab = mu_msgNum2.mu_noncePart;
};
/*** end procedure declaration ***/

void mu_cons8(const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat8 ( mu_Na, mu_Kab, mu_Asymk1, mu_Ssymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct8(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Kab, mu_1_AgentType& mu_Asymk1, mu_1_AgentType& mu_Ssymk2)
{
/*** Variable declaration ***/
mu_1_KeyType mu_k1("k1",0);

/*** Variable declaration ***/
mu_1_Message mu_sencMsg("sencMsg",40);

mu_sencMsg.clear();
mu_k1 = mu_msgs[mu_msg.mu_sencKey].mu_k;
mu_Asymk1 = mu_k1.mu_ag1;
mu_Ssymk2 = mu_k1.mu_ag2;
mu_sencMsg = mu_msgs[mu_msg.mu_sencMsg];
mu_destruct7 ( mu_agmsg, mu_sencMsg, mu_Na, mu_Kab );
};
/*** end procedure declaration ***/

void mu_cons9(const mu_1_NonceType& mu_N, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat9 ( mu_N, mu_Na, mu_Kab, mu_Asymk1, mu_Ssymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct9(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_N, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Kab, mu_1_AgentType& mu_Asymk1, mu_1_AgentType& mu_Ssymk2)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",432);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_N = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_destruct8 ( mu_agmsg, mu_msgNum2, mu_Na, mu_Kab, mu_Asymk1, mu_Ssymk2 );
};
/*** end procedure declaration ***/

void mu_cons10(mu_1_Message& mu_m1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat10 ( mu_m1, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct10(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_m1)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_m1 = mu_msg;
if (mu_msgNo.isundefined())
  mu_m1.mu_tmpPart.undefine();
else
  mu_m1.mu_tmpPart = mu_msgNo;
};
/*** end procedure declaration ***/

void mu_cons11(const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_m1, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_Bsymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat11 ( mu_N, mu_A, mu_B, mu_m1, mu_Nb, mu_Bsymk1, mu_Ssymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct11(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_N, mu_1_AgentType& mu_A, mu_1_AgentType& mu_B, mu_1_Message& mu_m1, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_Bsymk1, mu_1_AgentType& mu_Ssymk2)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",648);

/*** Variable declaration ***/
mu_1_Message mu_msgNum5("msgNum5",864);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",1080);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_N = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_A = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_B = mu_msgNum3.mu_ag;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_m1.mu_msgType = mu_tmp;
mu_m1.mu_tmpPart = mu_msg.mu_concatPart[4];
mu_msgNum5 = mu_msgs[mu_msg.mu_concatPart[5]];
mu_destruct5 ( mu_agmsg, mu_msgNum5, mu_Nb, mu_N, mu_A, mu_B, mu_Bsymk1, mu_Ssymk2 );
};
/*** end procedure declaration ***/

void mu_cons12(const mu_1_NonceType& mu_N, const mu_1_NonceType& mu_Na, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Asymk1, const mu_1_AgentType& mu_Ssymk2, const mu_1_NonceType& mu_Nb, const mu_1_AgentType& mu_Bsymk1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat12 ( mu_N, mu_Na, mu_Kab, mu_Asymk1, mu_Ssymk2, mu_Nb, mu_Bsymk1, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct12(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_N, mu_1_NonceType& mu_Na, mu_1_NonceType& mu_Kab, mu_1_AgentType& mu_Asymk1, mu_1_AgentType& mu_Ssymk2, mu_1_NonceType& mu_Nb, mu_1_AgentType& mu_Bsymk1)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",648);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_N = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_destruct8 ( mu_agmsg, mu_msgNum2, mu_Na, mu_Kab, mu_Asymk1, mu_Ssymk2 );
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_destruct8 ( mu_agmsg, mu_msgNum3, mu_Nb, mu_Kab, mu_Bsymk1, mu_Ssymk2 );
};
/*** end procedure declaration ***/

void mu_cons13(const mu_1_NonceType& mu_N, const mu_1_AgentType& mu_A, const mu_1_AgentType& mu_B, mu_1_Message& mu_m1, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat13 ( mu_N, mu_A, mu_B, mu_m1, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct13(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_N, mu_1_AgentType& mu_A, mu_1_AgentType& mu_B, mu_1_Message& mu_m1)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_Message mu_msgNum4("msgNum4",648);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",864);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_N = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_A = mu_msgNum2.mu_ag;
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_B = mu_msgNum3.mu_ag;
mu_msgNum4 = mu_msgs[mu_msg.mu_concatPart[4]];
mu_m1.mu_msgType = mu_tmp;
mu_m1.mu_tmpPart = mu_msg.mu_concatPart[4];
};
/*** end procedure declaration ***/

void mu_cons14(mu_1_Message& mu_m2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat14 ( mu_m2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct14(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_Message& mu_m2)
{
/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",0);

mu_get_msgNo ( mu_msg, mu_msgNo );
mu_m2 = mu_msg;
if (mu_msgNo.isundefined())
  mu_m2.mu_tmpPart.undefine();
else
  mu_m2.mu_tmpPart = mu_msgNo;
};
/*** end procedure declaration ***/

void mu_cons15(const mu_1_NonceType& mu_N, mu_1_Message& mu_m2, const mu_1_NonceType& mu_Nb, const mu_1_NonceType& mu_Kab, const mu_1_AgentType& mu_Bsymk1, const mu_1_AgentType& mu_Ssymk2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat15 ( mu_N, mu_m2, mu_Nb, mu_Kab, mu_Bsymk1, mu_Ssymk2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct15(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_N, mu_1_Message& mu_m2, mu_1_NonceType& mu_Nb, mu_1_NonceType& mu_Kab, mu_1_AgentType& mu_Bsymk1, mu_1_AgentType& mu_Ssymk2)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_Message mu_msgNum3("msgNum3",432);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",648);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_N = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_m2.mu_msgType = mu_tmp;
mu_m2.mu_tmpPart = mu_msg.mu_concatPart[2];
mu_msgNum3 = mu_msgs[mu_msg.mu_concatPart[3]];
mu_destruct8 ( mu_agmsg, mu_msgNum3, mu_Nb, mu_Kab, mu_Bsymk1, mu_Ssymk2 );
};
/*** end procedure declaration ***/

void mu_cons16(const mu_1_NonceType& mu_N, mu_1_Message& mu_m2, mu_1_Message& mu_msg, mu_1_indexType& mu_num)
{
mu_msg.clear();
mu_num.clear();
mu_lookAddPat16 ( mu_N, mu_m2, mu_msg, mu_num );
};
/*** end procedure declaration ***/

void mu_destruct16(mu_1_Message& mu_agmsg, mu_1_Message& mu_msg, mu_1_NonceType& mu_N, mu_1_Message& mu_m2)
{
/*** Variable declaration ***/
mu_1_Message mu_msgNum1("msgNum1",0);

/*** Variable declaration ***/
mu_1_Message mu_msgNum2("msgNum2",216);

/*** Variable declaration ***/
mu_1_KeyType mu_k("k",432);

mu_msgNum1 = mu_msgs[mu_msg.mu_concatPart[1]];
mu_N = mu_msgNum1.mu_noncePart;
mu_msgNum2 = mu_msgs[mu_msg.mu_concatPart[2]];
mu_m2.mu_msgType = mu_tmp;
mu_m2.mu_tmpPart = mu_msg.mu_concatPart[2];
};
/*** end procedure declaration ***/

mu_0_boolean mu_exist(mu_1_msgSet& mu_PatnSet,const mu_1_indexType& mu_msgNo)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
{
for(int mu_i = 0; mu_i <= 5; mu_i++) {
bool mu__boolexpr197;
  if (!((mu_msgNo) != (0))) mu__boolexpr197 = FALSE ;
  else {
  mu__boolexpr197 = ((mu_PatnSet.mu_content[mu_i]) == (mu_msgNo)) ; 
}
if ( mu__boolexpr197 )
{
mu_flag = mu_true;
}
};
};
return mu_flag;
	Error.Error("The end of function exist reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchAgent(mu_1_AgentType& mu_locAg,mu_1_AgentType& mu_Ag)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Ag) == (mu_anyAgent) )
{
mu_flag = mu_true;
if (mu_locAg.isundefined())
  mu_Ag.undefine();
else
  mu_Ag = mu_locAg;
}
else
{
if ( (mu_locAg) == (mu_Ag) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchAgent reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchTmp(mu_1_Message& mu_locm,mu_1_Message& mu_m)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

/*** Variable declaration ***/
mu_1_indexType mu_index1("index1",8);

/*** Variable declaration ***/
mu_1_indexType mu_index2("index2",16);

mu_flag = mu_false;
mu_get_msgNo ( mu_m, mu_index2 );
mu_get_msgNo ( mu_locm, mu_index1 );
if ( (mu_m.mu_msgType) == (mu_tmp) )
{
if ( (mu_m.mu_tmpPart) == (0) )
{
mu_flag = mu_true;
mu_m = mu_locm;
}
}
else
{
if ( (mu_index1) == (mu_index2) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchTmp reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchNonce(mu_1_NonceType& mu_locNa,mu_1_NonceType& mu_Na)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Na) == (mu_anyNonce) )
{
mu_flag = mu_true;
if (mu_locNa.isundefined())
  mu_Na.undefine();
else
  mu_Na = mu_locNa;
}
else
{
if ( (mu_locNa) == (mu_Na) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchNonce reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchNumber(mu_1_ConstType& mu_locNm,mu_1_ConstType& mu_Nm)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

mu_flag = mu_false;
if ( (mu_Nm) == (mu_anyNumber) )
{
mu_flag = mu_true;
if (mu_locNm.isundefined())
  mu_Nm.undefine();
else
  mu_Nm = mu_locNm;
}
else
{
if ( (mu_locNm) == (mu_Nm) )
{
mu_flag = mu_true;
}
else
{
mu_flag = mu_false;
}
}
return mu_flag;
	Error.Error("The end of function matchNumber reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_match(mu_1_Message& mu_m1,mu_1_Message& mu_m2)
{
/*** Variable declaration ***/
mu_0_boolean mu_concatFlag("concatFlag",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",16);

if ( (mu_m1.mu_msgType) == (mu_tmp) )
{
return mu_true;
}
else
{
bool mu__boolexpr198;
  if (!((mu_m1.mu_msgType) == (mu_agent))) mu__boolexpr198 = FALSE ;
  else {
  mu__boolexpr198 = ((mu_m2.mu_msgType) == (mu_agent)) ; 
}
if ( mu__boolexpr198 )
{
return mu_matchAgent( mu_m2.mu_ag, mu_m1.mu_ag );
}
else
{
bool mu__boolexpr199;
  if (!((mu_m1.mu_msgType) == (mu_nonce))) mu__boolexpr199 = FALSE ;
  else {
  mu__boolexpr199 = ((mu_m2.mu_msgType) == (mu_nonce)) ; 
}
if ( mu__boolexpr199 )
{
return mu_matchNonce( mu_m2.mu_noncePart, mu_m1.mu_noncePart );
}
else
{
bool mu__boolexpr200;
  if (!((mu_m1.mu_msgType) == (mu_number))) mu__boolexpr200 = FALSE ;
  else {
  mu__boolexpr200 = ((mu_m2.mu_msgType) == (mu_number)) ; 
}
if ( mu__boolexpr200 )
{
return mu_matchNumber( mu_m2.mu_constPart, mu_m1.mu_constPart );
}
else
{
bool mu__boolexpr201;
  if (!((mu_m1.mu_msgType) == (mu_key))) mu__boolexpr201 = FALSE ;
  else {
  mu__boolexpr201 = ((mu_m2.mu_msgType) == (mu_key)) ; 
}
if ( mu__boolexpr201 )
{
if ( (mu_m1.mu_k.mu_encType) == (mu_PK) )
{
bool mu__boolexpr202;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr202 = FALSE ;
  else {
  mu__boolexpr202 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr202;
}
else
{
if ( (mu_m1.mu_k.mu_encType) == (mu_SK) )
{
bool mu__boolexpr203;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr203 = FALSE ;
  else {
  mu__boolexpr203 = (mu_matchAgent( mu_m1.mu_k.mu_ag, mu_m2.mu_k.mu_ag )) ; 
}
return mu__boolexpr203;
}
else
{
if ( (mu_m1.mu_k.mu_encType) == (mu_Symk) )
{
bool mu__boolexpr204;
bool mu__boolexpr205;
  if (!((mu_m1.mu_k.mu_encType) == (mu_m2.mu_k.mu_encType))) mu__boolexpr205 = FALSE ;
  else {
  mu__boolexpr205 = (mu_matchAgent( mu_m1.mu_k.mu_ag1, mu_m2.mu_k.mu_ag1 )) ; 
}
  if (!(mu__boolexpr205)) mu__boolexpr204 = FALSE ;
  else {
  mu__boolexpr204 = (mu_matchAgent( mu_m1.mu_k.mu_ag2, mu_m2.mu_k.mu_ag2 )) ; 
}
return mu__boolexpr204;
}
}
}
}
else
{
bool mu__boolexpr206;
  if (!((mu_m1.mu_msgType) == (mu_aenc))) mu__boolexpr206 = FALSE ;
  else {
  mu__boolexpr206 = ((mu_m2.mu_msgType) == (mu_aenc)) ; 
}
if ( mu__boolexpr206 )
{
bool mu__boolexpr207;
  if (!(mu_match( mu_msgs[mu_m1.mu_aencMsg], mu_msgs[mu_m2.mu_aencMsg] ))) mu__boolexpr207 = FALSE ;
  else {
  mu__boolexpr207 = (mu_match( mu_msgs[mu_m1.mu_aencKey], mu_msgs[mu_m2.mu_aencKey] )) ; 
}
return mu__boolexpr207;
}
else
{
bool mu__boolexpr208;
  if (!((mu_m1.mu_msgType) == (mu_senc))) mu__boolexpr208 = FALSE ;
  else {
  mu__boolexpr208 = ((mu_m2.mu_msgType) == (mu_senc)) ; 
}
if ( mu__boolexpr208 )
{
return mu_true;
}
else
{
bool mu__boolexpr209;
  if (!((mu_m1.mu_msgType) == (mu_mod))) mu__boolexpr209 = FALSE ;
  else {
  mu__boolexpr209 = ((mu_m2.mu_msgType) == (mu_mod)) ; 
}
if ( mu__boolexpr209 )
{
bool mu__boolexpr210;
  if (!(mu_match( mu_msgs[mu_m1.mu_modMsg1], mu_msgs[mu_m2.mu_modMsg1] ))) mu__boolexpr210 = FALSE ;
  else {
  mu__boolexpr210 = (mu_match( mu_msgs[mu_m1.mu_modMsg2], mu_msgs[mu_m2.mu_modMsg2] )) ; 
}
return mu__boolexpr210;
}
else
{
bool mu__boolexpr211;
  if (!((mu_m1.mu_msgType) == (mu_e))) mu__boolexpr211 = FALSE ;
  else {
  mu__boolexpr211 = ((mu_m2.mu_msgType) == (mu_e)) ; 
}
if ( mu__boolexpr211 )
{
bool mu__boolexpr212;
  if (!(mu_match( mu_msgs[mu_m1.mu_expMsg1], mu_msgs[mu_m2.mu_expMsg1] ))) mu__boolexpr212 = FALSE ;
  else {
  mu__boolexpr212 = (mu_match( mu_msgs[mu_m1.mu_expMsg2], mu_msgs[mu_m2.mu_expMsg2] )) ; 
}
return mu__boolexpr212;
}
else
{
bool mu__boolexpr213;
bool mu__boolexpr214;
  if (!((mu_m1.mu_msgType) == (mu_concat))) mu__boolexpr214 = FALSE ;
  else {
  mu__boolexpr214 = ((mu_m2.mu_msgType) == (mu_concat)) ; 
}
  if (!(mu__boolexpr214)) mu__boolexpr213 = FALSE ;
  else {
  mu__boolexpr213 = ((mu_m1.mu_length) == (mu_m2.mu_length)) ; 
}
if ( mu__boolexpr213 )
{
mu_concatFlag = mu_true;
mu_i = mu_m1.mu_length;
bool mu__boolexpr217;
  if (!((mu_i) > (0))) mu__boolexpr217 = FALSE ;
  else {
  mu__boolexpr217 = (mu_concatFlag) ; 
}
{
  bool mu__while_expr_216;  mu__while_expr_216 = mu__boolexpr217;
int mu__counter_215 = 0;
while (mu__while_expr_216) {
if ( ++mu__counter_215 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
bool mu__boolexpr218;
  if (!(mu_concatFlag)) mu__boolexpr218 = FALSE ;
  else {
  mu__boolexpr218 = (mu_match( mu_msgs[mu_m1.mu_concatPart[mu_i]], mu_msgs[mu_m2.mu_concatPart[mu_i]] )) ; 
}
mu_concatFlag = mu__boolexpr218;
mu_i = (mu_i) - (1);
};
bool mu__boolexpr219;
  if (!((mu_i) > (0))) mu__boolexpr219 = FALSE ;
  else {
  mu__boolexpr219 = (mu_concatFlag) ; 
}
mu__while_expr_216 = mu__boolexpr219;
}
};
return mu_concatFlag;
}
else
{
return mu_false;
}
}
}
}
}
}
}
}
}
}
	Error.Error("The end of function match reached without returning values.");
};
/*** end function declaration ***/

mu_0_boolean mu_matchPat(mu_1_Message& mu_m1,mu_1_msgSet& mu_sPatnSet)
{
/*** Variable declaration ***/
mu_0_boolean mu_flag("flag",0);

/*** Variable declaration ***/
mu_1_indexType mu_i("i",8);

mu_flag = mu_false;
mu_i = 1;
{
  bool mu__while_expr_221;  mu__while_expr_221 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
int mu__counter_220 = 0;
while (mu__while_expr_221) {
if ( ++mu__counter_220 > args->loopmax.value )
  Error.Error("Too many iterations in while loop.");
{
if ( mu_match( mu_msgs[mu_sPatnSet.mu_content[mu_i]], mu_m1 ) )
{
mu_flag = mu_true;
}
mu_i = (mu_i) + (1);
};
mu__while_expr_221 = (mu_i) < ((mu_sPatnSet.mu_length) + (1));
}
};
return mu_flag;
	Error.Error("The end of function matchPat reached without returning values.");
};
/*** end function declaration ***/





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_ch.clear();
  mu_roleA.clear();
  mu_roleS.clear();
  mu_roleB.clear();
  mu_msgs.clear();
  mu_msg_end.clear();
  mu_pat1Set.clear();
  mu_sPat1Set.clear();
  mu_pat2Set.clear();
  mu_sPat2Set.clear();
  mu_pat3Set.clear();
  mu_sPat3Set.clear();
  mu_pat4Set.clear();
  mu_sPat4Set.clear();
  mu_pat5Set.clear();
  mu_sPat5Set.clear();
  mu_pat6Set.clear();
  mu_sPat6Set.clear();
  mu_pat7Set.clear();
  mu_sPat7Set.clear();
  mu_pat8Set.clear();
  mu_sPat8Set.clear();
  mu_pat9Set.clear();
  mu_sPat9Set.clear();
  mu_pat10Set.clear();
  mu_sPat10Set.clear();
  mu_pat11Set.clear();
  mu_sPat11Set.clear();
  mu_pat12Set.clear();
  mu_sPat12Set.clear();
  mu_pat13Set.clear();
  mu_sPat13Set.clear();
  mu_pat14Set.clear();
  mu_sPat14Set.clear();
  mu_pat15Set.clear();
  mu_sPat15Set.clear();
  mu_pat16Set.clear();
  mu_sPat16Set.clear();
  mu_A_known.clear();
  mu_S_known.clear();
  mu_B_known.clear();
  mu_Spy_known.clear();
  mu_emit.clear();
  mu_gnum.clear();
}
void world_class::undefine()
{
  mu_ch.undefine();
  mu_roleA.undefine();
  mu_roleS.undefine();
  mu_roleB.undefine();
  mu_msgs.undefine();
  mu_msg_end.undefine();
  mu_pat1Set.undefine();
  mu_sPat1Set.undefine();
  mu_pat2Set.undefine();
  mu_sPat2Set.undefine();
  mu_pat3Set.undefine();
  mu_sPat3Set.undefine();
  mu_pat4Set.undefine();
  mu_sPat4Set.undefine();
  mu_pat5Set.undefine();
  mu_sPat5Set.undefine();
  mu_pat6Set.undefine();
  mu_sPat6Set.undefine();
  mu_pat7Set.undefine();
  mu_sPat7Set.undefine();
  mu_pat8Set.undefine();
  mu_sPat8Set.undefine();
  mu_pat9Set.undefine();
  mu_sPat9Set.undefine();
  mu_pat10Set.undefine();
  mu_sPat10Set.undefine();
  mu_pat11Set.undefine();
  mu_sPat11Set.undefine();
  mu_pat12Set.undefine();
  mu_sPat12Set.undefine();
  mu_pat13Set.undefine();
  mu_sPat13Set.undefine();
  mu_pat14Set.undefine();
  mu_sPat14Set.undefine();
  mu_pat15Set.undefine();
  mu_sPat15Set.undefine();
  mu_pat16Set.undefine();
  mu_sPat16Set.undefine();
  mu_A_known.undefine();
  mu_S_known.undefine();
  mu_B_known.undefine();
  mu_Spy_known.undefine();
  mu_emit.undefine();
  mu_gnum.undefine();
}
void world_class::reset()
{
  mu_ch.reset();
  mu_roleA.reset();
  mu_roleS.reset();
  mu_roleB.reset();
  mu_msgs.reset();
  mu_msg_end.reset();
  mu_pat1Set.reset();
  mu_sPat1Set.reset();
  mu_pat2Set.reset();
  mu_sPat2Set.reset();
  mu_pat3Set.reset();
  mu_sPat3Set.reset();
  mu_pat4Set.reset();
  mu_sPat4Set.reset();
  mu_pat5Set.reset();
  mu_sPat5Set.reset();
  mu_pat6Set.reset();
  mu_sPat6Set.reset();
  mu_pat7Set.reset();
  mu_sPat7Set.reset();
  mu_pat8Set.reset();
  mu_sPat8Set.reset();
  mu_pat9Set.reset();
  mu_sPat9Set.reset();
  mu_pat10Set.reset();
  mu_sPat10Set.reset();
  mu_pat11Set.reset();
  mu_sPat11Set.reset();
  mu_pat12Set.reset();
  mu_sPat12Set.reset();
  mu_pat13Set.reset();
  mu_sPat13Set.reset();
  mu_pat14Set.reset();
  mu_sPat14Set.reset();
  mu_pat15Set.reset();
  mu_sPat15Set.reset();
  mu_pat16Set.reset();
  mu_sPat16Set.reset();
  mu_A_known.reset();
  mu_S_known.reset();
  mu_B_known.reset();
  mu_Spy_known.reset();
  mu_emit.reset();
  mu_gnum.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print();
  mu_roleA.print();
  mu_roleS.print();
  mu_roleB.print();
  mu_msgs.print();
  mu_msg_end.print();
  mu_pat1Set.print();
  mu_sPat1Set.print();
  mu_pat2Set.print();
  mu_sPat2Set.print();
  mu_pat3Set.print();
  mu_sPat3Set.print();
  mu_pat4Set.print();
  mu_sPat4Set.print();
  mu_pat5Set.print();
  mu_sPat5Set.print();
  mu_pat6Set.print();
  mu_sPat6Set.print();
  mu_pat7Set.print();
  mu_sPat7Set.print();
  mu_pat8Set.print();
  mu_sPat8Set.print();
  mu_pat9Set.print();
  mu_sPat9Set.print();
  mu_pat10Set.print();
  mu_sPat10Set.print();
  mu_pat11Set.print();
  mu_sPat11Set.print();
  mu_pat12Set.print();
  mu_sPat12Set.print();
  mu_pat13Set.print();
  mu_sPat13Set.print();
  mu_pat14Set.print();
  mu_sPat14Set.print();
  mu_pat15Set.print();
  mu_sPat15Set.print();
  mu_pat16Set.print();
  mu_sPat16Set.print();
  mu_A_known.print();
  mu_S_known.print();
  mu_B_known.print();
  mu_Spy_known.print();
  mu_emit.print();
  mu_gnum.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_ch.print_statistic();
  mu_roleA.print_statistic();
  mu_roleS.print_statistic();
  mu_roleB.print_statistic();
  mu_msgs.print_statistic();
  mu_msg_end.print_statistic();
  mu_pat1Set.print_statistic();
  mu_sPat1Set.print_statistic();
  mu_pat2Set.print_statistic();
  mu_sPat2Set.print_statistic();
  mu_pat3Set.print_statistic();
  mu_sPat3Set.print_statistic();
  mu_pat4Set.print_statistic();
  mu_sPat4Set.print_statistic();
  mu_pat5Set.print_statistic();
  mu_sPat5Set.print_statistic();
  mu_pat6Set.print_statistic();
  mu_sPat6Set.print_statistic();
  mu_pat7Set.print_statistic();
  mu_sPat7Set.print_statistic();
  mu_pat8Set.print_statistic();
  mu_sPat8Set.print_statistic();
  mu_pat9Set.print_statistic();
  mu_sPat9Set.print_statistic();
  mu_pat10Set.print_statistic();
  mu_sPat10Set.print_statistic();
  mu_pat11Set.print_statistic();
  mu_sPat11Set.print_statistic();
  mu_pat12Set.print_statistic();
  mu_sPat12Set.print_statistic();
  mu_pat13Set.print_statistic();
  mu_sPat13Set.print_statistic();
  mu_pat14Set.print_statistic();
  mu_sPat14Set.print_statistic();
  mu_pat15Set.print_statistic();
  mu_sPat15Set.print_statistic();
  mu_pat16Set.print_statistic();
  mu_sPat16Set.print_statistic();
  mu_A_known.print_statistic();
  mu_S_known.print_statistic();
  mu_B_known.print_statistic();
  mu_Spy_known.print_statistic();
  mu_emit.print_statistic();
  mu_gnum.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_ch.print_diff(prevstate);
    mu_roleA.print_diff(prevstate);
    mu_roleS.print_diff(prevstate);
    mu_roleB.print_diff(prevstate);
    mu_msgs.print_diff(prevstate);
    mu_msg_end.print_diff(prevstate);
    mu_pat1Set.print_diff(prevstate);
    mu_sPat1Set.print_diff(prevstate);
    mu_pat2Set.print_diff(prevstate);
    mu_sPat2Set.print_diff(prevstate);
    mu_pat3Set.print_diff(prevstate);
    mu_sPat3Set.print_diff(prevstate);
    mu_pat4Set.print_diff(prevstate);
    mu_sPat4Set.print_diff(prevstate);
    mu_pat5Set.print_diff(prevstate);
    mu_sPat5Set.print_diff(prevstate);
    mu_pat6Set.print_diff(prevstate);
    mu_sPat6Set.print_diff(prevstate);
    mu_pat7Set.print_diff(prevstate);
    mu_sPat7Set.print_diff(prevstate);
    mu_pat8Set.print_diff(prevstate);
    mu_sPat8Set.print_diff(prevstate);
    mu_pat9Set.print_diff(prevstate);
    mu_sPat9Set.print_diff(prevstate);
    mu_pat10Set.print_diff(prevstate);
    mu_sPat10Set.print_diff(prevstate);
    mu_pat11Set.print_diff(prevstate);
    mu_sPat11Set.print_diff(prevstate);
    mu_pat12Set.print_diff(prevstate);
    mu_sPat12Set.print_diff(prevstate);
    mu_pat13Set.print_diff(prevstate);
    mu_sPat13Set.print_diff(prevstate);
    mu_pat14Set.print_diff(prevstate);
    mu_sPat14Set.print_diff(prevstate);
    mu_pat15Set.print_diff(prevstate);
    mu_sPat15Set.print_diff(prevstate);
    mu_pat16Set.print_diff(prevstate);
    mu_sPat16Set.print_diff(prevstate);
    mu_A_known.print_diff(prevstate);
    mu_S_known.print_diff(prevstate);
    mu_B_known.print_diff(prevstate);
    mu_Spy_known.print_diff(prevstate);
    mu_emit.print_diff(prevstate);
    mu_gnum.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_ch.to_state( newstate );
  mu_roleA.to_state( newstate );
  mu_roleS.to_state( newstate );
  mu_roleB.to_state( newstate );
  mu_msgs.to_state( newstate );
  mu_msg_end.to_state( newstate );
  mu_pat1Set.to_state( newstate );
  mu_sPat1Set.to_state( newstate );
  mu_pat2Set.to_state( newstate );
  mu_sPat2Set.to_state( newstate );
  mu_pat3Set.to_state( newstate );
  mu_sPat3Set.to_state( newstate );
  mu_pat4Set.to_state( newstate );
  mu_sPat4Set.to_state( newstate );
  mu_pat5Set.to_state( newstate );
  mu_sPat5Set.to_state( newstate );
  mu_pat6Set.to_state( newstate );
  mu_sPat6Set.to_state( newstate );
  mu_pat7Set.to_state( newstate );
  mu_sPat7Set.to_state( newstate );
  mu_pat8Set.to_state( newstate );
  mu_sPat8Set.to_state( newstate );
  mu_pat9Set.to_state( newstate );
  mu_sPat9Set.to_state( newstate );
  mu_pat10Set.to_state( newstate );
  mu_sPat10Set.to_state( newstate );
  mu_pat11Set.to_state( newstate );
  mu_sPat11Set.to_state( newstate );
  mu_pat12Set.to_state( newstate );
  mu_sPat12Set.to_state( newstate );
  mu_pat13Set.to_state( newstate );
  mu_sPat13Set.to_state( newstate );
  mu_pat14Set.to_state( newstate );
  mu_sPat14Set.to_state( newstate );
  mu_pat15Set.to_state( newstate );
  mu_sPat15Set.to_state( newstate );
  mu_pat16Set.to_state( newstate );
  mu_sPat16Set.to_state( newstate );
  mu_A_known.to_state( newstate );
  mu_S_known.to_state( newstate );
  mu_B_known.to_state( newstate );
  mu_Spy_known.to_state( newstate );
  mu_emit.to_state( newstate );
  mu_gnum.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 16, i2:%s, i1:%s", mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr222;
bool mu__boolexpr223;
bool mu__boolexpr224;
bool mu__boolexpr225;
bool mu__boolexpr226;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr226 = FALSE ;
  else {
  mu__boolexpr226 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr226)) mu__boolexpr225 = FALSE ;
  else {
  mu__boolexpr225 = ((mu_i2) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr225)) mu__boolexpr224 = FALSE ;
  else {
  mu__boolexpr224 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr224)) mu__boolexpr223 = FALSE ;
  else {
  mu__boolexpr223 = (mu_matchPat( mu_msgs[mu_construct16By114( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2] )], mu_sPat16Set )) ; 
}
  if (!(mu__boolexpr223)) mu__boolexpr222 = FALSE ;
  else {
  mu__boolexpr222 = (!(mu_Spy_known[mu_construct16By114( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr222;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 36 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr227;
bool mu__boolexpr228;
bool mu__boolexpr229;
bool mu__boolexpr230;
bool mu__boolexpr231;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr231 = FALSE ;
  else {
  mu__boolexpr231 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr231)) mu__boolexpr230 = FALSE ;
  else {
  mu__boolexpr230 = ((mu_i2) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr230)) mu__boolexpr229 = FALSE ;
  else {
  mu__boolexpr229 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr229)) mu__boolexpr228 = FALSE ;
  else {
  mu__boolexpr228 = (mu_matchPat( mu_msgs[mu_construct16By114( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2] )], mu_sPat16Set )) ; 
}
  if (!(mu__boolexpr228)) mu__boolexpr227 = FALSE ;
  else {
  mu__boolexpr227 = (!(mu_Spy_known[mu_construct16By114( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr227) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat16\n";
mu_concatMsgNo = mu_construct16By114( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat16Set, mu_concatMsgNo )) )
{
mu_pat16Set.mu_length = (mu_pat16Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat16Set.mu_content[mu_pat16Set.mu_length].undefine();
else
  mu_pat16Set.mu_content[mu_pat16Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 16, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr232;
bool mu__boolexpr233;
bool mu__boolexpr234;
  if (!((mu_i) <= (mu_pat16Set.mu_length))) mu__boolexpr234 = FALSE ;
  else {
  mu__boolexpr234 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr234)) mu__boolexpr233 = FALSE ;
  else {
  mu__boolexpr233 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr233)) mu__boolexpr232 = FALSE ;
  else {
bool mu__boolexpr235;
  if (!(mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr235 = FALSE ;
  else {
  mu__boolexpr235 = (mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr232 = (!(mu__boolexpr235)) ; 
}
    return mu__boolexpr232;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 36;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 42 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr236;
bool mu__boolexpr237;
bool mu__boolexpr238;
  if (!((mu_i) <= (mu_pat16Set.mu_length))) mu__boolexpr238 = FALSE ;
  else {
  mu__boolexpr238 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr238)) mu__boolexpr237 = FALSE ;
  else {
  mu__boolexpr237 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr237)) mu__boolexpr236 = FALSE ;
  else {
bool mu__boolexpr239;
  if (!(mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr239 = FALSE ;
  else {
  mu__boolexpr239 = (mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr236 = (!(mu__boolexpr239)) ; 
}
	      if (mu__boolexpr236) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 36;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",24);

cout << "rule deconcat16\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat16Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat14 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat14Set, mu_msgPat2 )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 15, i3:%s, i2:%s, i1:%s", mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr240;
bool mu__boolexpr241;
bool mu__boolexpr242;
bool mu__boolexpr243;
bool mu__boolexpr244;
bool mu__boolexpr245;
bool mu__boolexpr246;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr246 = FALSE ;
  else {
  mu__boolexpr246 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr246)) mu__boolexpr245 = FALSE ;
  else {
  mu__boolexpr245 = ((mu_i2) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr245)) mu__boolexpr244 = FALSE ;
  else {
  mu__boolexpr244 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr244)) mu__boolexpr243 = FALSE ;
  else {
  mu__boolexpr243 = ((mu_i3) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr243)) mu__boolexpr242 = FALSE ;
  else {
  mu__boolexpr242 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr242)) mu__boolexpr241 = FALSE ;
  else {
  mu__boolexpr241 = (mu_matchPat( mu_msgs[mu_construct15By1148( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )], mu_sPat15Set )) ; 
}
  if (!(mu__boolexpr241)) mu__boolexpr240 = FALSE ;
  else {
  mu__boolexpr240 = (!(mu_Spy_known[mu_construct15By1148( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )])) ; 
}
    return mu__boolexpr240;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 42;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 258 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr247;
bool mu__boolexpr248;
bool mu__boolexpr249;
bool mu__boolexpr250;
bool mu__boolexpr251;
bool mu__boolexpr252;
bool mu__boolexpr253;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr253 = FALSE ;
  else {
  mu__boolexpr253 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr253)) mu__boolexpr252 = FALSE ;
  else {
  mu__boolexpr252 = ((mu_i2) <= (mu_pat14Set.mu_length)) ; 
}
  if (!(mu__boolexpr252)) mu__boolexpr251 = FALSE ;
  else {
  mu__boolexpr251 = (mu_Spy_known[mu_pat14Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr251)) mu__boolexpr250 = FALSE ;
  else {
  mu__boolexpr250 = ((mu_i3) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr250)) mu__boolexpr249 = FALSE ;
  else {
  mu__boolexpr249 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr249)) mu__boolexpr248 = FALSE ;
  else {
  mu__boolexpr248 = (mu_matchPat( mu_msgs[mu_construct15By1148( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )], mu_sPat15Set )) ; 
}
  if (!(mu__boolexpr248)) mu__boolexpr247 = FALSE ;
  else {
  mu__boolexpr247 = (!(mu_Spy_known[mu_construct15By1148( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )])) ; 
}
	      if (mu__boolexpr247) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 42;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat15\n";
mu_concatMsgNo = mu_construct15By1148( mu_pat1Set.mu_content[mu_i1], mu_pat14Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat15Set, mu_concatMsgNo )) )
{
mu_pat15Set.mu_length = (mu_pat15Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat15Set.mu_content[mu_pat15Set.mu_length].undefine();
else
  mu_pat15Set.mu_content[mu_pat15Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 15, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr254;
bool mu__boolexpr255;
bool mu__boolexpr256;
  if (!((mu_i) <= (mu_pat15Set.mu_length))) mu__boolexpr256 = FALSE ;
  else {
  mu__boolexpr256 = ((mu_pat15Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr256)) mu__boolexpr255 = FALSE ;
  else {
  mu__boolexpr255 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr255)) mu__boolexpr254 = FALSE ;
  else {
bool mu__boolexpr257;
bool mu__boolexpr258;
  if (!(mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr258 = FALSE ;
  else {
  mu__boolexpr258 = (mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr258)) mu__boolexpr257 = FALSE ;
  else {
  mu__boolexpr257 = (mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  mu__boolexpr254 = (!(mu__boolexpr257)) ; 
}
    return mu__boolexpr254;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 258;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 264 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr259;
bool mu__boolexpr260;
bool mu__boolexpr261;
  if (!((mu_i) <= (mu_pat15Set.mu_length))) mu__boolexpr261 = FALSE ;
  else {
  mu__boolexpr261 = ((mu_pat15Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr261)) mu__boolexpr260 = FALSE ;
  else {
  mu__boolexpr260 = (mu_Spy_known[mu_pat15Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr260)) mu__boolexpr259 = FALSE ;
  else {
bool mu__boolexpr262;
bool mu__boolexpr263;
  if (!(mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr263 = FALSE ;
  else {
  mu__boolexpr263 = (mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr263)) mu__boolexpr262 = FALSE ;
  else {
  mu__boolexpr262 = (mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  mu__boolexpr259 = (!(mu__boolexpr262)) ; 
}
	      if (mu__boolexpr259) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 258;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",40);

cout << "rule deconcat15\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat14 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat14Set, mu_msgPat2 )) )
{
mu_pat14Set.mu_length = (mu_pat14Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat14Set.mu_content[mu_pat14Set.mu_length].undefine();
else
  mu_pat14Set.mu_content[mu_pat14Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat15Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat8 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat8Set, mu_msgPat3 )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_msgPat3;
}
}
}
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 13, i4:%s, i3:%s, i2:%s, i1:%s", mu_i4.Name(), mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr264;
bool mu__boolexpr265;
bool mu__boolexpr266;
bool mu__boolexpr267;
bool mu__boolexpr268;
bool mu__boolexpr269;
bool mu__boolexpr270;
bool mu__boolexpr271;
bool mu__boolexpr272;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr272 = FALSE ;
  else {
  mu__boolexpr272 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr272)) mu__boolexpr271 = FALSE ;
  else {
  mu__boolexpr271 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr271)) mu__boolexpr270 = FALSE ;
  else {
  mu__boolexpr270 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr270)) mu__boolexpr269 = FALSE ;
  else {
  mu__boolexpr269 = ((mu_i3) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr269)) mu__boolexpr268 = FALSE ;
  else {
  mu__boolexpr268 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr268)) mu__boolexpr267 = FALSE ;
  else {
  mu__boolexpr267 = ((mu_i4) <= (mu_pat10Set.mu_length)) ; 
}
  if (!(mu__boolexpr267)) mu__boolexpr266 = FALSE ;
  else {
  mu__boolexpr266 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr266)) mu__boolexpr265 = FALSE ;
  else {
  mu__boolexpr265 = (mu_matchPat( mu_msgs[mu_construct13By12210( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4] )], mu_sPat13Set )) ; 
}
  if (!(mu__boolexpr265)) mu__boolexpr264 = FALSE ;
  else {
  mu__boolexpr264 = (!(mu_Spy_known[mu_construct13By12210( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4] )])) ; 
}
    return mu__boolexpr264;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 264;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1560 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr273;
bool mu__boolexpr274;
bool mu__boolexpr275;
bool mu__boolexpr276;
bool mu__boolexpr277;
bool mu__boolexpr278;
bool mu__boolexpr279;
bool mu__boolexpr280;
bool mu__boolexpr281;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr281 = FALSE ;
  else {
  mu__boolexpr281 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr281)) mu__boolexpr280 = FALSE ;
  else {
  mu__boolexpr280 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr280)) mu__boolexpr279 = FALSE ;
  else {
  mu__boolexpr279 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr279)) mu__boolexpr278 = FALSE ;
  else {
  mu__boolexpr278 = ((mu_i3) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr278)) mu__boolexpr277 = FALSE ;
  else {
  mu__boolexpr277 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr277)) mu__boolexpr276 = FALSE ;
  else {
  mu__boolexpr276 = ((mu_i4) <= (mu_pat10Set.mu_length)) ; 
}
  if (!(mu__boolexpr276)) mu__boolexpr275 = FALSE ;
  else {
  mu__boolexpr275 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr275)) mu__boolexpr274 = FALSE ;
  else {
  mu__boolexpr274 = (mu_matchPat( mu_msgs[mu_construct13By12210( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4] )], mu_sPat13Set )) ; 
}
  if (!(mu__boolexpr274)) mu__boolexpr273 = FALSE ;
  else {
  mu__boolexpr273 = (!(mu_Spy_known[mu_construct13By12210( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4] )])) ; 
}
	      if (mu__boolexpr273) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 264;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat13\n";
mu_concatMsgNo = mu_construct13By12210( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat13Set, mu_concatMsgNo )) )
{
mu_pat13Set.mu_length = (mu_pat13Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat13Set.mu_content[mu_pat13Set.mu_length].undefine();
else
  mu_pat13Set.mu_content[mu_pat13Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 13, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr282;
bool mu__boolexpr283;
bool mu__boolexpr284;
  if (!((mu_i) <= (mu_pat13Set.mu_length))) mu__boolexpr284 = FALSE ;
  else {
  mu__boolexpr284 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr284)) mu__boolexpr283 = FALSE ;
  else {
  mu__boolexpr283 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr283)) mu__boolexpr282 = FALSE ;
  else {
bool mu__boolexpr285;
bool mu__boolexpr286;
bool mu__boolexpr287;
  if (!(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr287 = FALSE ;
  else {
  mu__boolexpr287 = (mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr287)) mu__boolexpr286 = FALSE ;
  else {
  mu__boolexpr286 = (mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr286)) mu__boolexpr285 = FALSE ;
  else {
  mu__boolexpr285 = (mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr282 = (!(mu__boolexpr285)) ; 
}
    return mu__boolexpr282;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1560;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1566 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr288;
bool mu__boolexpr289;
bool mu__boolexpr290;
  if (!((mu_i) <= (mu_pat13Set.mu_length))) mu__boolexpr290 = FALSE ;
  else {
  mu__boolexpr290 = ((mu_pat13Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr290)) mu__boolexpr289 = FALSE ;
  else {
  mu__boolexpr289 = (mu_Spy_known[mu_pat13Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr289)) mu__boolexpr288 = FALSE ;
  else {
bool mu__boolexpr291;
bool mu__boolexpr292;
bool mu__boolexpr293;
  if (!(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr293 = FALSE ;
  else {
  mu__boolexpr293 = (mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr293)) mu__boolexpr292 = FALSE ;
  else {
  mu__boolexpr292 = (mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr292)) mu__boolexpr291 = FALSE ;
  else {
  mu__boolexpr291 = (mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr288 = (!(mu__boolexpr291)) ; 
}
	      if (mu__boolexpr288) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1560;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",40);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",48);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat4("flagPat4",56);

cout << "rule deconcat13\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat2 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat2 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat3 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat3;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[4]]) )
{
mu_Spy_known[mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[4]] = mu_true;
mu_msgPat4 = mu_msgs[mu_pat13Set.mu_content[mu_i]].mu_concatPart[4];
mu_isPat10 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
{
if ( !(mu_exist( mu_pat10Set, mu_msgPat4 )) )
{
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_msgPat4;
}
}
}
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 12, i3:%s, i2:%s, i1:%s", mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr294;
bool mu__boolexpr295;
bool mu__boolexpr296;
bool mu__boolexpr297;
bool mu__boolexpr298;
bool mu__boolexpr299;
bool mu__boolexpr300;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr300 = FALSE ;
  else {
  mu__boolexpr300 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr300)) mu__boolexpr299 = FALSE ;
  else {
  mu__boolexpr299 = ((mu_i2) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr299)) mu__boolexpr298 = FALSE ;
  else {
  mu__boolexpr298 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr298)) mu__boolexpr297 = FALSE ;
  else {
  mu__boolexpr297 = ((mu_i3) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr297)) mu__boolexpr296 = FALSE ;
  else {
  mu__boolexpr296 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr296)) mu__boolexpr295 = FALSE ;
  else {
  mu__boolexpr295 = (mu_matchPat( mu_msgs[mu_construct12By188( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )], mu_sPat12Set )) ; 
}
  if (!(mu__boolexpr295)) mu__boolexpr294 = FALSE ;
  else {
  mu__boolexpr294 = (!(mu_Spy_known[mu_construct12By188( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )])) ; 
}
    return mu__boolexpr294;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1566;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1782 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr301;
bool mu__boolexpr302;
bool mu__boolexpr303;
bool mu__boolexpr304;
bool mu__boolexpr305;
bool mu__boolexpr306;
bool mu__boolexpr307;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr307 = FALSE ;
  else {
  mu__boolexpr307 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr307)) mu__boolexpr306 = FALSE ;
  else {
  mu__boolexpr306 = ((mu_i2) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr306)) mu__boolexpr305 = FALSE ;
  else {
  mu__boolexpr305 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr305)) mu__boolexpr304 = FALSE ;
  else {
  mu__boolexpr304 = ((mu_i3) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr304)) mu__boolexpr303 = FALSE ;
  else {
  mu__boolexpr303 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr303)) mu__boolexpr302 = FALSE ;
  else {
  mu__boolexpr302 = (mu_matchPat( mu_msgs[mu_construct12By188( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )], mu_sPat12Set )) ; 
}
  if (!(mu__boolexpr302)) mu__boolexpr301 = FALSE ;
  else {
  mu__boolexpr301 = (!(mu_Spy_known[mu_construct12By188( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] )])) ; 
}
	      if (mu__boolexpr301) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1566;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat12\n";
mu_concatMsgNo = mu_construct12By188( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2], mu_pat8Set.mu_content[mu_i3] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat12Set, mu_concatMsgNo )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 12, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr308;
bool mu__boolexpr309;
bool mu__boolexpr310;
  if (!((mu_i) <= (mu_pat12Set.mu_length))) mu__boolexpr310 = FALSE ;
  else {
  mu__boolexpr310 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr310)) mu__boolexpr309 = FALSE ;
  else {
  mu__boolexpr309 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr309)) mu__boolexpr308 = FALSE ;
  else {
bool mu__boolexpr311;
bool mu__boolexpr312;
  if (!(mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr312 = FALSE ;
  else {
  mu__boolexpr312 = (mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr312)) mu__boolexpr311 = FALSE ;
  else {
  mu__boolexpr311 = (mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  mu__boolexpr308 = (!(mu__boolexpr311)) ; 
}
    return mu__boolexpr308;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1782;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 1788 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr313;
bool mu__boolexpr314;
bool mu__boolexpr315;
  if (!((mu_i) <= (mu_pat12Set.mu_length))) mu__boolexpr315 = FALSE ;
  else {
  mu__boolexpr315 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr315)) mu__boolexpr314 = FALSE ;
  else {
  mu__boolexpr314 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr314)) mu__boolexpr313 = FALSE ;
  else {
bool mu__boolexpr316;
bool mu__boolexpr317;
  if (!(mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr317 = FALSE ;
  else {
  mu__boolexpr317 = (mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr317)) mu__boolexpr316 = FALSE ;
  else {
  mu__boolexpr316 = (mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  mu__boolexpr313 = (!(mu__boolexpr316)) ; 
}
	      if (mu__boolexpr313) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1782;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",40);

cout << "rule deconcat12\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat8 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat8Set, mu_msgPat2 )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat12Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat8 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat8Set, mu_msgPat3 )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_msgPat3;
}
}
}
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i5;
    mu_i5.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 11, i5:%s, i4:%s, i3:%s, i2:%s, i1:%s", mu_i5.Name(), mu_i4.Name(), mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i5;
    mu_i5.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr318;
bool mu__boolexpr319;
bool mu__boolexpr320;
bool mu__boolexpr321;
bool mu__boolexpr322;
bool mu__boolexpr323;
bool mu__boolexpr324;
bool mu__boolexpr325;
bool mu__boolexpr326;
bool mu__boolexpr327;
bool mu__boolexpr328;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr328 = FALSE ;
  else {
  mu__boolexpr328 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr328)) mu__boolexpr327 = FALSE ;
  else {
  mu__boolexpr327 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr327)) mu__boolexpr326 = FALSE ;
  else {
  mu__boolexpr326 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr326)) mu__boolexpr325 = FALSE ;
  else {
  mu__boolexpr325 = ((mu_i3) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr325)) mu__boolexpr324 = FALSE ;
  else {
  mu__boolexpr324 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr324)) mu__boolexpr323 = FALSE ;
  else {
  mu__boolexpr323 = ((mu_i4) <= (mu_pat10Set.mu_length)) ; 
}
  if (!(mu__boolexpr323)) mu__boolexpr322 = FALSE ;
  else {
  mu__boolexpr322 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr322)) mu__boolexpr321 = FALSE ;
  else {
  mu__boolexpr321 = ((mu_i5) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr321)) mu__boolexpr320 = FALSE ;
  else {
  mu__boolexpr320 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i5]]) ; 
}
  if (!(mu__boolexpr320)) mu__boolexpr319 = FALSE ;
  else {
  mu__boolexpr319 = (mu_matchPat( mu_msgs[mu_construct11By122105( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4], mu_pat5Set.mu_content[mu_i5] )], mu_sPat11Set )) ; 
}
  if (!(mu__boolexpr319)) mu__boolexpr318 = FALSE ;
  else {
  mu__boolexpr318 = (!(mu_Spy_known[mu_construct11By122105( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4], mu_pat5Set.mu_content[mu_i5] )])) ; 
}
    return mu__boolexpr318;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 1788;
    static mu_1_msgLen mu_i5;
    mu_i5.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 9564 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr329;
bool mu__boolexpr330;
bool mu__boolexpr331;
bool mu__boolexpr332;
bool mu__boolexpr333;
bool mu__boolexpr334;
bool mu__boolexpr335;
bool mu__boolexpr336;
bool mu__boolexpr337;
bool mu__boolexpr338;
bool mu__boolexpr339;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr339 = FALSE ;
  else {
  mu__boolexpr339 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr339)) mu__boolexpr338 = FALSE ;
  else {
  mu__boolexpr338 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr338)) mu__boolexpr337 = FALSE ;
  else {
  mu__boolexpr337 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr337)) mu__boolexpr336 = FALSE ;
  else {
  mu__boolexpr336 = ((mu_i3) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr336)) mu__boolexpr335 = FALSE ;
  else {
  mu__boolexpr335 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr335)) mu__boolexpr334 = FALSE ;
  else {
  mu__boolexpr334 = ((mu_i4) <= (mu_pat10Set.mu_length)) ; 
}
  if (!(mu__boolexpr334)) mu__boolexpr333 = FALSE ;
  else {
  mu__boolexpr333 = (mu_Spy_known[mu_pat10Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr333)) mu__boolexpr332 = FALSE ;
  else {
  mu__boolexpr332 = ((mu_i5) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr332)) mu__boolexpr331 = FALSE ;
  else {
  mu__boolexpr331 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i5]]) ; 
}
  if (!(mu__boolexpr331)) mu__boolexpr330 = FALSE ;
  else {
  mu__boolexpr330 = (mu_matchPat( mu_msgs[mu_construct11By122105( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4], mu_pat5Set.mu_content[mu_i5] )], mu_sPat11Set )) ; 
}
  if (!(mu__boolexpr330)) mu__boolexpr329 = FALSE ;
  else {
  mu__boolexpr329 = (!(mu_Spy_known[mu_construct11By122105( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4], mu_pat5Set.mu_content[mu_i5] )])) ; 
}
	      if (mu__boolexpr329) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 1788;
    mu_i5.value((r % 6) + 0);
    r = r / 6;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i5;
    mu_i5.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat11\n";
mu_concatMsgNo = mu_construct11By122105( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat10Set.mu_content[mu_i4], mu_pat5Set.mu_content[mu_i5] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat11Set, mu_concatMsgNo )) )
{
mu_pat11Set.mu_length = (mu_pat11Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat11Set.mu_content[mu_pat11Set.mu_length].undefine();
else
  mu_pat11Set.mu_content[mu_pat11Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 11, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr340;
bool mu__boolexpr341;
bool mu__boolexpr342;
  if (!((mu_i) <= (mu_pat11Set.mu_length))) mu__boolexpr342 = FALSE ;
  else {
  mu__boolexpr342 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr342)) mu__boolexpr341 = FALSE ;
  else {
  mu__boolexpr341 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr341)) mu__boolexpr340 = FALSE ;
  else {
bool mu__boolexpr343;
bool mu__boolexpr344;
bool mu__boolexpr345;
bool mu__boolexpr346;
  if (!(mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr346 = FALSE ;
  else {
  mu__boolexpr346 = (mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr346)) mu__boolexpr345 = FALSE ;
  else {
  mu__boolexpr345 = (mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr345)) mu__boolexpr344 = FALSE ;
  else {
  mu__boolexpr344 = (mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  if (!(mu__boolexpr344)) mu__boolexpr343 = FALSE ;
  else {
  mu__boolexpr343 = (mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[5]]) ; 
}
  mu__boolexpr340 = (!(mu__boolexpr343)) ; 
}
    return mu__boolexpr340;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9564;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 9570 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr347;
bool mu__boolexpr348;
bool mu__boolexpr349;
  if (!((mu_i) <= (mu_pat11Set.mu_length))) mu__boolexpr349 = FALSE ;
  else {
  mu__boolexpr349 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr349)) mu__boolexpr348 = FALSE ;
  else {
  mu__boolexpr348 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr348)) mu__boolexpr347 = FALSE ;
  else {
bool mu__boolexpr350;
bool mu__boolexpr351;
bool mu__boolexpr352;
bool mu__boolexpr353;
  if (!(mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr353 = FALSE ;
  else {
  mu__boolexpr353 = (mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr353)) mu__boolexpr352 = FALSE ;
  else {
  mu__boolexpr352 = (mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr352)) mu__boolexpr351 = FALSE ;
  else {
  mu__boolexpr351 = (mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  if (!(mu__boolexpr351)) mu__boolexpr350 = FALSE ;
  else {
  mu__boolexpr350 = (mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[5]]) ; 
}
  mu__boolexpr347 = (!(mu__boolexpr350)) ; 
}
	      if (mu__boolexpr347) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9564;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",24);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat5("msgPat5",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",40);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",48);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",56);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat4("flagPat4",64);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat5("flagPat5",72);

cout << "rule deconcat11\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat2 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat2 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat3 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat3;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[4]]) )
{
mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[4]] = mu_true;
mu_msgPat4 = mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[4];
mu_isPat10 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
{
if ( !(mu_exist( mu_pat10Set, mu_msgPat4 )) )
{
mu_pat10Set.mu_length = (mu_pat10Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat10Set.mu_content[mu_pat10Set.mu_length].undefine();
else
  mu_pat10Set.mu_content[mu_pat10Set.mu_length] = mu_msgPat4;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[5]]) )
{
mu_Spy_known[mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[5]] = mu_true;
mu_msgPat5 = mu_msgs[mu_pat11Set.mu_content[mu_i]].mu_concatPart[5];
mu_isPat5 ( mu_msgs[mu_msgPat5], mu_flagPat5 );
if ( mu_flagPat5 )
{
if ( !(mu_exist( mu_pat5Set, mu_msgPat5 )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msgPat5.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msgPat5;
}
}
}
  };

};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 9, i2:%s, i1:%s", mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr354;
bool mu__boolexpr355;
bool mu__boolexpr356;
bool mu__boolexpr357;
bool mu__boolexpr358;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr358 = FALSE ;
  else {
  mu__boolexpr358 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr358)) mu__boolexpr357 = FALSE ;
  else {
  mu__boolexpr357 = ((mu_i2) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr357)) mu__boolexpr356 = FALSE ;
  else {
  mu__boolexpr356 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr356)) mu__boolexpr355 = FALSE ;
  else {
  mu__boolexpr355 = (mu_matchPat( mu_msgs[mu_construct9By18( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2] )], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr355)) mu__boolexpr354 = FALSE ;
  else {
  mu__boolexpr354 = (!(mu_Spy_known[mu_construct9By18( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr354;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9570;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 9606 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr359;
bool mu__boolexpr360;
bool mu__boolexpr361;
bool mu__boolexpr362;
bool mu__boolexpr363;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr363 = FALSE ;
  else {
  mu__boolexpr363 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr363)) mu__boolexpr362 = FALSE ;
  else {
  mu__boolexpr362 = ((mu_i2) <= (mu_pat8Set.mu_length)) ; 
}
  if (!(mu__boolexpr362)) mu__boolexpr361 = FALSE ;
  else {
  mu__boolexpr361 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr361)) mu__boolexpr360 = FALSE ;
  else {
  mu__boolexpr360 = (mu_matchPat( mu_msgs[mu_construct9By18( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2] )], mu_sPat9Set )) ; 
}
  if (!(mu__boolexpr360)) mu__boolexpr359 = FALSE ;
  else {
  mu__boolexpr359 = (!(mu_Spy_known[mu_construct9By18( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr359) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9570;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat9\n";
mu_concatMsgNo = mu_construct9By18( mu_pat1Set.mu_content[mu_i1], mu_pat8Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat9Set, mu_concatMsgNo )) )
{
mu_pat9Set.mu_length = (mu_pat9Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat9Set.mu_content[mu_pat9Set.mu_length].undefine();
else
  mu_pat9Set.mu_content[mu_pat9Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 9, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr364;
bool mu__boolexpr365;
bool mu__boolexpr366;
  if (!((mu_i) <= (mu_pat9Set.mu_length))) mu__boolexpr366 = FALSE ;
  else {
  mu__boolexpr366 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr366)) mu__boolexpr365 = FALSE ;
  else {
  mu__boolexpr365 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr365)) mu__boolexpr364 = FALSE ;
  else {
bool mu__boolexpr367;
  if (!(mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr367 = FALSE ;
  else {
  mu__boolexpr367 = (mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr364 = (!(mu__boolexpr367)) ; 
}
    return mu__boolexpr364;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9606;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 9612 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr368;
bool mu__boolexpr369;
bool mu__boolexpr370;
  if (!((mu_i) <= (mu_pat9Set.mu_length))) mu__boolexpr370 = FALSE ;
  else {
  mu__boolexpr370 = ((mu_pat9Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr370)) mu__boolexpr369 = FALSE ;
  else {
  mu__boolexpr369 = (mu_Spy_known[mu_pat9Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr369)) mu__boolexpr368 = FALSE ;
  else {
bool mu__boolexpr371;
  if (!(mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr371 = FALSE ;
  else {
  mu__boolexpr371 = (mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr368 = (!(mu__boolexpr371)) ; 
}
	      if (mu__boolexpr368) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9606;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",24);

cout << "rule deconcat9\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat9Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat8 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat8Set, mu_msgPat2 )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("sencrypt 8, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr372;
bool mu__boolexpr373;
bool mu__boolexpr374;
bool mu__boolexpr375;
bool mu__boolexpr376;
bool mu__boolexpr377;
bool mu__boolexpr378;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr378 = FALSE ;
  else {
  mu__boolexpr378 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr378)) mu__boolexpr377 = FALSE ;
  else {
  mu__boolexpr377 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr377)) mu__boolexpr376 = FALSE ;
  else {
  mu__boolexpr376 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr376)) mu__boolexpr375 = FALSE ;
  else {
  mu__boolexpr375 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr375)) mu__boolexpr374 = FALSE ;
  else {
  mu__boolexpr374 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr374)) mu__boolexpr373 = FALSE ;
  else {
  mu__boolexpr373 = (mu_matchPat( mu_msgs[mu_construct8By74( mu_pat7Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr373)) mu__boolexpr372 = FALSE ;
  else {
  mu__boolexpr372 = (!(mu_Spy_known[mu_construct8By74( mu_pat7Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr372;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9612;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 9648 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr379;
bool mu__boolexpr380;
bool mu__boolexpr381;
bool mu__boolexpr382;
bool mu__boolexpr383;
bool mu__boolexpr384;
bool mu__boolexpr385;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr385 = FALSE ;
  else {
  mu__boolexpr385 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr385)) mu__boolexpr384 = FALSE ;
  else {
  mu__boolexpr384 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr384)) mu__boolexpr383 = FALSE ;
  else {
  mu__boolexpr383 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr383)) mu__boolexpr382 = FALSE ;
  else {
  mu__boolexpr382 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr382)) mu__boolexpr381 = FALSE ;
  else {
  mu__boolexpr381 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr381)) mu__boolexpr380 = FALSE ;
  else {
  mu__boolexpr380 = (mu_matchPat( mu_msgs[mu_construct8By74( mu_pat7Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )], mu_sPat8Set )) ; 
}
  if (!(mu__boolexpr380)) mu__boolexpr379 = FALSE ;
  else {
  mu__boolexpr379 = (!(mu_Spy_known[mu_construct8By74( mu_pat7Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr379) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9612;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",0);

cout << "rule sencrypt8\n";
if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_Symk) )
{
mu_encMsgNo = mu_construct8By74( mu_pat7Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat8Set, mu_encMsgNo )) )
{
mu_pat8Set.mu_length = (mu_pat8Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat8Set.mu_content[mu_pat8Set.mu_length].undefine();
else
  mu_pat8Set.mu_content[mu_pat8Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
  };

};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("sdecrypt 8, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr386;
bool mu__boolexpr387;
bool mu__boolexpr388;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr388 = FALSE ;
  else {
  mu__boolexpr388 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr388)) mu__boolexpr387 = FALSE ;
  else {
  mu__boolexpr387 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr387)) mu__boolexpr386 = FALSE ;
  else {
  mu__boolexpr386 = (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_sencMsg])) ; 
}
    return mu__boolexpr386;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9648;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 9654 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr389;
bool mu__boolexpr390;
bool mu__boolexpr391;
  if (!((mu_i) <= (mu_pat8Set.mu_length))) mu__boolexpr391 = FALSE ;
  else {
  mu__boolexpr391 = ((mu_pat8Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr391)) mu__boolexpr390 = FALSE ;
  else {
  mu__boolexpr390 = (mu_Spy_known[mu_pat8Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr390)) mu__boolexpr389 = FALSE ;
  else {
  mu__boolexpr389 = (!(mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_sencMsg])) ; 
}
	      if (mu__boolexpr389) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9648;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat7("msgPat7",216);

/*** Variable declaration ***/
mu_1_indexType mu_keyNo("keyNo",224);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat7("flag_pat7",232);

cout << "rule sdecrypt8\n";
mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_sencKey] );
mu_get_msgNo ( mu_key_inv, mu_keyNo );
bool mu__boolexpr392;
bool mu__boolexpr393;
  if (!((mu_key_inv.mu_k.mu_encType) == (mu_Symk))) mu__boolexpr393 = FALSE ;
  else {
bool mu__boolexpr394;
  if ((mu_key_inv.mu_k.mu_ag1) == (mu_Intruder)) mu__boolexpr394 = TRUE ;
  else {
  mu__boolexpr394 = ((mu_key_inv.mu_k.mu_ag2) == (mu_Intruder)) ; 
}
  mu__boolexpr393 = (mu__boolexpr394) ; 
}
  if (mu__boolexpr393) mu__boolexpr392 = TRUE ;
  else {
  mu__boolexpr392 = (mu_Spy_known[mu_keyNo]) ; 
}
if ( mu__boolexpr392 )
{
mu_Spy_known[mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_sencMsg] = mu_true;
mu_msgPat7 = mu_msgs[mu_pat8Set.mu_content[mu_i]].mu_sencMsg;
mu_isPat7 ( mu_msgs[mu_msgPat7], mu_flag_pat7 );
if ( mu_flag_pat7 )
{
if ( !(mu_exist( mu_pat7Set, mu_msgPat7 )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_msgPat7.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_msgPat7;
}
}
}
  };

};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 7, i2:%s, i1:%s", mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr395;
bool mu__boolexpr396;
bool mu__boolexpr397;
bool mu__boolexpr398;
bool mu__boolexpr399;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr399 = FALSE ;
  else {
  mu__boolexpr399 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr399)) mu__boolexpr398 = FALSE ;
  else {
  mu__boolexpr398 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr398)) mu__boolexpr397 = FALSE ;
  else {
  mu__boolexpr397 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr397)) mu__boolexpr396 = FALSE ;
  else {
  mu__boolexpr396 = (mu_matchPat( mu_msgs[mu_construct7By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )], mu_sPat7Set )) ; 
}
  if (!(mu__boolexpr396)) mu__boolexpr395 = FALSE ;
  else {
  mu__boolexpr395 = (!(mu_Spy_known[mu_construct7By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
    return mu__boolexpr395;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9654;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 9690 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr400;
bool mu__boolexpr401;
bool mu__boolexpr402;
bool mu__boolexpr403;
bool mu__boolexpr404;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr404 = FALSE ;
  else {
  mu__boolexpr404 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr404)) mu__boolexpr403 = FALSE ;
  else {
  mu__boolexpr403 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr403)) mu__boolexpr402 = FALSE ;
  else {
  mu__boolexpr402 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr402)) mu__boolexpr401 = FALSE ;
  else {
  mu__boolexpr401 = (mu_matchPat( mu_msgs[mu_construct7By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )], mu_sPat7Set )) ; 
}
  if (!(mu__boolexpr401)) mu__boolexpr400 = FALSE ;
  else {
  mu__boolexpr400 = (!(mu_Spy_known[mu_construct7By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] )])) ; 
}
	      if (mu__boolexpr400) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9654;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat7\n";
mu_concatMsgNo = mu_construct7By11( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat7Set, mu_concatMsgNo )) )
{
mu_pat7Set.mu_length = (mu_pat7Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat7Set.mu_content[mu_pat7Set.mu_length].undefine();
else
  mu_pat7Set.mu_content[mu_pat7Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 7, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr405;
bool mu__boolexpr406;
bool mu__boolexpr407;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr407 = FALSE ;
  else {
  mu__boolexpr407 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr407)) mu__boolexpr406 = FALSE ;
  else {
  mu__boolexpr406 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr406)) mu__boolexpr405 = FALSE ;
  else {
bool mu__boolexpr408;
  if (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr408 = FALSE ;
  else {
  mu__boolexpr408 = (mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr405 = (!(mu__boolexpr408)) ; 
}
    return mu__boolexpr405;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9690;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 9696 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr409;
bool mu__boolexpr410;
bool mu__boolexpr411;
  if (!((mu_i) <= (mu_pat7Set.mu_length))) mu__boolexpr411 = FALSE ;
  else {
  mu__boolexpr411 = ((mu_pat7Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr411)) mu__boolexpr410 = FALSE ;
  else {
  mu__boolexpr410 = (mu_Spy_known[mu_pat7Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr410)) mu__boolexpr409 = FALSE ;
  else {
bool mu__boolexpr412;
  if (!(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr412 = FALSE ;
  else {
  mu__boolexpr412 = (mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  mu__boolexpr409 = (!(mu__boolexpr412)) ; 
}
	      if (mu__boolexpr409) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9690;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",16);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",24);

cout << "rule deconcat7\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat7Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
  };

};
/******************** RuleBase16 ********************/
class RuleBase16
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 6, i4:%s, i3:%s, i2:%s, i1:%s", mu_i4.Name(), mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr413;
bool mu__boolexpr414;
bool mu__boolexpr415;
bool mu__boolexpr416;
bool mu__boolexpr417;
bool mu__boolexpr418;
bool mu__boolexpr419;
bool mu__boolexpr420;
bool mu__boolexpr421;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr421 = FALSE ;
  else {
  mu__boolexpr421 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr421)) mu__boolexpr420 = FALSE ;
  else {
  mu__boolexpr420 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr420)) mu__boolexpr419 = FALSE ;
  else {
  mu__boolexpr419 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr419)) mu__boolexpr418 = FALSE ;
  else {
  mu__boolexpr418 = ((mu_i3) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr418)) mu__boolexpr417 = FALSE ;
  else {
  mu__boolexpr417 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr417)) mu__boolexpr416 = FALSE ;
  else {
  mu__boolexpr416 = ((mu_i4) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr416)) mu__boolexpr415 = FALSE ;
  else {
  mu__boolexpr415 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr415)) mu__boolexpr414 = FALSE ;
  else {
  mu__boolexpr414 = (mu_matchPat( mu_msgs[mu_construct6By1225( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat5Set.mu_content[mu_i4] )], mu_sPat6Set )) ; 
}
  if (!(mu__boolexpr414)) mu__boolexpr413 = FALSE ;
  else {
  mu__boolexpr413 = (!(mu_Spy_known[mu_construct6By1225( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat5Set.mu_content[mu_i4] )])) ; 
}
    return mu__boolexpr413;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 9696;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 10992 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr422;
bool mu__boolexpr423;
bool mu__boolexpr424;
bool mu__boolexpr425;
bool mu__boolexpr426;
bool mu__boolexpr427;
bool mu__boolexpr428;
bool mu__boolexpr429;
bool mu__boolexpr430;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr430 = FALSE ;
  else {
  mu__boolexpr430 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr430)) mu__boolexpr429 = FALSE ;
  else {
  mu__boolexpr429 = ((mu_i2) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr429)) mu__boolexpr428 = FALSE ;
  else {
  mu__boolexpr428 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr428)) mu__boolexpr427 = FALSE ;
  else {
  mu__boolexpr427 = ((mu_i3) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr427)) mu__boolexpr426 = FALSE ;
  else {
  mu__boolexpr426 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr426)) mu__boolexpr425 = FALSE ;
  else {
  mu__boolexpr425 = ((mu_i4) <= (mu_pat5Set.mu_length)) ; 
}
  if (!(mu__boolexpr425)) mu__boolexpr424 = FALSE ;
  else {
  mu__boolexpr424 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr424)) mu__boolexpr423 = FALSE ;
  else {
  mu__boolexpr423 = (mu_matchPat( mu_msgs[mu_construct6By1225( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat5Set.mu_content[mu_i4] )], mu_sPat6Set )) ; 
}
  if (!(mu__boolexpr423)) mu__boolexpr422 = FALSE ;
  else {
  mu__boolexpr422 = (!(mu_Spy_known[mu_construct6By1225( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat5Set.mu_content[mu_i4] )])) ; 
}
	      if (mu__boolexpr422) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 9696;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat6\n";
mu_concatMsgNo = mu_construct6By1225( mu_pat1Set.mu_content[mu_i1], mu_pat2Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat5Set.mu_content[mu_i4] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat6Set, mu_concatMsgNo )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase17 ********************/
class RuleBase17
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 6, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr431;
bool mu__boolexpr432;
bool mu__boolexpr433;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr433 = FALSE ;
  else {
  mu__boolexpr433 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr433)) mu__boolexpr432 = FALSE ;
  else {
  mu__boolexpr432 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr432)) mu__boolexpr431 = FALSE ;
  else {
bool mu__boolexpr434;
bool mu__boolexpr435;
bool mu__boolexpr436;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr436 = FALSE ;
  else {
  mu__boolexpr436 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr436)) mu__boolexpr435 = FALSE ;
  else {
  mu__boolexpr435 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr435)) mu__boolexpr434 = FALSE ;
  else {
  mu__boolexpr434 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr431 = (!(mu__boolexpr434)) ; 
}
    return mu__boolexpr431;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10992;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 10998 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr437;
bool mu__boolexpr438;
bool mu__boolexpr439;
  if (!((mu_i) <= (mu_pat6Set.mu_length))) mu__boolexpr439 = FALSE ;
  else {
  mu__boolexpr439 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr439)) mu__boolexpr438 = FALSE ;
  else {
  mu__boolexpr438 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr438)) mu__boolexpr437 = FALSE ;
  else {
bool mu__boolexpr440;
bool mu__boolexpr441;
bool mu__boolexpr442;
  if (!(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr442 = FALSE ;
  else {
  mu__boolexpr442 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr442)) mu__boolexpr441 = FALSE ;
  else {
  mu__boolexpr441 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr441)) mu__boolexpr440 = FALSE ;
  else {
  mu__boolexpr440 = (mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr437 = (!(mu__boolexpr440)) ; 
}
	      if (mu__boolexpr437) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10992;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",40);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",48);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat4("flagPat4",56);

cout << "rule deconcat6\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat2 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat2 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat2 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat3 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat3;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4]]) )
{
mu_Spy_known[mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4]] = mu_true;
mu_msgPat4 = mu_msgs[mu_pat6Set.mu_content[mu_i]].mu_concatPart[4];
mu_isPat5 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
{
if ( !(mu_exist( mu_pat5Set, mu_msgPat4 )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_msgPat4;
}
}
}
  };

};
/******************** RuleBase18 ********************/
class RuleBase18
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("sencrypt 5, j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr443;
bool mu__boolexpr444;
bool mu__boolexpr445;
bool mu__boolexpr446;
bool mu__boolexpr447;
bool mu__boolexpr448;
bool mu__boolexpr449;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr449 = FALSE ;
  else {
  mu__boolexpr449 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr449)) mu__boolexpr448 = FALSE ;
  else {
  mu__boolexpr448 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr448)) mu__boolexpr447 = FALSE ;
  else {
  mu__boolexpr447 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr447)) mu__boolexpr446 = FALSE ;
  else {
  mu__boolexpr446 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr446)) mu__boolexpr445 = FALSE ;
  else {
  mu__boolexpr445 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr445)) mu__boolexpr444 = FALSE ;
  else {
  mu__boolexpr444 = (mu_matchPat( mu_msgs[mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )], mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr444)) mu__boolexpr443 = FALSE ;
  else {
  mu__boolexpr443 = (!(mu_Spy_known[mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
    return mu__boolexpr443;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 10998;
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 11034 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr450;
bool mu__boolexpr451;
bool mu__boolexpr452;
bool mu__boolexpr453;
bool mu__boolexpr454;
bool mu__boolexpr455;
bool mu__boolexpr456;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr456 = FALSE ;
  else {
  mu__boolexpr456 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr456)) mu__boolexpr455 = FALSE ;
  else {
  mu__boolexpr455 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr455)) mu__boolexpr454 = FALSE ;
  else {
  mu__boolexpr454 = ((mu_j) <= (mu_pat4Set.mu_length)) ; 
}
  if (!(mu__boolexpr454)) mu__boolexpr453 = FALSE ;
  else {
  mu__boolexpr453 = ((mu_pat4Set.mu_content[mu_j]) != (0)) ; 
}
  if (!(mu__boolexpr453)) mu__boolexpr452 = FALSE ;
  else {
  mu__boolexpr452 = (mu_Spy_known[mu_pat4Set.mu_content[mu_j]]) ; 
}
  if (!(mu__boolexpr452)) mu__boolexpr451 = FALSE ;
  else {
  mu__boolexpr451 = (mu_matchPat( mu_msgs[mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )], mu_sPat5Set )) ; 
}
  if (!(mu__boolexpr451)) mu__boolexpr450 = FALSE ;
  else {
  mu__boolexpr450 = (!(mu_Spy_known[mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] )])) ; 
}
	      if (mu__boolexpr450) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 10998;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_j;
    mu_j.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_encMsgNo("encMsgNo",0);

cout << "rule sencrypt5\n";
if ( (mu_msgs[mu_pat4Set.mu_content[mu_j]].mu_k.mu_encType) == (mu_Symk) )
{
mu_encMsgNo = mu_construct5By34( mu_pat3Set.mu_content[mu_i], mu_pat4Set.mu_content[mu_j] );
if ( !(mu_exist( mu_pat5Set, mu_encMsgNo )) )
{
mu_pat5Set.mu_length = (mu_pat5Set.mu_length) + (1);
if (mu_encMsgNo.isundefined())
  mu_pat5Set.mu_content[mu_pat5Set.mu_length].undefine();
else
  mu_pat5Set.mu_content[mu_pat5Set.mu_length] = mu_encMsgNo;
}
if ( !(mu_Spy_known[mu_encMsgNo]) )
{
mu_Spy_known[mu_encMsgNo] = mu_true;
}
}
  };

};
/******************** RuleBase19 ********************/
class RuleBase19
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("sdecrypt 5, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr457;
bool mu__boolexpr458;
bool mu__boolexpr459;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr459 = FALSE ;
  else {
  mu__boolexpr459 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr459)) mu__boolexpr458 = FALSE ;
  else {
  mu__boolexpr458 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr458)) mu__boolexpr457 = FALSE ;
  else {
  mu__boolexpr457 = (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_sencMsg])) ; 
}
    return mu__boolexpr457;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11034;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 11040 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr460;
bool mu__boolexpr461;
bool mu__boolexpr462;
  if (!((mu_i) <= (mu_pat5Set.mu_length))) mu__boolexpr462 = FALSE ;
  else {
  mu__boolexpr462 = ((mu_pat5Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr462)) mu__boolexpr461 = FALSE ;
  else {
  mu__boolexpr461 = (mu_Spy_known[mu_pat5Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr461)) mu__boolexpr460 = FALSE ;
  else {
  mu__boolexpr460 = (!(mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_sencMsg])) ; 
}
	      if (mu__boolexpr460) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11034;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_Message mu_key_inv("key_inv",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",216);

/*** Variable declaration ***/
mu_1_indexType mu_keyNo("keyNo",224);

/*** Variable declaration ***/
mu_0_boolean mu_flag_pat3("flag_pat3",232);

cout << "rule sdecrypt5\n";
mu_key_inv = mu_inverseKey( mu_msgs[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_sencKey] );
mu_get_msgNo ( mu_key_inv, mu_keyNo );
bool mu__boolexpr463;
bool mu__boolexpr464;
  if (!((mu_key_inv.mu_k.mu_encType) == (mu_Symk))) mu__boolexpr464 = FALSE ;
  else {
bool mu__boolexpr465;
  if ((mu_key_inv.mu_k.mu_ag1) == (mu_Intruder)) mu__boolexpr465 = TRUE ;
  else {
  mu__boolexpr465 = ((mu_key_inv.mu_k.mu_ag2) == (mu_Intruder)) ; 
}
  mu__boolexpr464 = (mu__boolexpr465) ; 
}
  if (mu__boolexpr464) mu__boolexpr463 = TRUE ;
  else {
  mu__boolexpr463 = (mu_Spy_known[mu_keyNo]) ; 
}
if ( mu__boolexpr463 )
{
mu_Spy_known[mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_sencMsg] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat5Set.mu_content[mu_i]].mu_sencMsg;
mu_isPat3 ( mu_msgs[mu_msgPat3], mu_flag_pat3 );
if ( mu_flag_pat3 )
{
if ( !(mu_exist( mu_pat3Set, mu_msgPat3 )) )
{
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_msgPat3;
}
}
}
  };

};
/******************** RuleBase20 ********************/
class RuleBase20
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("enconcat 3, i4:%s, i3:%s, i2:%s, i1:%s", mu_i4.Name(), mu_i3.Name(), mu_i2.Name(), mu_i1.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr466;
bool mu__boolexpr467;
bool mu__boolexpr468;
bool mu__boolexpr469;
bool mu__boolexpr470;
bool mu__boolexpr471;
bool mu__boolexpr472;
bool mu__boolexpr473;
bool mu__boolexpr474;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr474 = FALSE ;
  else {
  mu__boolexpr474 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr474)) mu__boolexpr473 = FALSE ;
  else {
  mu__boolexpr473 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr473)) mu__boolexpr472 = FALSE ;
  else {
  mu__boolexpr472 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr472)) mu__boolexpr471 = FALSE ;
  else {
  mu__boolexpr471 = ((mu_i3) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr471)) mu__boolexpr470 = FALSE ;
  else {
  mu__boolexpr470 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr470)) mu__boolexpr469 = FALSE ;
  else {
  mu__boolexpr469 = ((mu_i4) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr469)) mu__boolexpr468 = FALSE ;
  else {
  mu__boolexpr468 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr468)) mu__boolexpr467 = FALSE ;
  else {
  mu__boolexpr467 = (mu_matchPat( mu_msgs[mu_construct3By1122( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat2Set.mu_content[mu_i4] )], mu_sPat3Set )) ; 
}
  if (!(mu__boolexpr467)) mu__boolexpr466 = FALSE ;
  else {
  mu__boolexpr466 = (!(mu_Spy_known[mu_construct3By1122( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat2Set.mu_content[mu_i4] )])) ; 
}
    return mu__boolexpr466;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 11040;
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 12336 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr475;
bool mu__boolexpr476;
bool mu__boolexpr477;
bool mu__boolexpr478;
bool mu__boolexpr479;
bool mu__boolexpr480;
bool mu__boolexpr481;
bool mu__boolexpr482;
bool mu__boolexpr483;
  if (!((mu_i1) <= (mu_pat1Set.mu_length))) mu__boolexpr483 = FALSE ;
  else {
  mu__boolexpr483 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i1]]) ; 
}
  if (!(mu__boolexpr483)) mu__boolexpr482 = FALSE ;
  else {
  mu__boolexpr482 = ((mu_i2) <= (mu_pat1Set.mu_length)) ; 
}
  if (!(mu__boolexpr482)) mu__boolexpr481 = FALSE ;
  else {
  mu__boolexpr481 = (mu_Spy_known[mu_pat1Set.mu_content[mu_i2]]) ; 
}
  if (!(mu__boolexpr481)) mu__boolexpr480 = FALSE ;
  else {
  mu__boolexpr480 = ((mu_i3) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr480)) mu__boolexpr479 = FALSE ;
  else {
  mu__boolexpr479 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i3]]) ; 
}
  if (!(mu__boolexpr479)) mu__boolexpr478 = FALSE ;
  else {
  mu__boolexpr478 = ((mu_i4) <= (mu_pat2Set.mu_length)) ; 
}
  if (!(mu__boolexpr478)) mu__boolexpr477 = FALSE ;
  else {
  mu__boolexpr477 = (mu_Spy_known[mu_pat2Set.mu_content[mu_i4]]) ; 
}
  if (!(mu__boolexpr477)) mu__boolexpr476 = FALSE ;
  else {
  mu__boolexpr476 = (mu_matchPat( mu_msgs[mu_construct3By1122( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat2Set.mu_content[mu_i4] )], mu_sPat3Set )) ; 
}
  if (!(mu__boolexpr476)) mu__boolexpr475 = FALSE ;
  else {
  mu__boolexpr475 = (!(mu_Spy_known[mu_construct3By1122( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat2Set.mu_content[mu_i4] )])) ; 
}
	      if (mu__boolexpr475) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 11040;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i4;
    mu_i4.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i3;
    mu_i3.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i2;
    mu_i2.value((r % 6) + 0);
    r = r / 6;
    static mu_1_msgLen mu_i1;
    mu_i1.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_concatMsgNo("concatMsgNo",0);

cout << "rule enconcat3\n";
mu_concatMsgNo = mu_construct3By1122( mu_pat1Set.mu_content[mu_i1], mu_pat1Set.mu_content[mu_i2], mu_pat2Set.mu_content[mu_i3], mu_pat2Set.mu_content[mu_i4] );
mu_Spy_known[mu_concatMsgNo] = mu_true;
if ( !(mu_exist( mu_pat3Set, mu_concatMsgNo )) )
{
mu_pat3Set.mu_length = (mu_pat3Set.mu_length) + (1);
if (mu_concatMsgNo.isundefined())
  mu_pat3Set.mu_content[mu_pat3Set.mu_length].undefine();
else
  mu_pat3Set.mu_content[mu_pat3Set.mu_length] = mu_concatMsgNo;
}
  };

};
/******************** RuleBase21 ********************/
class RuleBase21
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("deconcat 3, i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr484;
bool mu__boolexpr485;
bool mu__boolexpr486;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr486 = FALSE ;
  else {
  mu__boolexpr486 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr486)) mu__boolexpr485 = FALSE ;
  else {
  mu__boolexpr485 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr485)) mu__boolexpr484 = FALSE ;
  else {
bool mu__boolexpr487;
bool mu__boolexpr488;
bool mu__boolexpr489;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr489 = FALSE ;
  else {
  mu__boolexpr489 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr489)) mu__boolexpr488 = FALSE ;
  else {
  mu__boolexpr488 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr488)) mu__boolexpr487 = FALSE ;
  else {
  mu__boolexpr487 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr484 = (!(mu__boolexpr487)) ; 
}
    return mu__boolexpr484;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12336;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 12342 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr490;
bool mu__boolexpr491;
bool mu__boolexpr492;
  if (!((mu_i) <= (mu_pat3Set.mu_length))) mu__boolexpr492 = FALSE ;
  else {
  mu__boolexpr492 = ((mu_pat3Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr492)) mu__boolexpr491 = FALSE ;
  else {
  mu__boolexpr491 = (mu_Spy_known[mu_pat3Set.mu_content[mu_i]]) ; 
}
  if (!(mu__boolexpr491)) mu__boolexpr490 = FALSE ;
  else {
bool mu__boolexpr493;
bool mu__boolexpr494;
bool mu__boolexpr495;
  if (!(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]])) mu__boolexpr495 = FALSE ;
  else {
  mu__boolexpr495 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]]) ; 
}
  if (!(mu__boolexpr495)) mu__boolexpr494 = FALSE ;
  else {
  mu__boolexpr494 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[3]]) ; 
}
  if (!(mu__boolexpr494)) mu__boolexpr493 = FALSE ;
  else {
  mu__boolexpr493 = (mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[4]]) ; 
}
  mu__boolexpr490 = (!(mu__boolexpr493)) ; 
}
	      if (mu__boolexpr490) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12336;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
/*** Variable declaration ***/
mu_1_indexType mu_msgPat1("msgPat1",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat2("msgPat2",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat3("msgPat3",16);

/*** Variable declaration ***/
mu_1_indexType mu_msgPat4("msgPat4",24);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat1("flagPat1",32);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat2("flagPat2",40);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat3("flagPat3",48);

/*** Variable declaration ***/
mu_0_boolean mu_flagPat4("flagPat4",56);

cout << "rule deconcat3\n";
if ( !(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]]) )
{
mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1]] = mu_true;
mu_msgPat1 = mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[1];
mu_isPat1 ( mu_msgs[mu_msgPat1], mu_flagPat1 );
if ( mu_flagPat1 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat1 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat1.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat1;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]]) )
{
mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2]] = mu_true;
mu_msgPat2 = mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[2];
mu_isPat1 ( mu_msgs[mu_msgPat2], mu_flagPat2 );
if ( mu_flagPat2 )
{
if ( !(mu_exist( mu_pat1Set, mu_msgPat2 )) )
{
mu_pat1Set.mu_length = (mu_pat1Set.mu_length) + (1);
if (mu_msgPat2.isundefined())
  mu_pat1Set.mu_content[mu_pat1Set.mu_length].undefine();
else
  mu_pat1Set.mu_content[mu_pat1Set.mu_length] = mu_msgPat2;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[3]]) )
{
mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[3]] = mu_true;
mu_msgPat3 = mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[3];
mu_isPat2 ( mu_msgs[mu_msgPat3], mu_flagPat3 );
if ( mu_flagPat3 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat3 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat3.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat3;
}
}
}
if ( !(mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[4]]) )
{
mu_Spy_known[mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[4]] = mu_true;
mu_msgPat4 = mu_msgs[mu_pat3Set.mu_content[mu_i]].mu_concatPart[4];
mu_isPat2 ( mu_msgs[mu_msgPat4], mu_flagPat4 );
if ( mu_flagPat4 )
{
if ( !(mu_exist( mu_pat2Set, mu_msgPat4 )) )
{
mu_pat2Set.mu_length = (mu_pat2Set.mu_length) + (1);
if (mu_msgPat4.isundefined())
  mu_pat2Set.mu_content[mu_pat2Set.mu_length].undefine();
else
  mu_pat2Set.mu_content[mu_pat2Set.mu_length] = mu_msgPat4;
}
}
}
  };

};
/******************** RuleBase22 ********************/
class RuleBase22
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[4], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr496;
bool mu__boolexpr497;
bool mu__boolexpr498;
bool mu__boolexpr499;
  if (!((mu_roleA[mu_j].mu_st) == (mu_A2))) mu__boolexpr499 = FALSE ;
  else {
  mu__boolexpr499 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr499)) mu__boolexpr498 = FALSE ;
  else {
  mu__boolexpr498 = ((mu_i) <= (mu_pat16Set.mu_length)) ; 
}
  if (!(mu__boolexpr498)) mu__boolexpr497 = FALSE ;
  else {
  mu__boolexpr497 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr497)) mu__boolexpr496 = FALSE ;
  else {
  mu__boolexpr496 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr496;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12342;
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 12348 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr500;
bool mu__boolexpr501;
bool mu__boolexpr502;
bool mu__boolexpr503;
  if (!((mu_roleA[mu_j].mu_st) == (mu_A2))) mu__boolexpr503 = FALSE ;
  else {
  mu__boolexpr503 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr503)) mu__boolexpr502 = FALSE ;
  else {
  mu__boolexpr502 = ((mu_i) <= (mu_pat16Set.mu_length)) ; 
}
  if (!(mu__boolexpr502)) mu__boolexpr501 = FALSE ;
  else {
  mu__boolexpr501 = ((mu_pat16Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr501)) mu__boolexpr500 = FALSE ;
  else {
  mu__boolexpr500 = (mu_Spy_known[mu_pat16Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr500) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12342;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat16Set.mu_content[mu_i]]) )
{
mu_ch[4].clear();
mu_ch[4].mu_msg = mu_msgs[mu_pat16Set.mu_content[mu_i]];
mu_ch[4].mu_sender = mu_Intruder;
mu_ch[4].mu_receiver = mu_roleA[mu_j].mu_A;
mu_ch[4].mu_empty = mu_false;
mu_emit[mu_pat16Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[4].\n";
}
  };

};
/******************** RuleBase23 ********************/
class RuleBase23
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[2], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr504;
bool mu__boolexpr505;
bool mu__boolexpr506;
bool mu__boolexpr507;
  if (!((mu_roleS[mu_j].mu_st) == (mu_S1))) mu__boolexpr507 = FALSE ;
  else {
  mu__boolexpr507 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr507)) mu__boolexpr506 = FALSE ;
  else {
  mu__boolexpr506 = ((mu_i) <= (mu_pat11Set.mu_length)) ; 
}
  if (!(mu__boolexpr506)) mu__boolexpr505 = FALSE ;
  else {
  mu__boolexpr505 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr505)) mu__boolexpr504 = FALSE ;
  else {
  mu__boolexpr504 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr504;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12348;
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 12354 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr508;
bool mu__boolexpr509;
bool mu__boolexpr510;
bool mu__boolexpr511;
  if (!((mu_roleS[mu_j].mu_st) == (mu_S1))) mu__boolexpr511 = FALSE ;
  else {
  mu__boolexpr511 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr511)) mu__boolexpr510 = FALSE ;
  else {
  mu__boolexpr510 = ((mu_i) <= (mu_pat11Set.mu_length)) ; 
}
  if (!(mu__boolexpr510)) mu__boolexpr509 = FALSE ;
  else {
  mu__boolexpr509 = ((mu_pat11Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr509)) mu__boolexpr508 = FALSE ;
  else {
  mu__boolexpr508 = (mu_Spy_known[mu_pat11Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr508) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12348;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleSNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat11Set.mu_content[mu_i]]) )
{
mu_ch[2].clear();
mu_ch[2].mu_msg = mu_msgs[mu_pat11Set.mu_content[mu_i]];
mu_ch[2].mu_sender = mu_Intruder;
mu_ch[2].mu_receiver = mu_roleS[mu_j].mu_S;
mu_ch[2].mu_empty = mu_false;
mu_emit[mu_pat11Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[2].\n";
}
  };

};
/******************** RuleBase24 ********************/
class RuleBase24
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[3], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr512;
bool mu__boolexpr513;
bool mu__boolexpr514;
bool mu__boolexpr515;
  if (!((mu_roleB[mu_j].mu_st) == (mu_B2))) mu__boolexpr515 = FALSE ;
  else {
  mu__boolexpr515 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr515)) mu__boolexpr514 = FALSE ;
  else {
  mu__boolexpr514 = ((mu_i) <= (mu_pat12Set.mu_length)) ; 
}
  if (!(mu__boolexpr514)) mu__boolexpr513 = FALSE ;
  else {
  mu__boolexpr513 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr513)) mu__boolexpr512 = FALSE ;
  else {
  mu__boolexpr512 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr512;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12354;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 12360 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr516;
bool mu__boolexpr517;
bool mu__boolexpr518;
bool mu__boolexpr519;
  if (!((mu_roleB[mu_j].mu_st) == (mu_B2))) mu__boolexpr519 = FALSE ;
  else {
  mu__boolexpr519 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr519)) mu__boolexpr518 = FALSE ;
  else {
  mu__boolexpr518 = ((mu_i) <= (mu_pat12Set.mu_length)) ; 
}
  if (!(mu__boolexpr518)) mu__boolexpr517 = FALSE ;
  else {
  mu__boolexpr517 = ((mu_pat12Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr517)) mu__boolexpr516 = FALSE ;
  else {
  mu__boolexpr516 = (mu_Spy_known[mu_pat12Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr516) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12354;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat12Set.mu_content[mu_i]]) )
{
mu_ch[3].clear();
mu_ch[3].mu_msg = mu_msgs[mu_pat12Set.mu_content[mu_i]];
mu_ch[3].mu_sender = mu_Intruder;
mu_ch[3].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[3].mu_empty = mu_false;
mu_emit[mu_pat12Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[3].\n";
}
  };

};
/******************** RuleBase25 ********************/
class RuleBase25
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    return tsprintf("intruderEmitMsgIntoCh[1], j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
bool mu__boolexpr520;
bool mu__boolexpr521;
bool mu__boolexpr522;
bool mu__boolexpr523;
  if (!((mu_roleB[mu_j].mu_st) == (mu_B1))) mu__boolexpr523 = FALSE ;
  else {
  mu__boolexpr523 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr523)) mu__boolexpr522 = FALSE ;
  else {
  mu__boolexpr522 = ((mu_i) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr522)) mu__boolexpr521 = FALSE ;
  else {
  mu__boolexpr521 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr521)) mu__boolexpr520 = FALSE ;
  else {
  mu__boolexpr520 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
    return mu__boolexpr520;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12360;
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    while (what_rule < 12366 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr524;
bool mu__boolexpr525;
bool mu__boolexpr526;
bool mu__boolexpr527;
  if (!((mu_roleB[mu_j].mu_st) == (mu_B1))) mu__boolexpr527 = FALSE ;
  else {
  mu__boolexpr527 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr527)) mu__boolexpr526 = FALSE ;
  else {
  mu__boolexpr526 = ((mu_i) <= (mu_pat6Set.mu_length)) ; 
}
  if (!(mu__boolexpr526)) mu__boolexpr525 = FALSE ;
  else {
  mu__boolexpr525 = ((mu_pat6Set.mu_content[mu_i]) != (0)) ; 
}
  if (!(mu__boolexpr525)) mu__boolexpr524 = FALSE ;
  else {
  mu__boolexpr524 = (mu_Spy_known[mu_pat6Set.mu_content[mu_i]]) ; 
}
	      if (mu__boolexpr524) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12360;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    mu_i.value((r % 6) + 0);
    r = r / 6;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_j;
    mu_j.value((r % 1) + 1);
    r = r / 1;
    static mu_1_msgLen mu_i;
    mu_i.value((r % 6) + 0);
    r = r / 6;
if ( !(mu_emit[mu_pat6Set.mu_content[mu_i]]) )
{
mu_ch[1].clear();
mu_ch[1].mu_msg = mu_msgs[mu_pat6Set.mu_content[mu_i]];
mu_ch[1].mu_sender = mu_Intruder;
mu_ch[1].mu_receiver = mu_roleB[mu_j].mu_B;
mu_ch[1].mu_empty = mu_false;
mu_emit[mu_pat6Set.mu_content[mu_i]] = mu_true;
cout << "intruder emit msg into ch[1].\n";
}
  };

};
/******************** RuleBase26 ********************/
class RuleBase26
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[4]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr528;
  if (!((mu_ch[4].mu_empty) == (mu_false))) mu__boolexpr528 = FALSE ;
  else {
  mu__boolexpr528 = ((mu_ch[4].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr528;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12366;
    while (what_rule < 12367 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr529;
  if (!((mu_ch[4].mu_empty) == (mu_false))) mu__boolexpr529 = FALSE ;
  else {
  mu__boolexpr529 = ((mu_ch[4].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr529) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12366;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat16("flag_pat16",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[4].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat16 ( mu_msg, mu_flag_pat16 );
if ( mu_flag_pat16 )
{
if ( !(mu_exist( mu_pat16Set, mu_msgNo )) )
{
mu_pat16Set.mu_length = (mu_pat16Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat16Set.mu_content[mu_pat16Set.mu_length].undefine();
else
  mu_pat16Set.mu_content[mu_pat16Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[4].\n";
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
}
  };

};
/******************** RuleBase27 ********************/
class RuleBase27
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[2]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr530;
  if (!((mu_ch[2].mu_empty) == (mu_false))) mu__boolexpr530 = FALSE ;
  else {
  mu__boolexpr530 = ((mu_ch[2].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr530;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12367;
    while (what_rule < 12368 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr531;
  if (!((mu_ch[2].mu_empty) == (mu_false))) mu__boolexpr531 = FALSE ;
  else {
  mu__boolexpr531 = ((mu_ch[2].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr531) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12367;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat11("flag_pat11",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[2].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat11 ( mu_msg, mu_flag_pat11 );
if ( mu_flag_pat11 )
{
if ( !(mu_exist( mu_pat11Set, mu_msgNo )) )
{
mu_pat11Set.mu_length = (mu_pat11Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat11Set.mu_content[mu_pat11Set.mu_length].undefine();
else
  mu_pat11Set.mu_content[mu_pat11Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[2].\n";
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
}
  };

};
/******************** RuleBase28 ********************/
class RuleBase28
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[3]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr532;
  if (!((mu_ch[3].mu_empty) == (mu_false))) mu__boolexpr532 = FALSE ;
  else {
  mu__boolexpr532 = ((mu_ch[3].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr532;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12368;
    while (what_rule < 12369 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr533;
  if (!((mu_ch[3].mu_empty) == (mu_false))) mu__boolexpr533 = FALSE ;
  else {
  mu__boolexpr533 = ((mu_ch[3].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr533) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12368;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat12("flag_pat12",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[3].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat12 ( mu_msg, mu_flag_pat12 );
if ( mu_flag_pat12 )
{
if ( !(mu_exist( mu_pat12Set, mu_msgNo )) )
{
mu_pat12Set.mu_length = (mu_pat12Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat12Set.mu_content[mu_pat12Set.mu_length].undefine();
else
  mu_pat12Set.mu_content[mu_pat12Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[3].\n";
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
}
  };

};
/******************** RuleBase29 ********************/
class RuleBase29
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    return tsprintf("intruderGetMsgFromCh[1]");
  }
  bool Condition(unsigned r)
  {
bool mu__boolexpr534;
  if (!((mu_ch[1].mu_empty) == (mu_false))) mu__boolexpr534 = FALSE ;
  else {
  mu__boolexpr534 = ((mu_ch[1].mu_sender) != (mu_Intruder)) ; 
}
    return mu__boolexpr534;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12369;
    while (what_rule < 12370 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr535;
  if (!((mu_ch[1].mu_empty) == (mu_false))) mu__boolexpr535 = FALSE ;
  else {
  mu__boolexpr535 = ((mu_ch[1].mu_sender) != (mu_Intruder)) ; 
}
	      if (mu__boolexpr535) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12369;
    }
  }

  void Code(unsigned r)
  {
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat6("flag_pat6",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",8);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",16);

mu_msg = mu_ch[1].mu_msg;
mu_get_msgNo ( mu_msg, mu_msgNo );
if (mu_msgNo.isundefined())
  mu_msg.mu_tmpPart.undefine();
else
  mu_msg.mu_tmpPart = mu_msgNo;
mu_isPat6 ( mu_msg, mu_flag_pat6 );
if ( mu_flag_pat6 )
{
if ( !(mu_exist( mu_pat6Set, mu_msgNo )) )
{
mu_pat6Set.mu_length = (mu_pat6Set.mu_length) + (1);
if (mu_msgNo.isundefined())
  mu_pat6Set.mu_content[mu_pat6Set.mu_length].undefine();
else
  mu_pat6Set.mu_content[mu_pat6Set.mu_length] = mu_msgNo;
mu_Spy_known[mu_msgNo] = mu_true;
}
cout << "intruder get msg from ch[1].\n";
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
}
  };

};
/******************** RuleBase30 ********************/
class RuleBase30
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB4 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr536;
bool mu__boolexpr537;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B4))) mu__boolexpr537 = FALSE ;
  else {
  mu__boolexpr537 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr537)) mu__boolexpr536 = FALSE ;
  else {
  mu__boolexpr536 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr536;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12370;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 12371 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr538;
bool mu__boolexpr539;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B4))) mu__boolexpr539 = FALSE ;
  else {
  mu__boolexpr539 = ((mu_ch[4].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr539)) mu__boolexpr538 = FALSE ;
  else {
  mu__boolexpr538 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr538) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12370;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons16 ( mu_roleB[mu_i].mu_N, mu_roleB[mu_i].mu_m2, mu_msg, mu_msgNo );
mu_ch[4].mu_empty = mu_false;
mu_ch[4].mu_msg = mu_msg;
mu_ch[4].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[4].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B1;
cout << "roleB[i] in st4\n";
mu_roleB[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase31 ********************/
class RuleBase31
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB3 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr540;
bool mu__boolexpr541;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr541 = FALSE ;
  else {
  mu__boolexpr541 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr541)) mu__boolexpr540 = FALSE ;
  else {
  mu__boolexpr540 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr540;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12371;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 12372 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr542;
bool mu__boolexpr543;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B3))) mu__boolexpr543 = FALSE ;
  else {
  mu__boolexpr543 = ((mu_ch[3].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr543)) mu__boolexpr542 = FALSE ;
  else {
  mu__boolexpr542 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr542) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12371;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat15("flag_pat15",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[3].mu_msg;
mu_isPat15 ( mu_msg, mu_flag_pat15 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat15 )
{
mu_destruct15 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_locN, mu_roleB[mu_i].mu_locm2, mu_roleB[mu_i].mu_locNb, mu_roleB[mu_i].mu_locKab, mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_locS );
bool mu__boolexpr544;
bool mu__boolexpr545;
bool mu__boolexpr546;
bool mu__boolexpr547;
bool mu__boolexpr548;
  if (!(mu_matchNonce( mu_roleB[mu_i].mu_locN, mu_roleB[mu_i].mu_N ))) mu__boolexpr548 = FALSE ;
  else {
  mu__boolexpr548 = (mu_matchTmp( mu_roleB[mu_i].mu_locm2, mu_roleB[mu_i].mu_m2 )) ; 
}
  if (!(mu__boolexpr548)) mu__boolexpr547 = FALSE ;
  else {
  mu__boolexpr547 = (mu_matchNonce( mu_roleB[mu_i].mu_locNb, mu_roleB[mu_i].mu_Nb )) ; 
}
  if (!(mu__boolexpr547)) mu__boolexpr546 = FALSE ;
  else {
  mu__boolexpr546 = (mu_matchNonce( mu_roleB[mu_i].mu_locKab, mu_roleB[mu_i].mu_Kab )) ; 
}
  if (!(mu__boolexpr546)) mu__boolexpr545 = FALSE ;
  else {
  mu__boolexpr545 = (mu_matchAgent( mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_B )) ; 
}
  if (!(mu__boolexpr545)) mu__boolexpr544 = FALSE ;
  else {
  mu__boolexpr544 = (mu_matchAgent( mu_roleB[mu_i].mu_locS, mu_roleB[mu_i].mu_S )) ; 
}
if ( mu__boolexpr544 )
{
mu_ch[3].mu_empty = mu_true;
mu_ch[3].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B4;
}
}
cout << "roleB[i] in st3\n";
  };

};
/******************** RuleBase32 ********************/
class RuleBase32
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr549;
bool mu__boolexpr550;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr550 = FALSE ;
  else {
  mu__boolexpr550 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr550)) mu__boolexpr549 = FALSE ;
  else {
  mu__boolexpr549 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr549;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12372;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 12373 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr551;
bool mu__boolexpr552;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B2))) mu__boolexpr552 = FALSE ;
  else {
  mu__boolexpr552 = ((mu_ch[2].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr552)) mu__boolexpr551 = FALSE ;
  else {
  mu__boolexpr551 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr551) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12372;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons11 ( mu_roleB[mu_i].mu_N, mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_B, mu_roleB[mu_i].mu_m1, mu_roleB[mu_i].mu_Nb, mu_roleB[mu_i].mu_B, mu_roleB[mu_i].mu_S, mu_msg, mu_msgNo );
mu_ch[2].mu_empty = mu_false;
mu_ch[2].mu_msg = mu_msg;
mu_ch[2].mu_sender = mu_roleB[mu_i].mu_B;
mu_ch[2].mu_receiver = mu_Intruder;
mu_roleB[mu_i].mu_st = mu_B3;
cout << "roleB[i] in st2\n";
  };

};
/******************** RuleBase33 ********************/
class RuleBase33
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleB1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr553;
bool mu__boolexpr554;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr554 = FALSE ;
  else {
  mu__boolexpr554 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr554)) mu__boolexpr553 = FALSE ;
  else {
  mu__boolexpr553 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
    return mu__boolexpr553;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12373;
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 12374 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr555;
bool mu__boolexpr556;
  if (!((mu_roleB[mu_i].mu_st) == (mu_B1))) mu__boolexpr556 = FALSE ;
  else {
  mu__boolexpr556 = ((mu_ch[1].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr556)) mu__boolexpr555 = FALSE ;
  else {
  mu__boolexpr555 = (!(mu_roleB[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr555) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12373;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleBNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat13("flag_pat13",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[1].mu_msg;
mu_isPat13 ( mu_msg, mu_flag_pat13 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleB[mu_i].mu_B;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_B_known[mu_msgNo] = mu_true;
if ( mu_flag_pat13 )
{
mu_destruct13 ( mu_agmsg, mu_msg, mu_roleB[mu_i].mu_locN, mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_locm1 );
bool mu__boolexpr557;
bool mu__boolexpr558;
bool mu__boolexpr559;
  if (!(mu_matchNonce( mu_roleB[mu_i].mu_locN, mu_roleB[mu_i].mu_N ))) mu__boolexpr559 = FALSE ;
  else {
  mu__boolexpr559 = (mu_matchAgent( mu_roleB[mu_i].mu_locA, mu_roleB[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr559)) mu__boolexpr558 = FALSE ;
  else {
  mu__boolexpr558 = (mu_matchAgent( mu_roleB[mu_i].mu_locB, mu_roleB[mu_i].mu_B )) ; 
}
  if (!(mu__boolexpr558)) mu__boolexpr557 = FALSE ;
  else {
  mu__boolexpr557 = (mu_matchTmp( mu_roleB[mu_i].mu_locm1, mu_roleB[mu_i].mu_m1 )) ; 
}
if ( mu__boolexpr557 )
{
mu_ch[1].mu_empty = mu_true;
mu_ch[1].mu_msg.clear();
mu_roleB[mu_i].mu_st = mu_B2;
}
}
cout << "roleB[i] in st1\n";
  };

};
/******************** RuleBase34 ********************/
class RuleBase34
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleS2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr560;
bool mu__boolexpr561;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S2))) mu__boolexpr561 = FALSE ;
  else {
  mu__boolexpr561 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr561)) mu__boolexpr560 = FALSE ;
  else {
  mu__boolexpr560 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr560;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12374;
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 12375 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr562;
bool mu__boolexpr563;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S2))) mu__boolexpr563 = FALSE ;
  else {
  mu__boolexpr563 = ((mu_ch[3].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr563)) mu__boolexpr562 = FALSE ;
  else {
  mu__boolexpr562 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr562) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12374;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons12 ( mu_roleS[mu_i].mu_N, mu_roleS[mu_i].mu_Na, mu_roleS[mu_i].mu_Kab, mu_roleS[mu_i].mu_A, mu_roleS[mu_i].mu_S, mu_roleS[mu_i].mu_Nb, mu_roleS[mu_i].mu_B, mu_msg, mu_msgNo );
mu_ch[3].mu_empty = mu_false;
mu_ch[3].mu_msg = mu_msg;
mu_ch[3].mu_sender = mu_roleS[mu_i].mu_S;
mu_ch[3].mu_receiver = mu_Intruder;
mu_roleS[mu_i].mu_st = mu_S1;
cout << "roleS[i] in st2\n";
mu_roleS[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase35 ********************/
class RuleBase35
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleS1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr564;
bool mu__boolexpr565;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S1))) mu__boolexpr565 = FALSE ;
  else {
  mu__boolexpr565 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr565)) mu__boolexpr564 = FALSE ;
  else {
  mu__boolexpr564 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
    return mu__boolexpr564;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12375;
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 12376 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr566;
bool mu__boolexpr567;
  if (!((mu_roleS[mu_i].mu_st) == (mu_S1))) mu__boolexpr567 = FALSE ;
  else {
  mu__boolexpr567 = ((mu_ch[2].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr567)) mu__boolexpr566 = FALSE ;
  else {
  mu__boolexpr566 = (!(mu_roleS[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr566) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12375;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleSNums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat11("flag_pat11",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[2].mu_msg;
mu_isPat11 ( mu_msg, mu_flag_pat11 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleS[mu_i].mu_S;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_S_known[mu_msgNo] = mu_true;
if ( mu_flag_pat11 )
{
mu_destruct11 ( mu_agmsg, mu_msg, mu_roleS[mu_i].mu_locN, mu_roleS[mu_i].mu_locA, mu_roleS[mu_i].mu_locB, mu_roleS[mu_i].mu_locm1, mu_roleS[mu_i].mu_locNb, mu_roleS[mu_i].mu_locB, mu_roleS[mu_i].mu_locS );
bool mu__boolexpr568;
bool mu__boolexpr569;
bool mu__boolexpr570;
bool mu__boolexpr571;
bool mu__boolexpr572;
bool mu__boolexpr573;
  if (!(mu_matchNonce( mu_roleS[mu_i].mu_locN, mu_roleS[mu_i].mu_N ))) mu__boolexpr573 = FALSE ;
  else {
  mu__boolexpr573 = (mu_matchAgent( mu_roleS[mu_i].mu_locA, mu_roleS[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr573)) mu__boolexpr572 = FALSE ;
  else {
  mu__boolexpr572 = (mu_matchAgent( mu_roleS[mu_i].mu_locB, mu_roleS[mu_i].mu_B )) ; 
}
  if (!(mu__boolexpr572)) mu__boolexpr571 = FALSE ;
  else {
  mu__boolexpr571 = (mu_matchTmp( mu_roleS[mu_i].mu_locm1, mu_roleS[mu_i].mu_m1 )) ; 
}
  if (!(mu__boolexpr571)) mu__boolexpr570 = FALSE ;
  else {
  mu__boolexpr570 = (mu_matchNonce( mu_roleS[mu_i].mu_locNb, mu_roleS[mu_i].mu_Nb )) ; 
}
  if (!(mu__boolexpr570)) mu__boolexpr569 = FALSE ;
  else {
  mu__boolexpr569 = (mu_matchAgent( mu_roleS[mu_i].mu_locB, mu_roleS[mu_i].mu_B )) ; 
}
  if (!(mu__boolexpr569)) mu__boolexpr568 = FALSE ;
  else {
  mu__boolexpr568 = (mu_matchAgent( mu_roleS[mu_i].mu_locS, mu_roleS[mu_i].mu_S )) ; 
}
if ( mu__boolexpr568 )
{
mu_ch[2].mu_empty = mu_true;
mu_ch[2].mu_msg.clear();
mu_roleS[mu_i].mu_st = mu_S2;
}
}
cout << "roleS[i] in st1\n";
  };

};
/******************** RuleBase36 ********************/
class RuleBase36
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA2 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr574;
bool mu__boolexpr575;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr575 = FALSE ;
  else {
  mu__boolexpr575 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr575)) mu__boolexpr574 = FALSE ;
  else {
  mu__boolexpr574 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr574;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12376;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 12377 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr576;
bool mu__boolexpr577;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A2))) mu__boolexpr577 = FALSE ;
  else {
  mu__boolexpr577 = ((mu_ch[4].mu_empty) == (mu_false)) ; 
}
  if (!(mu__boolexpr577)) mu__boolexpr576 = FALSE ;
  else {
  mu__boolexpr576 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr576) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12376;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_0_boolean mu_flag_pat9("flag_pat9",0);

/*** Variable declaration ***/
mu_1_Message mu_msg("msg",8);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",224);

/*** Variable declaration ***/
mu_1_Message mu_agmsg("agmsg",232);

mu_msg.clear();
mu_msg = mu_ch[4].mu_msg;
mu_isPat9 ( mu_msg, mu_flag_pat9 );
mu_agmsg.mu_msgType = mu_agent;
mu_agmsg.mu_ag = mu_roleA[mu_i].mu_A;
mu_get_msgNo ( mu_agmsg, mu_msgNo );
mu_A_known[mu_msgNo] = mu_true;
if ( mu_flag_pat9 )
{
mu_destruct9 ( mu_agmsg, mu_msg, mu_roleA[mu_i].mu_locN, mu_roleA[mu_i].mu_locNa, mu_roleA[mu_i].mu_locKab, mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_locS );
bool mu__boolexpr578;
bool mu__boolexpr579;
bool mu__boolexpr580;
bool mu__boolexpr581;
  if (!(mu_matchNonce( mu_roleA[mu_i].mu_locN, mu_roleA[mu_i].mu_N ))) mu__boolexpr581 = FALSE ;
  else {
  mu__boolexpr581 = (mu_matchNonce( mu_roleA[mu_i].mu_locNa, mu_roleA[mu_i].mu_Na )) ; 
}
  if (!(mu__boolexpr581)) mu__boolexpr580 = FALSE ;
  else {
  mu__boolexpr580 = (mu_matchNonce( mu_roleA[mu_i].mu_locKab, mu_roleA[mu_i].mu_Kab )) ; 
}
  if (!(mu__boolexpr580)) mu__boolexpr579 = FALSE ;
  else {
  mu__boolexpr579 = (mu_matchAgent( mu_roleA[mu_i].mu_locA, mu_roleA[mu_i].mu_A )) ; 
}
  if (!(mu__boolexpr579)) mu__boolexpr578 = FALSE ;
  else {
  mu__boolexpr578 = (mu_matchAgent( mu_roleA[mu_i].mu_locS, mu_roleA[mu_i].mu_S )) ; 
}
if ( mu__boolexpr578 )
{
mu_ch[4].mu_empty = mu_true;
mu_ch[4].mu_msg.clear();
mu_roleA[mu_i].mu_st = mu_A1;
}
}
cout << "roleA[i] in st2\n";
mu_roleA[mu_i].mu_commit = mu_true;
  };

};
/******************** RuleBase37 ********************/
class RuleBase37
{
public:
  int Priority()
  {
    return 0;
  }
  char * Name(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf(" roleA1 , i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr582;
bool mu__boolexpr583;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr583 = FALSE ;
  else {
  mu__boolexpr583 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr583)) mu__boolexpr582 = FALSE ;
  else {
  mu__boolexpr582 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
    return mu__boolexpr582;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 12377;
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 12378 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr584;
bool mu__boolexpr585;
  if (!((mu_roleA[mu_i].mu_st) == (mu_A1))) mu__boolexpr585 = FALSE ;
  else {
  mu__boolexpr585 = ((mu_ch[1].mu_empty) == (mu_true)) ; 
}
  if (!(mu__boolexpr585)) mu__boolexpr584 = FALSE ;
  else {
  mu__boolexpr584 = (!(mu_roleA[mu_i].mu_commit)) ; 
}
	      if (mu__boolexpr584) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 12377;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_roleANums mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_msg("msg",0);

/*** Variable declaration ***/
mu_1_indexType mu_msgNo("msgNo",216);

mu_msg.clear();
mu_cons6 ( mu_roleA[mu_i].mu_N, mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_B, mu_roleA[mu_i].mu_Na, mu_roleA[mu_i].mu_A, mu_roleA[mu_i].mu_S, mu_msg, mu_msgNo );
mu_ch[1].mu_empty = mu_false;
mu_ch[1].mu_msg = mu_msg;
mu_ch[1].mu_sender = mu_roleA[mu_i].mu_A;
mu_ch[1].mu_receiver = mu_Intruder;
mu_roleA[mu_i].mu_st = mu_A2;
cout << "roleA[i] in st1\n";
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
  RuleBase10 R10;
  RuleBase11 R11;
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
  RuleBase16 R16;
  RuleBase17 R17;
  RuleBase18 R18;
  RuleBase19 R19;
  RuleBase20 R20;
  RuleBase21 R21;
  RuleBase22 R22;
  RuleBase23 R23;
  RuleBase24 R24;
  RuleBase25 R25;
  RuleBase26 R26;
  RuleBase27 R27;
  RuleBase28 R28;
  RuleBase29 R29;
  RuleBase30 R30;
  RuleBase31 R31;
  RuleBase32 R32;
  RuleBase33 R33;
  RuleBase34 R34;
  RuleBase35 R35;
  RuleBase36 R36;
  RuleBase37 R37;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<36)
    { R0.NextRule(what_rule);
      if (what_rule<36) return; }
  if (what_rule>=36 && what_rule<42)
    { R1.NextRule(what_rule);
      if (what_rule<42) return; }
  if (what_rule>=42 && what_rule<258)
    { R2.NextRule(what_rule);
      if (what_rule<258) return; }
  if (what_rule>=258 && what_rule<264)
    { R3.NextRule(what_rule);
      if (what_rule<264) return; }
  if (what_rule>=264 && what_rule<1560)
    { R4.NextRule(what_rule);
      if (what_rule<1560) return; }
  if (what_rule>=1560 && what_rule<1566)
    { R5.NextRule(what_rule);
      if (what_rule<1566) return; }
  if (what_rule>=1566 && what_rule<1782)
    { R6.NextRule(what_rule);
      if (what_rule<1782) return; }
  if (what_rule>=1782 && what_rule<1788)
    { R7.NextRule(what_rule);
      if (what_rule<1788) return; }
  if (what_rule>=1788 && what_rule<9564)
    { R8.NextRule(what_rule);
      if (what_rule<9564) return; }
  if (what_rule>=9564 && what_rule<9570)
    { R9.NextRule(what_rule);
      if (what_rule<9570) return; }
  if (what_rule>=9570 && what_rule<9606)
    { R10.NextRule(what_rule);
      if (what_rule<9606) return; }
  if (what_rule>=9606 && what_rule<9612)
    { R11.NextRule(what_rule);
      if (what_rule<9612) return; }
  if (what_rule>=9612 && what_rule<9648)
    { R12.NextRule(what_rule);
      if (what_rule<9648) return; }
  if (what_rule>=9648 && what_rule<9654)
    { R13.NextRule(what_rule);
      if (what_rule<9654) return; }
  if (what_rule>=9654 && what_rule<9690)
    { R14.NextRule(what_rule);
      if (what_rule<9690) return; }
  if (what_rule>=9690 && what_rule<9696)
    { R15.NextRule(what_rule);
      if (what_rule<9696) return; }
  if (what_rule>=9696 && what_rule<10992)
    { R16.NextRule(what_rule);
      if (what_rule<10992) return; }
  if (what_rule>=10992 && what_rule<10998)
    { R17.NextRule(what_rule);
      if (what_rule<10998) return; }
  if (what_rule>=10998 && what_rule<11034)
    { R18.NextRule(what_rule);
      if (what_rule<11034) return; }
  if (what_rule>=11034 && what_rule<11040)
    { R19.NextRule(what_rule);
      if (what_rule<11040) return; }
  if (what_rule>=11040 && what_rule<12336)
    { R20.NextRule(what_rule);
      if (what_rule<12336) return; }
  if (what_rule>=12336 && what_rule<12342)
    { R21.NextRule(what_rule);
      if (what_rule<12342) return; }
  if (what_rule>=12342 && what_rule<12348)
    { R22.NextRule(what_rule);
      if (what_rule<12348) return; }
  if (what_rule>=12348 && what_rule<12354)
    { R23.NextRule(what_rule);
      if (what_rule<12354) return; }
  if (what_rule>=12354 && what_rule<12360)
    { R24.NextRule(what_rule);
      if (what_rule<12360) return; }
  if (what_rule>=12360 && what_rule<12366)
    { R25.NextRule(what_rule);
      if (what_rule<12366) return; }
  if (what_rule>=12366 && what_rule<12367)
    { R26.NextRule(what_rule);
      if (what_rule<12367) return; }
  if (what_rule>=12367 && what_rule<12368)
    { R27.NextRule(what_rule);
      if (what_rule<12368) return; }
  if (what_rule>=12368 && what_rule<12369)
    { R28.NextRule(what_rule);
      if (what_rule<12369) return; }
  if (what_rule>=12369 && what_rule<12370)
    { R29.NextRule(what_rule);
      if (what_rule<12370) return; }
  if (what_rule>=12370 && what_rule<12371)
    { R30.NextRule(what_rule);
      if (what_rule<12371) return; }
  if (what_rule>=12371 && what_rule<12372)
    { R31.NextRule(what_rule);
      if (what_rule<12372) return; }
  if (what_rule>=12372 && what_rule<12373)
    { R32.NextRule(what_rule);
      if (what_rule<12373) return; }
  if (what_rule>=12373 && what_rule<12374)
    { R33.NextRule(what_rule);
      if (what_rule<12374) return; }
  if (what_rule>=12374 && what_rule<12375)
    { R34.NextRule(what_rule);
      if (what_rule<12375) return; }
  if (what_rule>=12375 && what_rule<12376)
    { R35.NextRule(what_rule);
      if (what_rule<12376) return; }
  if (what_rule>=12376 && what_rule<12377)
    { R36.NextRule(what_rule);
      if (what_rule<12377) return; }
  if (what_rule>=12377 && what_rule<12378)
    { R37.NextRule(what_rule);
      if (what_rule<12378) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=35) return R0.Condition(r-0);
  if (r>=36 && r<=41) return R1.Condition(r-36);
  if (r>=42 && r<=257) return R2.Condition(r-42);
  if (r>=258 && r<=263) return R3.Condition(r-258);
  if (r>=264 && r<=1559) return R4.Condition(r-264);
  if (r>=1560 && r<=1565) return R5.Condition(r-1560);
  if (r>=1566 && r<=1781) return R6.Condition(r-1566);
  if (r>=1782 && r<=1787) return R7.Condition(r-1782);
  if (r>=1788 && r<=9563) return R8.Condition(r-1788);
  if (r>=9564 && r<=9569) return R9.Condition(r-9564);
  if (r>=9570 && r<=9605) return R10.Condition(r-9570);
  if (r>=9606 && r<=9611) return R11.Condition(r-9606);
  if (r>=9612 && r<=9647) return R12.Condition(r-9612);
  if (r>=9648 && r<=9653) return R13.Condition(r-9648);
  if (r>=9654 && r<=9689) return R14.Condition(r-9654);
  if (r>=9690 && r<=9695) return R15.Condition(r-9690);
  if (r>=9696 && r<=10991) return R16.Condition(r-9696);
  if (r>=10992 && r<=10997) return R17.Condition(r-10992);
  if (r>=10998 && r<=11033) return R18.Condition(r-10998);
  if (r>=11034 && r<=11039) return R19.Condition(r-11034);
  if (r>=11040 && r<=12335) return R20.Condition(r-11040);
  if (r>=12336 && r<=12341) return R21.Condition(r-12336);
  if (r>=12342 && r<=12347) return R22.Condition(r-12342);
  if (r>=12348 && r<=12353) return R23.Condition(r-12348);
  if (r>=12354 && r<=12359) return R24.Condition(r-12354);
  if (r>=12360 && r<=12365) return R25.Condition(r-12360);
  if (r>=12366 && r<=12366) return R26.Condition(r-12366);
  if (r>=12367 && r<=12367) return R27.Condition(r-12367);
  if (r>=12368 && r<=12368) return R28.Condition(r-12368);
  if (r>=12369 && r<=12369) return R29.Condition(r-12369);
  if (r>=12370 && r<=12370) return R30.Condition(r-12370);
  if (r>=12371 && r<=12371) return R31.Condition(r-12371);
  if (r>=12372 && r<=12372) return R32.Condition(r-12372);
  if (r>=12373 && r<=12373) return R33.Condition(r-12373);
  if (r>=12374 && r<=12374) return R34.Condition(r-12374);
  if (r>=12375 && r<=12375) return R35.Condition(r-12375);
  if (r>=12376 && r<=12376) return R36.Condition(r-12376);
  if (r>=12377 && r<=12377) return R37.Condition(r-12377);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=35) { R0.Code(r-0); return; } 
  if (r>=36 && r<=41) { R1.Code(r-36); return; } 
  if (r>=42 && r<=257) { R2.Code(r-42); return; } 
  if (r>=258 && r<=263) { R3.Code(r-258); return; } 
  if (r>=264 && r<=1559) { R4.Code(r-264); return; } 
  if (r>=1560 && r<=1565) { R5.Code(r-1560); return; } 
  if (r>=1566 && r<=1781) { R6.Code(r-1566); return; } 
  if (r>=1782 && r<=1787) { R7.Code(r-1782); return; } 
  if (r>=1788 && r<=9563) { R8.Code(r-1788); return; } 
  if (r>=9564 && r<=9569) { R9.Code(r-9564); return; } 
  if (r>=9570 && r<=9605) { R10.Code(r-9570); return; } 
  if (r>=9606 && r<=9611) { R11.Code(r-9606); return; } 
  if (r>=9612 && r<=9647) { R12.Code(r-9612); return; } 
  if (r>=9648 && r<=9653) { R13.Code(r-9648); return; } 
  if (r>=9654 && r<=9689) { R14.Code(r-9654); return; } 
  if (r>=9690 && r<=9695) { R15.Code(r-9690); return; } 
  if (r>=9696 && r<=10991) { R16.Code(r-9696); return; } 
  if (r>=10992 && r<=10997) { R17.Code(r-10992); return; } 
  if (r>=10998 && r<=11033) { R18.Code(r-10998); return; } 
  if (r>=11034 && r<=11039) { R19.Code(r-11034); return; } 
  if (r>=11040 && r<=12335) { R20.Code(r-11040); return; } 
  if (r>=12336 && r<=12341) { R21.Code(r-12336); return; } 
  if (r>=12342 && r<=12347) { R22.Code(r-12342); return; } 
  if (r>=12348 && r<=12353) { R23.Code(r-12348); return; } 
  if (r>=12354 && r<=12359) { R24.Code(r-12354); return; } 
  if (r>=12360 && r<=12365) { R25.Code(r-12360); return; } 
  if (r>=12366 && r<=12366) { R26.Code(r-12366); return; } 
  if (r>=12367 && r<=12367) { R27.Code(r-12367); return; } 
  if (r>=12368 && r<=12368) { R28.Code(r-12368); return; } 
  if (r>=12369 && r<=12369) { R29.Code(r-12369); return; } 
  if (r>=12370 && r<=12370) { R30.Code(r-12370); return; } 
  if (r>=12371 && r<=12371) { R31.Code(r-12371); return; } 
  if (r>=12372 && r<=12372) { R32.Code(r-12372); return; } 
  if (r>=12373 && r<=12373) { R33.Code(r-12373); return; } 
  if (r>=12374 && r<=12374) { R34.Code(r-12374); return; } 
  if (r>=12375 && r<=12375) { R35.Code(r-12375); return; } 
  if (r>=12376 && r<=12376) { R36.Code(r-12376); return; } 
  if (r>=12377 && r<=12377) { R37.Code(r-12377); return; } 
}
int Priority(unsigned short r)
{
  if (r<=35) { return R0.Priority(); } 
  if (r>=36 && r<=41) { return R1.Priority(); } 
  if (r>=42 && r<=257) { return R2.Priority(); } 
  if (r>=258 && r<=263) { return R3.Priority(); } 
  if (r>=264 && r<=1559) { return R4.Priority(); } 
  if (r>=1560 && r<=1565) { return R5.Priority(); } 
  if (r>=1566 && r<=1781) { return R6.Priority(); } 
  if (r>=1782 && r<=1787) { return R7.Priority(); } 
  if (r>=1788 && r<=9563) { return R8.Priority(); } 
  if (r>=9564 && r<=9569) { return R9.Priority(); } 
  if (r>=9570 && r<=9605) { return R10.Priority(); } 
  if (r>=9606 && r<=9611) { return R11.Priority(); } 
  if (r>=9612 && r<=9647) { return R12.Priority(); } 
  if (r>=9648 && r<=9653) { return R13.Priority(); } 
  if (r>=9654 && r<=9689) { return R14.Priority(); } 
  if (r>=9690 && r<=9695) { return R15.Priority(); } 
  if (r>=9696 && r<=10991) { return R16.Priority(); } 
  if (r>=10992 && r<=10997) { return R17.Priority(); } 
  if (r>=10998 && r<=11033) { return R18.Priority(); } 
  if (r>=11034 && r<=11039) { return R19.Priority(); } 
  if (r>=11040 && r<=12335) { return R20.Priority(); } 
  if (r>=12336 && r<=12341) { return R21.Priority(); } 
  if (r>=12342 && r<=12347) { return R22.Priority(); } 
  if (r>=12348 && r<=12353) { return R23.Priority(); } 
  if (r>=12354 && r<=12359) { return R24.Priority(); } 
  if (r>=12360 && r<=12365) { return R25.Priority(); } 
  if (r>=12366 && r<=12366) { return R26.Priority(); } 
  if (r>=12367 && r<=12367) { return R27.Priority(); } 
  if (r>=12368 && r<=12368) { return R28.Priority(); } 
  if (r>=12369 && r<=12369) { return R29.Priority(); } 
  if (r>=12370 && r<=12370) { return R30.Priority(); } 
  if (r>=12371 && r<=12371) { return R31.Priority(); } 
  if (r>=12372 && r<=12372) { return R32.Priority(); } 
  if (r>=12373 && r<=12373) { return R33.Priority(); } 
  if (r>=12374 && r<=12374) { return R34.Priority(); } 
  if (r>=12375 && r<=12375) { return R35.Priority(); } 
  if (r>=12376 && r<=12376) { return R36.Priority(); } 
  if (r>=12377 && r<=12377) { return R37.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=35) return R0.Name(r-0);
  if (r>=36 && r<=41) return R1.Name(r-36);
  if (r>=42 && r<=257) return R2.Name(r-42);
  if (r>=258 && r<=263) return R3.Name(r-258);
  if (r>=264 && r<=1559) return R4.Name(r-264);
  if (r>=1560 && r<=1565) return R5.Name(r-1560);
  if (r>=1566 && r<=1781) return R6.Name(r-1566);
  if (r>=1782 && r<=1787) return R7.Name(r-1782);
  if (r>=1788 && r<=9563) return R8.Name(r-1788);
  if (r>=9564 && r<=9569) return R9.Name(r-9564);
  if (r>=9570 && r<=9605) return R10.Name(r-9570);
  if (r>=9606 && r<=9611) return R11.Name(r-9606);
  if (r>=9612 && r<=9647) return R12.Name(r-9612);
  if (r>=9648 && r<=9653) return R13.Name(r-9648);
  if (r>=9654 && r<=9689) return R14.Name(r-9654);
  if (r>=9690 && r<=9695) return R15.Name(r-9690);
  if (r>=9696 && r<=10991) return R16.Name(r-9696);
  if (r>=10992 && r<=10997) return R17.Name(r-10992);
  if (r>=10998 && r<=11033) return R18.Name(r-10998);
  if (r>=11034 && r<=11039) return R19.Name(r-11034);
  if (r>=11040 && r<=12335) return R20.Name(r-11040);
  if (r>=12336 && r<=12341) return R21.Name(r-12336);
  if (r>=12342 && r<=12347) return R22.Name(r-12342);
  if (r>=12348 && r<=12353) return R23.Name(r-12348);
  if (r>=12354 && r<=12359) return R24.Name(r-12354);
  if (r>=12360 && r<=12365) return R25.Name(r-12360);
  if (r>=12366 && r<=12366) return R26.Name(r-12366);
  if (r>=12367 && r<=12367) return R27.Name(r-12367);
  if (r>=12368 && r<=12368) return R28.Name(r-12368);
  if (r>=12369 && r<=12369) return R29.Name(r-12369);
  if (r>=12370 && r<=12370) return R30.Name(r-12370);
  if (r>=12371 && r<=12371) return R31.Name(r-12371);
  if (r>=12372 && r<=12372) return R32.Name(r-12372);
  if (r>=12373 && r<=12373) return R33.Name(r-12373);
  if (r>=12374 && r<=12374) return R34.Name(r-12374);
  if (r>=12375 && r<=12375) return R35.Name(r-12375);
  if (r>=12376 && r<=12376) return R36.Name(r-12376);
  if (r>=12377 && r<=12377) return R37.Name(r-12377);
  return NULL;
}
};
const unsigned numrules = 12378;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 12378


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
mu_roleA[1].mu_A = mu_Alice;
mu_roleA[1].mu_B = mu_Bob;
mu_roleA[1].mu_Na = mu_na;
mu_roleA[1].mu_N = mu_n;
mu_roleA[1].mu_st = mu_A1;
mu_roleA[1].mu_commit = mu_false;
mu_roleA[1].mu_Kab = mu_anyNonce;
mu_roleA[1].mu_Nb = mu_anyNonce;
mu_roleA[1].mu_S = mu_anyAgent;
mu_roleA[1].mu_m1.mu_msgType = mu_tmp;
mu_roleA[1].mu_m1.mu_tmpPart = 0;
mu_roleA[1].mu_m2.mu_msgType = mu_tmp;
mu_roleA[1].mu_m2.mu_tmpPart = 0;
mu_roleS[1].mu_Kab = mu_kab;
mu_roleS[1].mu_st = mu_S1;
mu_roleS[1].mu_commit = mu_false;
mu_roleS[1].mu_Na = mu_anyNonce;
mu_roleS[1].mu_N = mu_anyNonce;
mu_roleS[1].mu_Nb = mu_anyNonce;
mu_roleS[1].mu_A = mu_anyAgent;
mu_roleS[1].mu_S = mu_anyAgent;
mu_roleS[1].mu_B = mu_anyAgent;
mu_roleS[1].mu_m1.mu_msgType = mu_tmp;
mu_roleS[1].mu_m1.mu_tmpPart = 0;
mu_roleS[1].mu_m2.mu_msgType = mu_tmp;
mu_roleS[1].mu_m2.mu_tmpPart = 0;
mu_roleB[1].mu_B = mu_Bob;
mu_roleB[1].mu_S = mu_Server;
mu_roleB[1].mu_Nb = mu_nb;
mu_roleB[1].mu_st = mu_B1;
mu_roleB[1].mu_commit = mu_false;
mu_roleB[1].mu_Na = mu_anyNonce;
mu_roleB[1].mu_N = mu_anyNonce;
mu_roleB[1].mu_Kab = mu_anyNonce;
mu_roleB[1].mu_A = mu_anyAgent;
mu_roleB[1].mu_m1.mu_msgType = mu_tmp;
mu_roleB[1].mu_m1.mu_tmpPart = 0;
mu_roleB[1].mu_m2.mu_msgType = mu_tmp;
mu_roleB[1].mu_m2.mu_tmpPart = 0;
{
for(int mu_i = 0; mu_i <= 18; mu_i++) {
mu_ch[mu_i].mu_empty = mu_true;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_emit[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_msgs[mu_i].mu_msgType = mu_null;
mu_msgs[mu_i].mu_length = 0;
};
};
mu_msg_end = 0;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_pat1Set.mu_content[mu_i] = 0;
mu_sPat1Set.mu_content[mu_i] = 0;
mu_pat2Set.mu_content[mu_i] = 0;
mu_sPat2Set.mu_content[mu_i] = 0;
mu_pat3Set.mu_content[mu_i] = 0;
mu_sPat3Set.mu_content[mu_i] = 0;
mu_pat4Set.mu_content[mu_i] = 0;
mu_sPat4Set.mu_content[mu_i] = 0;
mu_pat5Set.mu_content[mu_i] = 0;
mu_sPat5Set.mu_content[mu_i] = 0;
mu_pat6Set.mu_content[mu_i] = 0;
mu_sPat6Set.mu_content[mu_i] = 0;
mu_pat7Set.mu_content[mu_i] = 0;
mu_sPat7Set.mu_content[mu_i] = 0;
mu_pat8Set.mu_content[mu_i] = 0;
mu_sPat8Set.mu_content[mu_i] = 0;
mu_pat9Set.mu_content[mu_i] = 0;
mu_sPat9Set.mu_content[mu_i] = 0;
mu_pat10Set.mu_content[mu_i] = 0;
mu_sPat10Set.mu_content[mu_i] = 0;
mu_pat11Set.mu_content[mu_i] = 0;
mu_sPat11Set.mu_content[mu_i] = 0;
mu_pat12Set.mu_content[mu_i] = 0;
mu_sPat12Set.mu_content[mu_i] = 0;
mu_pat13Set.mu_content[mu_i] = 0;
mu_sPat13Set.mu_content[mu_i] = 0;
mu_pat14Set.mu_content[mu_i] = 0;
mu_sPat14Set.mu_content[mu_i] = 0;
mu_pat15Set.mu_content[mu_i] = 0;
mu_sPat15Set.mu_content[mu_i] = 0;
mu_pat16Set.mu_content[mu_i] = 0;
mu_sPat16Set.mu_content[mu_i] = 0;
mu_pat1Set.mu_length = 0;
mu_sPat1Set.mu_length = 0;
mu_pat2Set.mu_length = 0;
mu_sPat2Set.mu_length = 0;
mu_pat3Set.mu_length = 0;
mu_sPat3Set.mu_length = 0;
mu_pat4Set.mu_length = 0;
mu_sPat4Set.mu_length = 0;
mu_pat5Set.mu_length = 0;
mu_sPat5Set.mu_length = 0;
mu_pat6Set.mu_length = 0;
mu_sPat6Set.mu_length = 0;
mu_pat7Set.mu_length = 0;
mu_sPat7Set.mu_length = 0;
mu_pat8Set.mu_length = 0;
mu_sPat8Set.mu_length = 0;
mu_pat9Set.mu_length = 0;
mu_sPat9Set.mu_length = 0;
mu_pat10Set.mu_length = 0;
mu_sPat10Set.mu_length = 0;
mu_pat11Set.mu_length = 0;
mu_sPat11Set.mu_length = 0;
mu_pat12Set.mu_length = 0;
mu_sPat12Set.mu_length = 0;
mu_pat13Set.mu_length = 0;
mu_sPat13Set.mu_length = 0;
mu_pat14Set.mu_length = 0;
mu_sPat14Set.mu_length = 0;
mu_pat15Set.mu_length = 0;
mu_sPat15Set.mu_length = 0;
mu_pat16Set.mu_length = 0;
mu_sPat16Set.mu_length = 0;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_Spy_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_A_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_S_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
mu_B_known[mu_i] = mu_false;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag1 = mu_roleA[mu_i].mu_A;
mu_msgs[mu_msg_end].mu_k.mu_ag2 = mu_roleA[mu_i].mu_S;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_Symk;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag1 = mu_roleA[mu_i].mu_A;
mu_msgs[mu_msg_end].mu_k.mu_ag2 = mu_roleA[mu_i].mu_B;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_Symk;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_msg_end = (mu_msg_end) + (1);
mu_msgs[mu_msg_end].mu_msgType = mu_key;
mu_msgs[mu_msg_end].mu_k.mu_ag1 = mu_roleS[mu_i].mu_S;
mu_msgs[mu_msg_end].mu_k.mu_ag2 = mu_roleS[mu_i].mu_B;
mu_msgs[mu_msg_end].mu_k.mu_encType = mu_Symk;
mu_msgs[mu_msg_end].mu_length = 1;
mu_pat4Set.mu_length = (mu_pat4Set.mu_length) + (1);
if (mu_msg_end.isundefined())
  mu_pat4Set.mu_content[mu_pat4Set.mu_length].undefine();
else
  mu_pat4Set.mu_content[mu_pat4Set.mu_length] = mu_msg_end;
mu_Spy_known[mu_msg_end] = mu_true;
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat6 ( mu_roleB[mu_i].mu_N, mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_B, mu_roleB[mu_i].mu_Na, mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_S, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat12 ( mu_roleB[mu_i].mu_N, mu_roleB[mu_i].mu_Na, mu_roleB[mu_i].mu_Kab, mu_roleB[mu_i].mu_A, mu_roleB[mu_i].mu_S, mu_roleB[mu_i].mu_Nb, mu_roleB[mu_i].mu_B, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat11 ( mu_roleS[mu_i].mu_N, mu_roleS[mu_i].mu_A, mu_roleS[mu_i].mu_B, mu_roleS[mu_i].mu_m1, mu_roleS[mu_i].mu_Nb, mu_roleS[mu_i].mu_B, mu_roleS[mu_i].mu_S, mu_gnum );
};
};
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_constructSpat16 ( mu_roleA[mu_i].mu_N, mu_roleA[mu_i].mu_m2, mu_gnum );
};
};
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_586() // Invariant "secrecy1"
{
bool mu__quant587; 
mu__quant587 = TRUE;
{
for(int mu_i = 0; mu_i <= 100; mu_i++) {
bool mu__boolexpr588;
bool mu__boolexpr589;
  if (!((mu_msgs[mu_i].mu_msgType) == (mu_nonce))) mu__boolexpr589 = FALSE ;
  else {
  mu__boolexpr589 = ((mu_msgs[mu_i].mu_noncePart) == (mu_kab)) ; 
}
  if (!(mu__boolexpr589)) mu__boolexpr588 = TRUE ;
  else {
  mu__boolexpr588 = ((mu_Spy_known[mu_i]) == (mu_false)) ; 
}
if ( !(mu__boolexpr588) )
  { mu__quant587 = FALSE; break; }
};
};
return mu__quant587;
};

bool mu__condition_590() // Condition for Rule "secrecy1"
{
  return mu__invariant_586( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"secrecy1", &mu__condition_590, NULL, },
};
const unsigned short numinvariants = 1;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
emit:NoScalarset
Spy_known:NoScalarset
B_known:NoScalarset
S_known:NoScalarset
A_known:NoScalarset
sPat16Set:NoScalarset
sPat15Set:NoScalarset
sPat14Set:NoScalarset
sPat13Set:NoScalarset
sPat12Set:NoScalarset
sPat11Set:NoScalarset
sPat10Set:NoScalarset
sPat9Set:NoScalarset
sPat8Set:NoScalarset
sPat7Set:NoScalarset
sPat6Set:NoScalarset
sPat5Set:NoScalarset
sPat4Set:NoScalarset
sPat3Set:NoScalarset
sPat2Set:NoScalarset
sPat1Set:NoScalarset
msg_end:NoScalarset
ch:NoScalarset
roleA:NoScalarset
roleS:NoScalarset
roleB:NoScalarset
msgs:NoScalarset
pat1Set:NoScalarset
pat2Set:NoScalarset
pat3Set:NoScalarset
pat4Set:NoScalarset
pat5Set:NoScalarset
pat6Set:NoScalarset
pat7Set:NoScalarset
pat8Set:NoScalarset
pat9Set:NoScalarset
pat10Set:NoScalarset
pat11Set:NoScalarset
pat12Set:NoScalarset
pat13Set:NoScalarset
pat14Set:NoScalarset
pat15Set:NoScalarset
pat16Set:NoScalarset
gnum:NoScalarset
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_emit.MultisetSort();
        mu_Spy_known.MultisetSort();
        mu_B_known.MultisetSort();
        mu_S_known.MultisetSort();
        mu_A_known.MultisetSort();
        mu_sPat16Set.MultisetSort();
        mu_sPat15Set.MultisetSort();
        mu_sPat14Set.MultisetSort();
        mu_sPat13Set.MultisetSort();
        mu_sPat12Set.MultisetSort();
        mu_sPat11Set.MultisetSort();
        mu_sPat10Set.MultisetSort();
        mu_sPat9Set.MultisetSort();
        mu_sPat8Set.MultisetSort();
        mu_sPat7Set.MultisetSort();
        mu_sPat6Set.MultisetSort();
        mu_sPat5Set.MultisetSort();
        mu_sPat4Set.MultisetSort();
        mu_sPat3Set.MultisetSort();
        mu_sPat2Set.MultisetSort();
        mu_sPat1Set.MultisetSort();
        mu_msg_end.MultisetSort();
        mu_ch.MultisetSort();
        mu_roleA.MultisetSort();
        mu_roleS.MultisetSort();
        mu_roleB.MultisetSort();
        mu_msgs.MultisetSort();
        mu_pat1Set.MultisetSort();
        mu_pat2Set.MultisetSort();
        mu_pat3Set.MultisetSort();
        mu_pat4Set.MultisetSort();
        mu_pat5Set.MultisetSort();
        mu_pat6Set.MultisetSort();
        mu_pat7Set.MultisetSort();
        mu_pat8Set.MultisetSort();
        mu_pat9Set.MultisetSort();
        mu_pat10Set.MultisetSort();
        mu_pat11Set.MultisetSort();
        mu_pat12Set.MultisetSort();
        mu_pat13Set.MultisetSort();
        mu_pat14Set.MultisetSort();
        mu_pat15Set.MultisetSort();
        mu_pat16Set.MultisetSort();
        mu_gnum.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_indexType::Permute(PermSet& Perm, int i) {};
void mu_1_indexType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_indexType::Canonicalize(PermSet& Perm) {};
void mu_1_indexType::SimpleLimit(PermSet& Perm) {};
void mu_1_indexType::ArrayLimit(PermSet& Perm) {};
void mu_1_indexType::Limit(PermSet& Perm) {};
void mu_1_indexType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleANums::Permute(PermSet& Perm, int i) {};
void mu_1_roleANums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleANums::Canonicalize(PermSet& Perm) {};
void mu_1_roleANums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleANums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleANums::Limit(PermSet& Perm) {};
void mu_1_roleANums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleSNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleSNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleSNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleSNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleSNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleSNums::Limit(PermSet& Perm) {};
void mu_1_roleSNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_roleBNums::Permute(PermSet& Perm, int i) {};
void mu_1_roleBNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_roleBNums::Canonicalize(PermSet& Perm) {};
void mu_1_roleBNums::SimpleLimit(PermSet& Perm) {};
void mu_1_roleBNums::ArrayLimit(PermSet& Perm) {};
void mu_1_roleBNums::Limit(PermSet& Perm) {};
void mu_1_roleBNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_msgLen::Permute(PermSet& Perm, int i) {};
void mu_1_msgLen::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_msgLen::Canonicalize(PermSet& Perm) {};
void mu_1_msgLen::SimpleLimit(PermSet& Perm) {};
void mu_1_msgLen::ArrayLimit(PermSet& Perm) {};
void mu_1_msgLen::Limit(PermSet& Perm) {};
void mu_1_msgLen::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_chanNums::Permute(PermSet& Perm, int i) {};
void mu_1_chanNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_chanNums::Canonicalize(PermSet& Perm) {};
void mu_1_chanNums::SimpleLimit(PermSet& Perm) {};
void mu_1_chanNums::ArrayLimit(PermSet& Perm) {};
void mu_1_chanNums::Limit(PermSet& Perm) {};
void mu_1_chanNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_invokeNums::Permute(PermSet& Perm, int i) {};
void mu_1_invokeNums::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_invokeNums::Canonicalize(PermSet& Perm) {};
void mu_1_invokeNums::SimpleLimit(PermSet& Perm) {};
void mu_1_invokeNums::ArrayLimit(PermSet& Perm) {};
void mu_1_invokeNums::Limit(PermSet& Perm) {};
void mu_1_invokeNums::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for subrange type.\n"); };
void mu_1_AgentType::Permute(PermSet& Perm, int i) {};
void mu_1_AgentType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AgentType::Canonicalize(PermSet& Perm) {};
void mu_1_AgentType::SimpleLimit(PermSet& Perm) {};
void mu_1_AgentType::ArrayLimit(PermSet& Perm) {};
void mu_1_AgentType::Limit(PermSet& Perm) {};
void mu_1_AgentType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_NonceType::Permute(PermSet& Perm, int i) {};
void mu_1_NonceType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_NonceType::Canonicalize(PermSet& Perm) {};
void mu_1_NonceType::SimpleLimit(PermSet& Perm) {};
void mu_1_NonceType::ArrayLimit(PermSet& Perm) {};
void mu_1_NonceType::Limit(PermSet& Perm) {};
void mu_1_NonceType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_ConstType::Permute(PermSet& Perm, int i) {};
void mu_1_ConstType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_ConstType::Canonicalize(PermSet& Perm) {};
void mu_1_ConstType::SimpleLimit(PermSet& Perm) {};
void mu_1_ConstType::ArrayLimit(PermSet& Perm) {};
void mu_1_ConstType::Limit(PermSet& Perm) {};
void mu_1_ConstType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_MsgType::Permute(PermSet& Perm, int i) {};
void mu_1_MsgType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MsgType::Canonicalize(PermSet& Perm) {};
void mu_1_MsgType::SimpleLimit(PermSet& Perm) {};
void mu_1_MsgType::ArrayLimit(PermSet& Perm) {};
void mu_1_MsgType::Limit(PermSet& Perm) {};
void mu_1_MsgType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_EncryptType::Permute(PermSet& Perm, int i) {};
void mu_1_EncryptType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_EncryptType::Canonicalize(PermSet& Perm) {};
void mu_1_EncryptType::SimpleLimit(PermSet& Perm) {};
void mu_1_EncryptType::ArrayLimit(PermSet& Perm) {};
void mu_1_EncryptType::Limit(PermSet& Perm) {};
void mu_1_EncryptType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_KeyType::Permute(PermSet& Perm, int i)
{
};
void mu_1_KeyType::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_KeyType::Canonicalize(PermSet& Perm)
{
};
void mu_1_KeyType::SimpleLimit(PermSet& Perm){}
void mu_1_KeyType::ArrayLimit(PermSet& Perm){}
void mu_1_KeyType::Limit(PermSet& Perm)
{
};
void mu_1_KeyType::MultisetLimit(PermSet& Perm)
{
};
void mu_1_AStatus::Permute(PermSet& Perm, int i) {};
void mu_1_AStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_AStatus::Canonicalize(PermSet& Perm) {};
void mu_1_AStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_AStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_AStatus::Limit(PermSet& Perm) {};
void mu_1_AStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_SStatus::Permute(PermSet& Perm, int i) {};
void mu_1_SStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_SStatus::Canonicalize(PermSet& Perm) {};
void mu_1_SStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_SStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_SStatus::Limit(PermSet& Perm) {};
void mu_1_SStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_BStatus::Permute(PermSet& Perm, int i) {};
void mu_1_BStatus::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_BStatus::Canonicalize(PermSet& Perm) {};
void mu_1_BStatus::SimpleLimit(PermSet& Perm) {};
void mu_1_BStatus::ArrayLimit(PermSet& Perm) {};
void mu_1_BStatus::Limit(PermSet& Perm) {};
void mu_1_BStatus::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<6; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm){};
void mu_1__type_0::SimpleLimit(PermSet& Perm){}
void mu_1__type_0::ArrayLimit(PermSet& Perm) {}
void mu_1__type_0::Limit(PermSet& Perm){}
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_Message::Permute(PermSet& Perm, int i)
{
};
void mu_1_Message::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Message::Canonicalize(PermSet& Perm)
{
};
void mu_1_Message::SimpleLimit(PermSet& Perm){}
void mu_1_Message::ArrayLimit(PermSet& Perm){}
void mu_1_Message::Limit(PermSet& Perm)
{
};
void mu_1_Message::MultisetLimit(PermSet& Perm)
{
};
void mu_1_Channel::Permute(PermSet& Perm, int i)
{
};
void mu_1_Channel::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Channel::Canonicalize(PermSet& Perm)
{
};
void mu_1_Channel::SimpleLimit(PermSet& Perm){}
void mu_1_Channel::ArrayLimit(PermSet& Perm){}
void mu_1_Channel::Limit(PermSet& Perm)
{
};
void mu_1_Channel::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleA::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleA::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleA::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleA::SimpleLimit(PermSet& Perm){}
void mu_1_RoleA::ArrayLimit(PermSet& Perm){}
void mu_1_RoleA::Limit(PermSet& Perm)
{
};
void mu_1_RoleA::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleS::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleS::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleS::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleS::SimpleLimit(PermSet& Perm){}
void mu_1_RoleS::ArrayLimit(PermSet& Perm){}
void mu_1_RoleS::Limit(PermSet& Perm)
{
};
void mu_1_RoleS::MultisetLimit(PermSet& Perm)
{
};
void mu_1_RoleB::Permute(PermSet& Perm, int i)
{
};
void mu_1_RoleB::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_RoleB::Canonicalize(PermSet& Perm)
{
};
void mu_1_RoleB::SimpleLimit(PermSet& Perm){}
void mu_1_RoleB::ArrayLimit(PermSet& Perm){}
void mu_1_RoleB::Limit(PermSet& Perm)
{
};
void mu_1_RoleB::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm){};
void mu_1__type_1::SimpleLimit(PermSet& Perm){}
void mu_1__type_1::ArrayLimit(PermSet& Perm) {}
void mu_1__type_1::Limit(PermSet& Perm){}
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_msgSet::Permute(PermSet& Perm, int i)
{
};
void mu_1_msgSet::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_msgSet::Canonicalize(PermSet& Perm)
{
};
void mu_1_msgSet::SimpleLimit(PermSet& Perm){}
void mu_1_msgSet::ArrayLimit(PermSet& Perm){}
void mu_1_msgSet::Limit(PermSet& Perm)
{
};
void mu_1_msgSet::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<19; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm){};
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm) {}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm){};
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm) {}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm){};
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm) {}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm){};
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm) {}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm){};
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm) {}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm){};
void mu_1__type_7::SimpleLimit(PermSet& Perm){}
void mu_1__type_7::ArrayLimit(PermSet& Perm) {}
void mu_1__type_7::Limit(PermSet& Perm){}
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm){}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_9::Canonicalize(PermSet& Perm){};
void mu_1__type_9::SimpleLimit(PermSet& Perm){}
void mu_1__type_9::ArrayLimit(PermSet& Perm) {}
void mu_1__type_9::Limit(PermSet& Perm){}
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm){};
void mu_1__type_10::SimpleLimit(PermSet& Perm){}
void mu_1__type_10::ArrayLimit(PermSet& Perm) {}
void mu_1__type_10::Limit(PermSet& Perm){}
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<101; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm){};
void mu_1__type_11::SimpleLimit(PermSet& Perm){}
void mu_1__type_11::ArrayLimit(PermSet& Perm) {}
void mu_1__type_11::Limit(PermSet& Perm){}
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_emit.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_B_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_B_known.MultisetSort();
              mu_S_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_S_known.MultisetSort();
              mu_A_known.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_A_known.MultisetSort();
              mu_sPat16Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat16Set.MultisetSort();
              mu_sPat15Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat15Set.MultisetSort();
              mu_sPat14Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat14Set.MultisetSort();
              mu_sPat13Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat13Set.MultisetSort();
              mu_sPat12Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat12Set.MultisetSort();
              mu_sPat11Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat11Set.MultisetSort();
              mu_sPat10Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat10Set.MultisetSort();
              mu_sPat9Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat9Set.MultisetSort();
              mu_sPat8Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat8Set.MultisetSort();
              mu_sPat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat7Set.MultisetSort();
              mu_sPat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat6Set.MultisetSort();
              mu_sPat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat5Set.MultisetSort();
              mu_sPat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat4Set.MultisetSort();
              mu_sPat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat3Set.MultisetSort();
              mu_sPat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat2Set.MultisetSort();
              mu_sPat1Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_sPat1Set.MultisetSort();
              mu_msg_end.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_ch.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_roleA.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
              mu_roleS.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleS.MultisetSort();
              mu_roleB.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
              mu_msgs.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_pat1Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_pat2Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat3Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat4Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat5Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat6Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat7Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_pat8Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_pat9Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat9Set.MultisetSort();
              mu_pat10Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat10Set.MultisetSort();
              mu_pat11Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat11Set.MultisetSort();
              mu_pat12Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat12Set.MultisetSort();
              mu_pat13Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat13Set.MultisetSort();
              mu_pat14Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat14Set.MultisetSort();
              mu_pat15Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat15Set.MultisetSort();
              mu_pat16Set.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_pat16Set.MultisetSort();
              mu_gnum.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_gnum.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_emit.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_emit.MultisetSort();
          mu_Spy_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_Spy_known.MultisetSort();
          mu_B_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_B_known.MultisetSort();
          mu_S_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_S_known.MultisetSort();
          mu_A_known.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_A_known.MultisetSort();
          mu_sPat16Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat16Set.MultisetSort();
          mu_sPat15Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat15Set.MultisetSort();
          mu_sPat14Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat14Set.MultisetSort();
          mu_sPat13Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat13Set.MultisetSort();
          mu_sPat12Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat12Set.MultisetSort();
          mu_sPat11Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat11Set.MultisetSort();
          mu_sPat10Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat10Set.MultisetSort();
          mu_sPat9Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat9Set.MultisetSort();
          mu_sPat8Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat8Set.MultisetSort();
          mu_sPat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat7Set.MultisetSort();
          mu_sPat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat6Set.MultisetSort();
          mu_sPat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat5Set.MultisetSort();
          mu_sPat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat4Set.MultisetSort();
          mu_sPat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat3Set.MultisetSort();
          mu_sPat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat2Set.MultisetSort();
          mu_sPat1Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_sPat1Set.MultisetSort();
          mu_msg_end.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msg_end.MultisetSort();
          mu_ch.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ch.MultisetSort();
          mu_roleA.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleA.MultisetSort();
          mu_roleS.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleS.MultisetSort();
          mu_roleB.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_roleB.MultisetSort();
          mu_msgs.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_msgs.MultisetSort();
          mu_pat1Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat1Set.MultisetSort();
          mu_pat2Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat2Set.MultisetSort();
          mu_pat3Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat3Set.MultisetSort();
          mu_pat4Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat4Set.MultisetSort();
          mu_pat5Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat5Set.MultisetSort();
          mu_pat6Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat6Set.MultisetSort();
          mu_pat7Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat7Set.MultisetSort();
          mu_pat8Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat8Set.MultisetSort();
          mu_pat9Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat9Set.MultisetSort();
          mu_pat10Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat10Set.MultisetSort();
          mu_pat11Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat11Set.MultisetSort();
          mu_pat12Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat12Set.MultisetSort();
          mu_pat13Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat13Set.MultisetSort();
          mu_pat14Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat14Set.MultisetSort();
          mu_pat15Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat15Set.MultisetSort();
          mu_pat16Set.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_pat16Set.MultisetSort();
          mu_gnum.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_gnum.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_emit.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_emit.MultisetSort();
              mu_Spy_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_Spy_known.MultisetSort();
              mu_B_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_B_known.MultisetSort();
              mu_S_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_S_known.MultisetSort();
              mu_A_known.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_A_known.MultisetSort();
              mu_sPat16Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat16Set.MultisetSort();
              mu_sPat15Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat15Set.MultisetSort();
              mu_sPat14Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat14Set.MultisetSort();
              mu_sPat13Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat13Set.MultisetSort();
              mu_sPat12Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat12Set.MultisetSort();
              mu_sPat11Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat11Set.MultisetSort();
              mu_sPat10Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat10Set.MultisetSort();
              mu_sPat9Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat9Set.MultisetSort();
              mu_sPat8Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat8Set.MultisetSort();
              mu_sPat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat7Set.MultisetSort();
              mu_sPat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat6Set.MultisetSort();
              mu_sPat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat5Set.MultisetSort();
              mu_sPat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat4Set.MultisetSort();
              mu_sPat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat3Set.MultisetSort();
              mu_sPat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat2Set.MultisetSort();
              mu_sPat1Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_sPat1Set.MultisetSort();
              mu_msg_end.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msg_end.MultisetSort();
              mu_ch.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ch.MultisetSort();
              mu_roleA.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleA.MultisetSort();
              mu_roleS.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleS.MultisetSort();
              mu_roleB.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_roleB.MultisetSort();
              mu_msgs.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_msgs.MultisetSort();
              mu_pat1Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat1Set.MultisetSort();
              mu_pat2Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat2Set.MultisetSort();
              mu_pat3Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat3Set.MultisetSort();
              mu_pat4Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat4Set.MultisetSort();
              mu_pat5Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat5Set.MultisetSort();
              mu_pat6Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat6Set.MultisetSort();
              mu_pat7Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat7Set.MultisetSort();
              mu_pat8Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat8Set.MultisetSort();
              mu_pat9Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat9Set.MultisetSort();
              mu_pat10Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat10Set.MultisetSort();
              mu_pat11Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat11Set.MultisetSort();
              mu_pat12Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat12Set.MultisetSort();
              mu_pat13Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat13Set.MultisetSort();
              mu_pat14Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat14Set.MultisetSort();
              mu_pat15Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat15Set.MultisetSort();
              mu_pat16Set.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_pat16Set.MultisetSort();
              mu_gnum.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_gnum.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_emit.MultisetSort();
      mu_Spy_known.MultisetSort();
      mu_B_known.MultisetSort();
      mu_S_known.MultisetSort();
      mu_A_known.MultisetSort();
      mu_sPat16Set.MultisetSort();
      mu_sPat15Set.MultisetSort();
      mu_sPat14Set.MultisetSort();
      mu_sPat13Set.MultisetSort();
      mu_sPat12Set.MultisetSort();
      mu_sPat11Set.MultisetSort();
      mu_sPat10Set.MultisetSort();
      mu_sPat9Set.MultisetSort();
      mu_sPat8Set.MultisetSort();
      mu_sPat7Set.MultisetSort();
      mu_sPat6Set.MultisetSort();
      mu_sPat5Set.MultisetSort();
      mu_sPat4Set.MultisetSort();
      mu_sPat3Set.MultisetSort();
      mu_sPat2Set.MultisetSort();
      mu_sPat1Set.MultisetSort();
      mu_msg_end.MultisetSort();
      mu_ch.MultisetSort();
      mu_roleA.MultisetSort();
      mu_roleS.MultisetSort();
      mu_roleB.MultisetSort();
      mu_msgs.MultisetSort();
      mu_pat1Set.MultisetSort();
      mu_pat2Set.MultisetSort();
      mu_pat3Set.MultisetSort();
      mu_pat4Set.MultisetSort();
      mu_pat5Set.MultisetSort();
      mu_pat6Set.MultisetSort();
      mu_pat7Set.MultisetSort();
      mu_pat8Set.MultisetSort();
      mu_pat9Set.MultisetSort();
      mu_pat10Set.MultisetSort();
      mu_pat11Set.MultisetSort();
      mu_pat12Set.MultisetSort();
      mu_pat13Set.MultisetSort();
      mu_pat14Set.MultisetSort();
      mu_pat15Set.MultisetSort();
      mu_pat16Set.MultisetSort();
      mu_gnum.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_emit.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_emit.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_Spy_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_Spy_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_B_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_B_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_S_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_S_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_A_known.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_A_known.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat16Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat16Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat15Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat15Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat14Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat14Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat13Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat13Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat12Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat12Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat11Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat11Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat10Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat10Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat9Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat9Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat8Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat8Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat7Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat7Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat6Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat6Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat5Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat5Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat4Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat4Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat3Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat3Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat2Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat2Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_sPat1Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_sPat1Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msg_end.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msg_end.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ch.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ch.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleA.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleA.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleS.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleS.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_roleB.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_roleB.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_msgs.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_msgs.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat1Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat1Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat2Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat2Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat3Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat3Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat4Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat4Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat5Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat5Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat6Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat6Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat7Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat7Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat8Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat8Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat9Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat9Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat10Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat10Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat11Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat11Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat12Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat12Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat13Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat13Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat14Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat14Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat15Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat15Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_pat16Set.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_pat16Set.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_gnum.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_gnum.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
