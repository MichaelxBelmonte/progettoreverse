// Function: FUN_011a5bd0
// Address: 011a5bd0
// Size: 618 bytes
// Class: GNInt
// String references:
//   "GNInt"
//   "_assembledElementRendererCount"
//   "MUSampler"
//   "MUSamplerComponentRenderer"
//   "MUSamplerElementRenderer"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a5bd0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_010f3160();
  *unaff_RDI = &DAT_025d7780;
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a5f90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSampler");
  }
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a6080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSamplerElementRenderer");
  }
  *(undefined4 *)(unaff_RDI + 0x1f) = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027afc68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027afc30 = FUN_011a5760();
        _DAT_027afc28 = "_assembledElementRendererCount";
        _DAT_027afc38 = 0;
        _DAT_027afc40 = 0x6900;
        _DAT_027afc48 = "GNInt";
        _DAT_027afc50 = 0;
        uRam00000000027afc58 = 0;
        _DAT_027afc60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011a6170();
  unaff_RDI[0x21] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a6250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSamplerElementRenderer");
  }
  unaff_RDI[0x22] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a6340();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSamplerComponentRenderer");
  }
  return;
}


