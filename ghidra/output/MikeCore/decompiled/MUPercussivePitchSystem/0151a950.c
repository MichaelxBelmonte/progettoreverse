// Function: FUN_0151a950
// Address: 0151a950
// Size: 1105 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x0151ac02) */
/* WARNING: Removing unreachable block (ram,0x0151ac0b) */
/* WARNING: Removing unreachable block (ram,0x0151aa7a) */
/* WARNING: Removing unreachable block (ram,0x0151aa7f) */
/* WARNING: Removing unreachable block (ram,0x0151ad47) */
/* WARNING: Removing unreachable block (ram,0x0151ad50) */
/* WARNING: Removing unreachable block (ram,0x0151abb0) */
/* WARNING: Removing unreachable block (ram,0x0151abb9) */
/* WARNING: Removing unreachable block (ram,0x0151aa0a) */
/* WARNING: Removing unreachable block (ram,0x0151aa13) */
/* WARNING: Removing unreachable block (ram,0x0151ac57) */
/* WARNING: Removing unreachable block (ram,0x0151ac60) */

undefined8 * FUN_0151a950(void)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar8;
  longlong local_90;
  char local_88;
  longlong in_stack_ffffffffffffff98;
  char local_60;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar7 = *(longlong *)(unaff_RSI + 0x50);
  if (lVar7 == 0) {
    if (*(longlong *)(unaff_RSI + 0x58) != 0) {
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      if (local_60 == '\0') {
        if (in_stack_ffffffffffffff98 == 0) goto LAB_0151ad9b;
        FUN_00d50b00();
      }
      else if (in_stack_ffffffffffffff98 == 0) goto LAB_0151ad9b;
      if (0 < *(int *)(in_stack_ffffffffffffff98 + 0xc)) {
        iVar1 = 0;
        do {
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb110();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          FUN_00d21140();
          if (local_90 != 0) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(in_stack_ffffffffffffff98 + 0xc));
      }
      FUN_01507540();
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      lVar7 = *(longlong *)(unaff_RSI + 0x50);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    iVar1 = FUN_00d23d20();
    FUN_00d50b20();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0151a950();
    if (unaff_RSI != 0) {
      FUN_00d50b00();
      puVar5 = (undefined *)(longlong)iVar1;
      for (iVar8 = 0; iVar8 < *(int *)(unaff_RSI + 0xc); iVar8 = iVar8 + 1) {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6160();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if (iVar1 < *(int *)(local_40 + 0xc)) {
          local_40 = *(longlong *)(*(longlong *)(local_40 + 0x10) + (longlong)puVar5 * 8);
          puVar6 = puVar5;
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\0';
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      FUN_000be170();
      FUN_00d50b20();
    }
  }
LAB_0151ad9b:
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


