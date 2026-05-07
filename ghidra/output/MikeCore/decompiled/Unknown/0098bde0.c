// Function: FUN_0098bde0
// Address: 0098bde0
// Size: 534 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Certifier.cpp"
//   "The certificate doesn't have the required permissions."
//   "%s\nError detail:\n%s"
//   "void pace::Certifier::throwIfPermissionsInvalid(const std::set<uint32_t> *, const char *)"


/* WARNING: Removing unreachable block (ram,0x0098bfa9) */

void FUN_0098bde0(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined **this;
  undefined1 **ppuVar2;
  char *pcVar3;
  longlong *unaff_RDI;
  undefined1 *local_68;
  char *local_60;
  char *local_58;
  byte local_50;
  undefined1 local_4f [15];
  undefined1 *local_40;
  undefined *local_38;
  
  this = &PTR__ostream_02517318;
  std::ios_base::init(&PTR__ostream_02517318);
  local_38 = &DAT_025172a8;
  local_58 = param_2;
  std::streambuf::streambuf((streambuf *)this);
  cVar1 = (**(code **)(*unaff_RDI + 0x18))();
  if (cVar1 == '\0') {
    local_60 = "The certificate doesn\'t have the required permissions.";
    if (local_58 != (char *)0x0) {
      local_60 = local_58;
    }
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00892260();
    if ((local_50 & 1) == 0) {
      local_40 = local_4f;
    }
    ppuVar2 = &local_68;
    local_68 = local_40;
    FUN_00983230();
    if ((local_50 & 1) != 0) {
      operator_delete(ppuVar2);
    }
    pcVar3 = 
    "void pace::Certifier::throwIfPermissionsInvalid(const std::set<uint32_t> *, const char *)";
    FUN_00928ab0("void pace::Certifier::throwIfPermissionsInvalid(const std::set<uint32_t> *, const char *)"
                 ,0x10d);
    FUN_009c720b();
    this = (undefined **)pcVar3;
  }
  std::streambuf::~streambuf((streambuf *)this);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios((ios *)this);
  return;
}


