// Function: FUN_01f41210
// Address: 01f41210
// Size: 2906 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f419ec) */
/* WARNING: Removing unreachable block (ram,0x01f419f5) */
/* WARNING: Removing unreachable block (ram,0x01f41734) */
/* WARNING: Removing unreachable block (ram,0x01f4173d) */
/* WARNING: Removing unreachable block (ram,0x01f41638) */
/* WARNING: Removing unreachable block (ram,0x01f41559) */
/* WARNING: Removing unreachable block (ram,0x01f41562) */
/* WARNING: Removing unreachable block (ram,0x01f4133f) */
/* WARNING: Removing unreachable block (ram,0x01f4134b) */
/* WARNING: Removing unreachable block (ram,0x01f41708) */
/* WARNING: Removing unreachable block (ram,0x01f4187c) */
/* WARNING: Removing unreachable block (ram,0x01f41885) */
/* WARNING: Removing unreachable block (ram,0x01f41c41) */
/* WARNING: Removing unreachable block (ram,0x01f41c4a) */
/* WARNING: Removing unreachable block (ram,0x01f414a9) */
/* WARNING: Removing unreachable block (ram,0x01f414b2) */
/* WARNING: Removing unreachable block (ram,0x01f41b35) */
/* WARNING: Removing unreachable block (ram,0x01f41b3e) */

longlong * FUN_01f41210(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  uint local_b4;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*param_1 != 0) {
    local_f0 = '\0';
    local_f8 = *param_1;
    FUN_00df1bf0(*param_2,&local_f8);
    plVar8 = (longlong *)*param_2;
    if (plVar8 == local_40) {
      if (((char)param_2[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_01f41308;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01f41304;
      }
LAB_01f412ca:
      *(undefined1 *)(param_2 + 1) = 1;
      local_38 = '\0';
    }
    else {
      lVar7 = param_2[1];
      if (local_38 != '\0') {
        *param_2 = (longlong)local_40;
        if (((char)lVar7 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01f412ca;
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *param_2 = (longlong)local_40;
      if (((char)lVar7 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f41304:
      *(undefined1 *)(param_2 + 1) = 1;
LAB_01f41308:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((DAT_028ba828 != (undefined8 *)0x0) && (DAT_028ba831 != '\0')) goto LAB_01f418c9;
  FUN_00e8cb50();
  if (DAT_028ba828 != (undefined8 *)0x0) {
    DAT_028ba831 = '\x01';
    FUN_00e8cb70();
    goto LAB_01f418c9;
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (DAT_028ba828 == puVar5) {
    bVar1 = false;
    bVar11 = false;
  }
  else {
    bVar1 = true;
    bVar11 = true;
    bVar10 = DAT_028ba828 != (undefined8 *)0x0;
    DAT_028ba828 = puVar5;
    if (bVar10) {
      FUN_00d50b20();
    }
  }
  if (DAT_028ba830 == '\0') {
    DAT_028ba830 = '\x01';
    FUN_00e8cb90();
    bVar11 = bVar1;
  }
  if (!bVar11) {
    FUN_00d50b20();
  }
  FUN_00d30620();
  FUN_00d305f0();
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  (**(code **)(*unaff_RSI + 0x618))();
  if (local_40 == (longlong *)0x0) {
    bVar11 = true;
    plVar8 = (longlong *)0x0;
    bVar1 = false;
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar11 = false;
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
      bVar11 = false;
    }
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar11) {
    (**(code **)(*plVar8 + 1000))();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d214d0();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d30660();
  FUN_00d305f0();
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  (**(code **)(*unaff_RSI + 0x618))();
  if (local_40 == plVar8) {
    if ((bool)(bVar11 & local_40 != (longlong *)0x0)) {
      if (local_38 != '\0') goto LAB_01f41628;
      bVar1 = true;
      FUN_00d50b00();
    }
LAB_01f4167c:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar11 = (bool)(bVar1 & plVar8 != (longlong *)0x0);
      bVar1 = true;
      plVar8 = local_40;
      if (bVar11) {
        FUN_00d50b20();
      }
      goto LAB_01f4167c;
    }
    bVar11 = plVar8 != (longlong *)0x0;
    plVar8 = local_40;
    if ((bool)(bVar1 & bVar11)) {
      FUN_00d50b20();
    }
LAB_01f41628:
    local_38 = '\0';
    bVar1 = true;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 1000))();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d214d0();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RSI + 0x610))();
  if (local_40 == plVar8) {
    plVar9 = plVar8;
    bVar11 = bVar1;
    if ((!bVar1) && (local_40 != (longlong *)0x0)) {
      if (local_38 != '\0') goto joined_r0x01f417c8;
      FUN_00d50b00();
      bVar11 = true;
    }
LAB_01f4180b:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
LAB_01f4182b:
      (**(code **)(*plVar9 + 1000))();
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_38 = '\0';
      FUN_00d214d0();
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_40 = local_50;
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((bVar11) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar11 = true;
      if ((bVar1) && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f4180b;
    }
    if ((bVar1) && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
joined_r0x01f417c8:
    bVar11 = true;
    if (plVar9 != (longlong *)0x0) goto LAB_01f4182b;
  }
  DAT_028ba831 = '\x01';
  FUN_00e8cb70();
LAB_01f418c9:
  pcVar2 = DAT_02572370;
  local_b4 = 2 - (*(int *)(unaff_RSI[0x10] + 0xc) == 0);
  local_b0 = 0;
  if (*(int *)(unaff_RSI[0x10] + 0xc) == 0) goto LAB_01f41a50;
LAB_01f41920:
  if ((int)local_b0 != 0) goto LAB_01f41a50;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar2)();
  lVar7 = unaff_RSI[0x10];
  if (*(int *)(lVar7 + 0xc) < 1) goto LAB_01f41a68;
  lVar6 = 0;
  do {
    (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar6 * 8) + 1000))();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d214d0();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar6 = lVar6 + 1;
    lVar7 = unaff_RSI[0x10];
  } while (lVar6 < *(int *)(lVar7 + 0xc));
  bVar11 = true;
  if (0 < *(int *)((longlong)puVar5 + 0xc)) goto LAB_01f41a75;
LAB_01f41d18:
  do {
    do {
      FUN_00d50b20();
      if (!bVar11) {
        return unaff_RDI;
      }
      do {
        uVar4 = (int)local_b0 + 1;
        local_b0 = (ulonglong)uVar4;
        if (uVar4 == local_b4) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          return unaff_RDI;
        }
        if (*(int *)(unaff_RSI[0x10] + 0xc) != 0) goto LAB_01f41920;
LAB_01f41a50:
        puVar5 = DAT_028ba828;
      } while (DAT_028ba828 == (undefined8 *)0x0);
      FUN_00d50b00();
LAB_01f41a68:
      bVar11 = true;
    } while (*(int *)((longlong)puVar5 + 0xc) < 1);
LAB_01f41a75:
    lVar7 = 0;
    do {
      plVar8 = *(longlong **)(puVar5[2] + lVar7 * 8);
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar8 + 0x368))();
      local_e8 = *param_2;
      local_e0 = '\0';
      cVar3 = FUN_00d90eb0();
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        (**(code **)(*plVar8 + 0x388))();
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        local_d8 = *param_2;
        local_d0 = '\0';
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          FUN_00d8f1a0();
          local_c8 = *param_2;
          local_c0 = '\0';
          cVar3 = (**(code **)(*local_50 + 0x50))();
          if (cVar3 == '\0') {
            cVar3 = '\0';
          }
          else if (*param_1 == 0) {
            cVar3 = '\x01';
          }
          else {
            (**(code **)(*plVar8 + 0x370))();
            if (local_58 == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_a8 = local_60;
            local_40 = local_60;
            local_38 = '\0';
            cVar3 = FUN_00d23d70();
            if (local_a8 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 == '\0') {
            FUN_00d50b20();
            goto LAB_01f41cc0;
          }
          *unaff_RDI = (longlong)plVar8;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_00d50b20();
        }
        else {
          *unaff_RDI = (longlong)plVar8;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          FUN_00d50b20();
        }
        bVar11 = false;
        goto LAB_01f41d18;
      }
LAB_01f41cc0:
      FUN_00d50b20();
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)puVar5 + 0xc));
    bVar11 = true;
  } while( true );
}


