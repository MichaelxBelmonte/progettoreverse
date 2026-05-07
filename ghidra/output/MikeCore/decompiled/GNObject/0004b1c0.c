// Function: FUN_0004b1c0
// Address: 0004b1c0
// Size: 1082 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNHashedDictionary"
//   "_predictedDecodedValuesIndex"
//   "GNKeyValueUnarchiverDelegate"
//   "GNEditingContext"
//   "_reflectsOwnerTree"
//   "_awakesObjectsAfterDecodig"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004b1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_02571d38;
  FUN_0004b7d0();
  unaff_RDI[6] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004b8b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004b9a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004ba90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_0004bb80();
  unaff_RDI[10] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004bc60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNKeyValueUnarchiverDelegate");
  }
  *(undefined1 *)(unaff_RDI + 0xb) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d3260 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d3228 = FUN_0004ae80();
        _DAT_026d3220 = "_awakesObjectsAfterDecodig";
        _DAT_026d3230 = 0;
        _DAT_026d3238 = 0x6200;
        _DAT_026d3240 = "bool";
        _DAT_026d3248 = 0;
        uRam00000000026d3250 = 0;
        _DAT_026d3258 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0004bda0();
  puVar4 = unaff_RDI + 0xd;
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004be80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext",param_3,param_4,puVar4);
  }
  FUN_0004bf70();
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d3380 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d3348 = FUN_0004ae80();
        _DAT_026d3340 = "_predictedDecodedValuesIndex";
        _DAT_026d3350 = 0;
        _DAT_026d3358 = 0x6900;
        _DAT_026d3360 = "GNInt";
        _DAT_026d3368 = 0;
        uRam00000000026d3370 = 0;
        _DAT_026d3378 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d33c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d3390 = FUN_0004ae80();
        _DAT_026d3388 = "_reflectsOwnerTree";
        _DAT_026d3398 = 0;
        _DAT_026d33a0 = 0x6200;
        _DAT_026d33a8 = "bool";
        _DAT_026d33b0 = 0;
        uRam00000000026d33b8 = 0;
        _DAT_026d33c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0004c050();
  return;
}


