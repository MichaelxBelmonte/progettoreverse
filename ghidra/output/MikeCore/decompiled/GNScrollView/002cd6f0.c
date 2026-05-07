// Function: FUN_002cd6f0
// Address: 002cd6f0
// Size: 792 bytes
// Class: GNScrollView


/* WARNING: Removing unreachable block (ram,0x002cd8c7) */
/* WARNING: Removing unreachable block (ram,0x002cd8d0) */
/* WARNING: Removing unreachable block (ram,0x002cd986) */
/* WARNING: Removing unreachable block (ram,0x002cd98f) */
/* WARNING: Removing unreachable block (ram,0x002cd9ea) */
/* WARNING: Removing unreachable block (ram,0x002cd9f3) */

ulonglong FUN_002cd6f0(undefined8 param_1,char param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar6;
  longlong *plVar7;
  longlong local_88;
  char local_80;
  longlong local_40;
  char local_38;
  
  if (*(longlong **)(unaff_RDI + 0xf8) == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_002cda08;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x3f8))();
  iVar1 = *(int *)(local_88 + 0xc);
  uVar6 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),iVar1 != 0);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar1 == 0)) goto LAB_002cda08;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_002cd3f0();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_002cd7af;
    }
  }
  else if (local_88 != 0) {
LAB_002cd7af:
    if (0 < *(int *)(local_88 + 0xc)) {
      uVar6 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(local_88 + 0x10) + uVar6 * 8);
        if (*(longlong *)(lVar4 + 0x10) == 0) {
          if (*(longlong *)(lVar4 + 0x18) == 0) {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
            plVar7 = (longlong *)0x0;
            if (pvVar3 != (void *)0x0) {
              plVar7 = *(longlong **)(lVar4 + 0x10);
              lVar4 = FUN_00e8b990();
              if (lVar4 != 0) {
                plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar7 + 0x478))();
          }
          else {
            FUN_00b88600();
          }
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b00();
          FUN_00d50b20();
          lVar4 = *(longlong *)(lVar4 + 0x10);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(local_88 + 0xc));
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_00ceb350();
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_002cda08:
  return uVar6 & 0xffffffff;
}


