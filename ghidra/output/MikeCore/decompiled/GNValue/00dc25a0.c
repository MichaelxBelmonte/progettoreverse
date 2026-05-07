// Function: FUN_00dc25a0
// Address: 00dc25a0
// Size: 1347 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x00dc2738) */

void FUN_00dc25a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_d0;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  int local_48;
  int iStack_44;
  int local_40;
  char local_38 [8];
  
  plVar2 = local_60;
  local_c0 = *unaff_RSI;
  if (local_c0 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_b8 = '\0';
  FUN_00d6c240();
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00dc5330();
  if ((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00ca1380();
  local_38[0] = local_58[0];
  pcVar5 = local_58;
  if (local_58[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00dc270b;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_00dc270b:
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar2;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    while( true ) {
      lVar1 = DAT_02783b38;
      lVar6 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)local_50 + 0xc) <= local_48) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
      if (DAT_02783b38 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar1;
      local_a8 = '\x01';
      cVar3 = (**(code **)(*local_60 + 0x50))();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        iVar8 = local_40 + local_48;
        FUN_00018280();
        goto joined_r0x00dc27fb;
      }
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
    }
    iVar8 = -1;
    FUN_00018280();
joined_r0x00dc27fb:
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (iVar8 != -1) {
      FUN_00c9fe20();
      pcVar5 = local_58;
      if (local_58[0] == '\0') {
        pcVar5 = local_38;
      }
      local_38[0] = local_58[0];
      *pcVar5 = '\0';
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(local_60[2] + (longlong)iVar8 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      iVar8 = FUN_00d8c7a0();
      lVar6 = DAT_02783b68;
      if (iVar8 < 7) {
LAB_00dc29a0:
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
      else {
        if (DAT_02783b68 != 0) {
          FUN_00d50b00();
        }
        local_a0 = lVar6;
        local_98 = '\x01';
        cVar3 = FUN_00d90870();
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((cVar3 == '\0') || (sVar4 = FUN_00d8cbc0(), sVar4 != 0x3a)) goto LAB_00dc29a0;
        FUN_00d8f140();
        if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar7 + 0x18))();
        FUN_00d6be50();
        if (local_58[0] == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00dc2a0c;
          }
        }
        else if (local_60 != (longlong *)0x0) {
LAB_00dc2a0c:
          local_58[0] = '\0';
          iStack_44 = 0;
          local_40 = 0;
          local_50 = local_60;
          for (lVar6 = 0; local_48 = (int)lVar6, local_48 < *(int *)((longlong)local_60 + 0xc);
              lVar6 = lVar6 + 1) {
            local_c8 = 0;
            local_d0 = plVar7;
            FUN_00dc6010(local_60,&local_d0,param_3,param_4,0,
                         *(undefined8 *)(local_60[2] + lVar6 * 8),0);
          }
          FUN_00bea5a0();
          FUN_00d50b20();
        }
        *unaff_RDI = plVar7;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00dc29c0;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_00dc29c0:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


