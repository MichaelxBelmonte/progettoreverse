// Function: FUN_00c33bc0
// Address: 00c33bc0
// Size: 965 bytes
// Class: GNOverloudTapedesk


/* WARNING: Removing unreachable block (ram,0x00c33bfd) */
/* WARNING: Removing unreachable block (ram,0x00c33c09) */

void FUN_00c33bc0(void)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  undefined4 local_34;
  
  FUN_01d0f230();
  local_b0 = DAT_0276cc80;
  if ((*(longlong *)(unaff_RDI + 0x1d8) != 0) && (*(longlong *)(unaff_RDI + 0x1d0) != 0)) {
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_00d91000(1,&local_b0);
    lVar5 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = DAT_0276cc80;
    local_80 = lVar5;
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar6;
    local_98 = '\x01';
    FUN_00d91000(1,&local_a0);
    local_40 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025683c0;
    pcVar3 = DAT_025683d8;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    lVar6 = *(longlong *)(unaff_RDI + 0x1e0);
    *(undefined8 **)(unaff_RDI + 0x1e0) = puVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025683c0;
    (*pcVar3)();
    FUN_00c92170();
    FUN_00c92160();
    lVar6 = *(longlong *)(unaff_RDI + 0x1e8);
    *(undefined8 **)(unaff_RDI + 0x1e8) = puVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      local_70 = '\0';
      local_78 = 0;
      local_68 = lVar5;
      local_58 = 0;
      local_60 = 0;
      if (0 < *(int *)(lVar5 + 0xc)) {
        lVar6 = 0;
        do {
          local_90 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
          lVar5 = *(longlong *)(unaff_RDI + 0x1e0);
          local_88 = '\0';
          local_78 = local_90;
          local_34 = FUN_00c71d60();
          iVar1 = *(int *)(lVar5 + 0x18);
          FUN_00c8e340(local_34,1);
          *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar1) = local_34;
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = *(longlong *)(unaff_RDI + 0x1e8);
          lVar2 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar6 * 8);
          local_48 = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          local_50 = lVar2;
          local_34 = FUN_00c71d60();
          iVar1 = *(int *)(lVar5 + 0x18);
          FUN_00c8e340(local_34,1);
          *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar1) = local_34;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
          lVar5 = local_80;
        } while ((int)lVar6 < *(int *)(local_80 + 0xc));
      }
      FUN_00018280();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


