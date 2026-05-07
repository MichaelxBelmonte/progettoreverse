// Function: FUN_00abeec2
// Address: 00abeec2
// Size: 525 bytes
// Class: OsSignatureMac
// String references:
//   "i386"
//   "x86_64"
//   "arm64"
//   "ppc"
//   "ppc64"
//   "arm"

uint32_t FUN_00abeec2(locale *param_1,uint64_t param_2,uint64_t param_3,ulong param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint32_t uVar4;
  byte local_30;
  char *local_28;
  
  std::locale::locale(param_1);
  FUN_00991334();
  std::locale::~locale(param_1);
  pcVar2 = (char *)(uint64_t)(local_30 >> 1);
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if (pcVar3 == (char *)((int64_t)&MACH_HEADER.cputype + 2)) {
    pcVar2 = "x86_64";
    iVar1 = std::string::compare
                      (0x1fba457,0xffffffff,(char *)((int64_t)&MACH_HEADER.cputype + 2),param_4);
    if (iVar1 == 0) {
      uVar4 = 0x1000007;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(uint64_t)(local_30 >> 1);
  }
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if ((dword *)pcVar3 == &MACH_HEADER.cputype) {
    pcVar2 = "i386";
    iVar1 = std::string::compare(0x1fba452,0xffffffff,(char *)&MACH_HEADER.cputype,param_4);
    if (iVar1 == 0) {
      uVar4 = 7;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(uint64_t)(local_30 >> 1);
  }
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if (pcVar3 == (char *)((int64_t)&MACH_HEADER.magic + 3)) {
    pcVar2 = "arm";
    iVar1 = std::string::compare
                      (0x1ffd79e,0xffffffff,(char *)((int64_t)&MACH_HEADER.magic + 3),param_4);
    if (iVar1 == 0) {
      uVar4 = 0xc;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(uint64_t)(local_30 >> 1);
  }
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if (pcVar3 == (char *)((int64_t)&MACH_HEADER.cputype + 1)) {
    pcVar2 = "arm64";
    iVar1 = std::string::compare
                      (0x1fba45e,0xffffffff,(char *)((int64_t)&MACH_HEADER.cputype + 1),param_4);
    if (iVar1 == 0) {
      uVar4 = 0x100000c;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(uint64_t)(local_30 >> 1);
  }
  pcVar3 = local_28;
  if ((local_30 & 1) == 0) {
    pcVar3 = pcVar2;
  }
  if (pcVar3 == (char *)((int64_t)&MACH_HEADER.magic + 3)) {
    pcVar2 = "ppc";
    iVar1 = std::string::compare
                      (0x1ffd794,0xffffffff,(char *)((int64_t)&MACH_HEADER.magic + 3),param_4);
    if (iVar1 == 0) {
      uVar4 = 0x12;
      goto LAB_00abf0b5;
    }
    pcVar2 = (char *)(uint64_t)(local_30 >> 1);
  }
  if ((local_30 & 1) != 0) {
    pcVar2 = local_28;
  }
  uVar4 = 0;
  if (pcVar2 == (char *)((int64_t)&MACH_HEADER.cputype + 1)) {
    pcVar2 = "ppc64";
    iVar1 = std::string::compare
                      (0x1ffd798,0xffffffff,(char *)((int64_t)&MACH_HEADER.cputype + 1),param_4);
    uVar4 = 0;
    if (iVar1 == 0) {
      uVar4 = 0x1000012;
    }
  }
LAB_00abf0b5:
  if ((local_30 & 1) != 0) {
    operator_delete(pcVar2);
  }
  return uVar4;
}

