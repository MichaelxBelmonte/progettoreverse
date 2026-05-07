// Function: FUN_01a1b340
// Address: 01a1b340
// Size: 1654 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a1b99a) */
/* WARNING: Removing unreachable block (ram,0x01a1b9a6) */
/* WARNING: Removing unreachable block (ram,0x01a1b921) */
/* WARNING: Removing unreachable block (ram,0x01a1b92d) */
/* WARNING: Removing unreachable block (ram,0x01a1b634) */
/* WARNING: Removing unreachable block (ram,0x01a1b640) */

ulonglong FUN_01a1b340(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar15;
  undefined4 uVar16;
  float extraout_XMM0_Db;
  float fStack_e4;
  longlong local_88;
  char local_80;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  int local_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  ulonglong local_38;
  
  if (*param_2 == 0) {
    puVar13 = (undefined1 *)0x0;
    goto LAB_01a1b689;
  }
  uVar4 = FUN_01a58dc0();
  plVar11 = local_68;
  if (local_68 == (longlong *)0x0) {
    local_74 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    plVar11 = (longlong *)0x0;
  }
  else {
    if (local_60 == '\0') {
      FUN_00d50b00();
      local_74 = 0;
      if ((local_60 == '\0') || (local_68 == (longlong *)0x0)) goto LAB_01a1b3b1;
      FUN_00d50b20();
    }
    local_74 = 0;
  }
LAB_01a1b3b1:
  (**(code **)(*plVar11 + 0x7b0))();
  local_70 = local_68;
  if ((((local_60 == '\0') && (local_68 != (longlong *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *plVar11)
          )();
  if (cVar2 == '\0') {
    local_38 = 0;
    local_40 = (longlong *)0x0;
    puVar13 = (undefined1 *)0x0;
    plVar10 = local_70;
  }
  else {
    iVar3 = FUN_01d3a5a0();
    uVar16 = extraout_XMM0_Da;
    if ((iVar3 == 1) && (iVar3 = FUN_01d3b630(), uVar16 = extraout_XMM0_Da_00, iVar3 == 1)) {
      iVar3 = FUN_01d3b620();
      if (iVar3 == 2) {
        (**(code **)(*plVar11 + 0xe30))();
        plVar10 = local_68;
        if (local_68 == (longlong *)0x0) {
          puVar13 = (undefined1 *)0x1;
          local_38 = 0;
          local_40 = (longlong *)0x0;
          plVar10 = local_70;
        }
        else {
          if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
             (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_60 = 0;
          local_68 = (longlong *)0x0;
          local_40 = plVar10;
          local_58 = plVar10;
          local_50 = -1;
          iStack_4c = 0;
          local_48 = 0;
          uVar14 = 0;
          uVar12 = 0;
          while( true ) {
            lVar5 = (longlong)local_50;
            local_50 = local_50 + 1;
            if (*(int *)((longlong)local_58 + 0xc) <= local_50) break;
            lVar9 = local_58[2];
            local_68 = *(longlong **)(lVar9 + 8 + lVar5 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
            pVar8 = (pthread_key_t)lVar9;
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar15 = (float)FUN_0125ea80();
            local_38 = CONCAT44(local_38._4_4_,-(uint)(fVar15 == DAT_02390124));
            pvVar6 = _pthread_getspecific(pVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar15 = (float)FUN_0125ea80();
            uVar12 = uVar12 - (int)local_38;
            uVar14 = uVar14 + (fVar15 == DAT_0239424c);
            if (iStack_4c != 0) {
              if (iStack_4c < 1) {
                iStack_4c = -iStack_4c;
              }
              else {
                local_50 = local_50 - iStack_4c;
                FUN_00d23690();
                local_48 = local_48 + iStack_4c;
                iStack_4c = 0;
              }
            }
          }
          plVar10 = local_58;
          FUN_001159b0();
          uVar7 = local_38;
          local_60 = '\0';
          local_68 = (longlong *)0x0;
          local_58 = local_40;
          iStack_4c = 0;
          local_48 = 0;
          local_38 = local_38 & 0xffffffff00000000;
          if (uVar12 <= uVar14) {
            local_38._4_4_ = SUB84(uVar7,4);
            local_38 = CONCAT44(local_38._4_4_,DAT_02390124);
          }
          for (lVar5 = 0; local_50 = (int)lVar5, local_50 < *(int *)((longlong)local_40 + 0xc);
              lVar5 = lVar5 + 1) {
            local_68 = *(longlong **)(local_40[2] + lVar5 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125ea20((int)local_38);
          }
          uVar4 = FUN_001159b0();
          local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          puVar13 = &DAT_02802501;
          plVar10 = local_70;
        }
      }
      else {
        FUN_01d3abf0();
        FUN_01e466c0();
        (**(code **)(*plVar11 + 0xe30))();
        local_40 = local_68;
        if (local_68 == (longlong *)0x0) {
          local_38 = 0;
        }
        else {
          local_38 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
          if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
             (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01cf74c0();
        fStack_e4 = extraout_XMM0_Db;
LAB_01a1b7f0:
        (**(code **)(*plVar11 + 0x658))();
        plVar1 = local_68;
        plVar10 = (longlong *)*unaff_RSI;
        if (plVar10 != local_68) {
          lVar5 = unaff_RSI[1];
          if (local_60 != '\0') {
            *unaff_RSI = (longlong)local_68;
            if (((char)lVar5 != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a1b842;
          }
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)plVar1;
          if (((char)lVar5 != '\0') && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a1b884:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          if (*unaff_RSI == 0) goto LAB_01a1b959;
LAB_01a1b895:
          iVar3 = FUN_01d3a5a0();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar3 == 6) goto LAB_01a1b96d;
          iVar3 = FUN_01d3a5a0();
          if (iVar3 == 5) {
            FUN_01d3abf0();
            uVar4 = FUN_01e466c0();
            fVar15 = (float)((ulonglong)uVar4 >> 0x20);
            (**(code **)(*unaff_RDI + 0x4b8))(fStack_e4 - fVar15);
            (**(code **)((longlong)&linkedit_data_command_000013e8.cmd + *plVar11))((int)uVar4);
            fStack_e4 = fVar15;
          }
          goto LAB_01a1b7f0;
        }
        if (((char)unaff_RSI[1] == '\0') && (local_68 != (longlong *)0x0)) {
          if (local_60 == '\0') {
            FUN_00d50b00();
            goto LAB_01a1b884;
          }
LAB_01a1b842:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_60 = '\0';
        }
        if (*unaff_RSI != 0) goto LAB_01a1b895;
LAB_01a1b959:
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a1b96d:
        FUN_0199eb40();
        puVar13 = (undefined1 *)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
        FUN_01cf74c0();
        plVar10 = local_70;
      }
    }
    else {
      local_88 = *param_2;
      local_80 = '\0';
      uVar7 = FUN_01a58d30(uVar16,&local_88);
      plVar10 = local_70;
      puVar13 = (undefined1 *)(uVar7 & 0xffffffff);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      local_40 = (longlong *)0x0;
      local_38 = 0;
    }
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_74 == '\0' && plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01a1b689:
  return (ulonglong)puVar13 & 0xffffffff;
}


