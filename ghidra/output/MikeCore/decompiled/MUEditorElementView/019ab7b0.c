// Function: FUN_019ab7b0
// Address: 019ab7b0
// Size: 1196 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019abaa7) */
/* WARNING: Removing unreachable block (ram,0x019abab3) */

undefined8 * FUN_019ab7b0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  pthread_key_t in_ECX;
  code *pcVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RSI[0x3e] + 0xc) == 1) {
    FUN_00d23310();
    local_40 = CONCAT71(local_40._1_7_,(char)local_90);
    plVar5 = &local_90;
    if ((char)local_90 == '\0') {
      plVar5 = &local_40;
    }
    *(undefined1 *)plVar5 = 0;
    if (((char)local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    local_60 = 0;
    if (((char)local_40 == '\0') && (local_98 != 0)) {
      FUN_00d50b00();
    }
    local_68 = local_98;
    local_60 = '\x01';
    cVar4 = (**(code **)(*unaff_RSI + 0x9a0))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d23310();
      local_58._0_1_ = (char)local_90;
      plVar5 = &local_90;
      if ((char)local_90 == '\0') {
        plVar5 = &local_58;
      }
      *(undefined1 *)plVar5 = 0;
      if (((char)local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      local_40 = CONCAT71(local_40._1_7_,(char)local_58 != '\0');
      plVar5 = &local_58;
      if ((char)local_58 == '\0') {
        plVar5 = &local_40;
      }
      *(undefined1 *)plVar5 = 0;
      if (((char)local_58 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      local_90._0_1_ = '\0';
      cVar4 = FUN_00d23d70();
      if (((char)local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        pvVar8 = _pthread_getspecific(in_ECX);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*unaff_RSI + 0x9f0))();
        FUN_012e9900(param_1,param_2);
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
      if ((char)local_40 == '\0') {
        return unaff_RDI;
      }
      if (local_98 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
  else if (*(int *)(unaff_RSI[0x3e] + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  (**(code **)(*unaff_RSI + 0x9f0))();
  pcVar3 = DAT_02572370;
  lVar1 = unaff_RSI[0x3e];
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    local_90._0_1_ = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = lVar1;
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_70 = 0;
      puVar6 = (undefined8 *)0x0;
    }
    else {
      lVar10 = 0;
      puVar6 = (undefined8 *)0x0;
      local_70 = 0;
      pcVar9 = DAT_02572370;
      do {
        local_40 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar10 * 8);
        local_38 = '\0';
        cVar4 = FUN_00d23d70();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = &DAT_02572358;
            uVar7 = (*pcVar3)();
            local_70 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
          cVar4 = (**(code **)(*unaff_RSI + 0x9a0))();
          if (cVar4 != '\0') {
            pvVar8 = _pthread_getspecific((pthread_key_t)pcVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar7 = FUN_012e9900(param_1,param_2);
            lVar2 = CONCAT71(local_58._1_7_,(char)local_58);
            if (local_50 == '\0') {
              if (lVar2 != 0) {
                uVar7 = FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_38 = '\0';
            local_40 = lVar2;
            FUN_00d214d0(uVar7,*(undefined4 *)((longlong)puVar6 + 0xc));
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(local_58._1_7_,(char)local_58) != 0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar10 = lVar10 + 1;
        local_80 = CONCAT44(local_80._4_4_,(int)lVar10);
      } while ((int)lVar10 < *(int *)(lVar1 + 0xc));
    }
    FUN_000be170();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_70 != '\0') goto LAB_019abbcd;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_019abbcd;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_019abbcd:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


