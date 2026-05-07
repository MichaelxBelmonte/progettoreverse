// Function: FUN_01a0a1c0
// Address: 01a0a1c0
// Size: 1690 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a0a819) */
/* WARNING: Removing unreachable block (ram,0x01a0a825) */
/* WARNING: Removing unreachable block (ram,0x01a0a6c5) */
/* WARNING: Removing unreachable block (ram,0x01a0a6d1) */
/* WARNING: Removing unreachable block (ram,0x01a0a3a5) */
/* WARNING: Removing unreachable block (ram,0x01a0a3b1) */

ulonglong FUN_01a0a1c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar14;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar15;
  longlong local_b8;
  char local_b0;
  longlong local_88;
  char local_80;
  float local_74;
  longlong *local_70;
  float local_64;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  undefined4 local_34;
  
  if (*param_2 == 0) {
    param_2 = (longlong *)0x0;
    goto LAB_01a0a3c8;
  }
  uVar13 = FUN_01a58dc0();
  plVar12 = local_60;
  if (local_60 == (longlong *)0x0) {
    bVar3 = true;
    bVar2 = false;
LAB_01a0a352:
    local_88 = *param_2;
    local_80 = '\0';
    uVar6 = FUN_01a58d30(uVar13,&local_88);
    param_2 = (longlong *)(ulonglong)uVar6;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    cVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *plVar12))();
    if (cVar4 == '\0') {
      bVar2 = true;
      bVar3 = false;
      param_2 = (longlong *)0x0;
    }
    else {
      iVar5 = FUN_01d3a5a0();
      bVar2 = true;
      uVar13 = extraout_XMM0_Da;
      if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), uVar13 = extraout_XMM0_Da_00, iVar5 != 1)) {
        bVar3 = false;
        goto LAB_01a0a352;
      }
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        (**(code **)(*plVar12 + 0xe30))();
        plVar12 = local_60;
        if (local_60 != (longlong *)0x0) {
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_58 = '\0';
          local_60 = (longlong *)0x0;
          local_50 = plVar12;
          iStack_44 = 0;
          iStack_40 = 0;
          for (plVar11 = (longlong *)0x0; local_48 = (int)plVar11,
              local_48 < *(int *)((longlong)plVar12 + 0xc);
              plVar11 = (longlong *)((longlong)plVar11 + 1)) {
            local_60 = *(longlong **)(plVar12[2] + (longlong)plVar11 * 8);
            pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01259600(0);
          }
          FUN_001159b0();
          uVar13 = 1;
          goto LAB_01a0a832;
        }
      }
      else {
        FUN_01d3abf0();
        FUN_01e466c0();
        local_64 = (float)(**(code **)(*plVar12 + 0xc00))(extraout_XMM0_Db);
        (**(code **)(*plVar12 + 0xe30))();
        local_70 = local_60;
        if (local_60 == (longlong *)0x0) {
          local_34 = 0;
        }
        else {
          local_34 = (undefined4)CONCAT71((int7)((ulonglong)local_60 >> 8),1);
          if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        while( true ) {
          (**(code **)(*plVar12 + 0x658))();
          plVar11 = local_60;
          plVar1 = (longlong *)*unaff_RSI;
          if (plVar1 != local_60) break;
          if (((char)unaff_RSI[1] == '\0') && (local_60 != (longlong *)0x0)) {
            if (local_58 == '\0') {
              FUN_00d50b00();
              goto LAB_01a0a4f5;
            }
LAB_01a0a4b1:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_58 = '\0';
          }
          if (*unaff_RSI == 0) goto LAB_01a0a7d7;
LAB_01a0a507:
          uVar6 = FUN_01d3a5a0();
          plVar11 = (longlong *)(ulonglong)uVar6;
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (uVar6 == 6) goto LAB_01a0a7eb;
          iVar5 = FUN_01d3a5a0();
          if (iVar5 == 5) {
            FUN_01d3abf0();
            uVar15 = FUN_01e466c0();
            local_74 = (float)(**(code **)(*plVar12 + 0xc00))((int)((ulonglong)uVar15 >> 0x20));
            local_64 = local_74 - local_64;
            cVar4 = FUN_01a0ab00();
            if ((cVar4 != '\0') && (local_70 != (longlong *)0x0)) {
              local_58 = '\0';
              local_60 = (longlong *)0x0;
              local_50 = local_70;
              local_48 = -1;
              iStack_44 = 0;
              iStack_40 = 0;
              while( true ) {
                if (iStack_44 != 0) {
                  if (iStack_44 < 1) {
                    iStack_44 = -iStack_44;
                  }
                  else {
                    local_48 = local_48 - iStack_44;
                    FUN_00d23690();
                    iStack_40 = iStack_40 + iStack_44;
                    iStack_44 = 0;
                  }
                }
                lVar8 = (longlong)local_48;
                local_48 = local_48 + 1;
                if (*(int *)((longlong)local_50 + 0xc) <= local_48) break;
                lVar10 = local_50[2];
                local_60 = *(longlong **)(lVar10 + 8 + lVar8 * 8);
                pvVar7 = _pthread_getspecific((pthread_key_t)lVar10);
                pVar9 = (pthread_key_t)lVar10;
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar7 = _pthread_getspecific(pVar9);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar14 = (float)FUN_01265b70();
                FUN_01259600(fVar14 + local_64);
                cVar4 = FUN_0199be40();
                if (cVar4 != '\0') {
                  (**(code **)((longlong)&linkedit_data_command_000013d8.cmd + *plVar12))();
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  pvVar7 = _pthread_getspecific(pVar9);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_01265b70();
                  FUN_01259600();
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              FUN_001159b0();
            }
            (**(code **)((longlong)&linkedit_data_command_000013e8.cmd + *plVar12))((int)uVar15);
            (**(code **)(*unaff_RDI + 0x458))();
            local_64 = local_74;
          }
        }
        lVar8 = unaff_RSI[1];
        if (local_58 != '\0') {
          *unaff_RSI = (longlong)local_60;
          if (((char)lVar8 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01a0a4b1;
        }
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar11;
        if (((char)lVar8 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a0a4f5:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        if (*unaff_RSI != 0) goto LAB_01a0a507;
LAB_01a0a7d7:
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a0a7eb:
        FUN_0199eb40();
        plVar12 = local_70;
        uVar13 = local_34;
LAB_01a0a832:
        bVar3 = false;
        bVar2 = true;
        param_2 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
        if (((char)uVar13 == '\0') || (plVar12 == (longlong *)0x0)) goto LAB_01a0a3b6;
        FUN_00d50b20();
      }
      bVar2 = true;
      bVar3 = false;
      param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
  }
LAB_01a0a3b6:
  if ((bVar2) && (!bVar3)) {
    FUN_00d50b20();
  }
LAB_01a0a3c8:
  return (ulonglong)param_2 & 0xffffffff;
}


