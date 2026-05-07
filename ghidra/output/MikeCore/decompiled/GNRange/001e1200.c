// Function: FUN_001e1200
// Address: 001e1200
// Size: 595 bytes
// Class: GNRange
// String references:
//   "GNRange"
//   "GNRect"
//   "GNLayoutLine"
//   "_rect"
//   "GNParagraphFormat"
//   "_substringRange"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e1200(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_001e02c0();
  *unaff_RDI = &DAT_026a9e08;
  FUN_001e1580();
  unaff_RDI[8] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e1660();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNParagraphFormat");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001e1750();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLayoutLine");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026efab0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026efa78 = FUN_001dffe0();
        _DAT_026efa70 = "_substringRange";
        _DAT_026efa80 = 0;
        _DAT_026efa88 = 0x4300;
        _DAT_026efa90 = "GNRange";
        _DAT_026efa98 = 0;
        uRam00000000026efaa0 = 0;
        _DAT_026efaa8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_001e1840();
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_001dffe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026efb00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026efac8 = FUN_001dffe0();
        _DAT_026efac0 = "_rect";
        _DAT_026efad0 = 0;
        _DAT_026efad8 = 0x5200;
        _DAT_026efae0 = "GNRect";
        _DAT_026efae8 = 0;
        uRam00000000026efaf0 = 0;
        _DAT_026efaf8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


