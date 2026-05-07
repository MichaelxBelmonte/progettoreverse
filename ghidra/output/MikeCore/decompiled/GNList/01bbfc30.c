// Function: FUN_01bbfc30
// Address: 01bbfc30
// Size: 1078 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01bbfd39) */
/* WARNING: Removing unreachable block (ram,0x01bbfd42) */
/* WARNING: Removing unreachable block (ram,0x01bbff9f) */
/* WARNING: Removing unreachable block (ram,0x01bbffac) */
/* WARNING: Removing unreachable block (ram,0x01bbfcf1) */
/* WARNING: Removing unreachable block (ram,0x01bbfcfa) */
/* WARNING: Removing unreachable block (ram,0x01bbfdcf) */
/* WARNING: Removing unreachable block (ram,0x01bbfdd8) */

undefined8 * FUN_01bbfc30(void)

{
  longlong lVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined *puVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  undefined *local_88;
  char local_80;
  undefined *local_58;
  char local_50;
  undefined *local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &DAT_02572358;
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)puVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  puVar2 = local_88;
  if (local_88 == (undefined *)0x0) {
    bVar3 = false;
    local_38 = (undefined *)0x0;
  }
  else {
    if (local_80 == '\0') {
      FUN_00d50b00();
    }
    bVar3 = true;
    local_38 = local_88;
    if (*(int *)(local_88 + 0xc) != 0) {
      puVar2 = *(undefined **)(unaff_RSI + 0x38);
      if (puVar2 != (undefined *)0x0) {
        FUN_00d50b00();
      }
      local_80 = '\0';
      FUN_00d21140();
      if (puVar2 != (undefined *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  local_88 = puVar2;
  pvVar6 = _pthread_getspecific((pthread_key_t)puVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_80 == '\0') {
    if (local_88 == (undefined *)0x0) goto LAB_01bc0047;
    FUN_00d50b00();
  }
  else if (local_88 == (undefined *)0x0) goto LAB_01bc0047;
  if (0 < *(int *)(local_88 + 0xc)) {
    lVar8 = 0;
    do {
      puVar2 = *(undefined **)(*(longlong *)(local_88 + 0x10) + lVar8 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_58 == local_38) {
        if ((bVar3) || (local_58 == (undefined *)0x0)) {
joined_r0x01bbffd5:
          puVar7 = local_38;
          bVar4 = bVar3;
          if ((local_50 != '\0') && (local_58 != (undefined *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          puVar7 = local_38;
          bVar4 = true;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01bbff42;
          }
        }
      }
      else if (local_50 == '\0') {
        if (local_58 != (undefined *)0x0) {
          FUN_00d50b00();
        }
        puVar7 = local_58;
        bVar4 = true;
        if ((bVar3) && (puVar7 = local_58, local_38 != (undefined *)0x0)) {
          FUN_00d50b20();
          local_38 = local_58;
LAB_01bbff42:
          bVar3 = true;
          goto joined_r0x01bbffd5;
        }
      }
      else {
        bVar4 = true;
        puVar7 = local_58;
        if ((bVar3) && (puVar7 = local_58, local_38 != (undefined *)0x0)) {
          FUN_00d50b20();
          puVar7 = local_58;
        }
      }
      bVar3 = bVar4;
      local_38 = puVar7;
      puVar7 = local_38;
      if ((local_38 != (undefined *)0x0) && (*(int *)(local_38 + 0xc) != 0)) {
        local_50 = '\0';
        FUN_00d21140();
        local_58 = puVar2;
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < *(int *)(local_88 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_01bc0047:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


