// Function: FUN_0039bed0
// Address: 0039bed0
// Size: 1063 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"


/* WARNING: Removing unreachable block (ram,0x0039c27c) */
/* WARNING: Removing unreachable block (ram,0x0039c285) */
/* WARNING: Removing unreachable block (ram,0x0039bf18) */
/* WARNING: Removing unreachable block (ram,0x0039bf24) */
/* WARNING: Removing unreachable block (ram,0x0039c2d2) */
/* WARNING: Removing unreachable block (ram,0x0039c2db) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0039bed0(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*(longlong *)unaff_RDI[0xa7] + 0x78))();
  FUN_00d3ecc0();
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02702db8;
  if (cVar2 == '\0') {
    if (DAT_02702db8 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_48 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_00d50b00();
      local_38[0] = '\0';
      do {
        (**(code **)(*unaff_RDI + 0x370))();
        if (local_48 == unaff_RDI) {
          if (((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) && (local_40[0] != '\0')) {
            local_38[0] = '\x01';
            goto LAB_0039c097;
          }
        }
        else {
          unaff_RDI = local_48;
          if (local_40[0] == '\0') {
            if (local_38[0] == '\0') {
              pcVar4 = local_38;
            }
            else {
              FUN_00d50b20();
              pcVar4 = local_38;
            }
          }
          else {
            if (local_38[0] != '\0') {
              FUN_00d50b20();
            }
            local_38[0] = '\x01';
LAB_0039c097:
            local_38[0] = '\x01';
            pcVar4 = local_40;
          }
          *pcVar4 = '\0';
        }
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((DAT_026f7020 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_0270aa58 = FUN_00015ff0();
          _DAT_0270aa40 = "MDEditorViewController";
          _DAT_0270aa48 = 0x1e8;
          _DAT_0270aa50 = FUN_00074eb0;
          _DAT_0270aa60 = 0;
          uRam000000000270aa68 = 0;
          _DAT_0270aa70 = 0;
          _DAT_0270aae8 = 0;
          uRam000000000270aaf0 = 0;
          _DAT_0270aaf8 = 0;
          DAT_0270aafa = 1;
          _DAT_0270aa78 = 0;
          uRam000000000270aa80 = 0;
          _DAT_0270aa88 = 0;
          uRam000000000270aa90 = 0;
          _DAT_0270aa98 = 0;
          uRam000000000270aaa0 = 0;
          _DAT_0270aaa8 = 0;
          uRam000000000270aab0 = 0;
          _DAT_0270aab8 = 0;
          uRam000000000270aac0 = 0;
          _DAT_0270aac8 = 0;
          uRam000000000270aad0 = 0;
          _DAT_0270aad8 = 0;
          uRam000000000270aae0 = 0;
          DAT_0270ab03 = 0;
          _DAT_0270aafb = 0;
          ___cxa_guard_release();
        }
        plVar5 = &DAT_02802688;
        if (unaff_RDI != (longlong *)0x0) {
          (**(code **)(*unaff_RDI + 0x360))();
          cVar2 = FUN_00e85ea0();
          plVar5 = (longlong *)&stack0xffffffffffffffb0;
          if (cVar2 == '\0') {
            plVar5 = &DAT_02802688;
          }
        }
        if (*plVar5 != 0) {
          if ((local_38[0] == '\0') && (unaff_RDI != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          goto LAB_0039c20b;
        }
      } while (unaff_RDI != (longlong *)0x0);
      unaff_RDI = (longlong *)0x0;
LAB_0039c20b:
      FUN_00d50b20();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00262a50();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 != (longlong *)0x0) {
          FUN_00262a50();
          cVar2 = FUN_004f3eb0();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 != '\0') {
            FUN_00d50b20();
            goto LAB_0039c2e0;
          }
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(&UNK_00001668 + *unaff_RDI))();
  }
  FUN_019d6f50();
LAB_0039c2e0:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


