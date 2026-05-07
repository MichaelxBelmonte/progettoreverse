// Function: FUN_017891f0
// Address: 017891f0
// Size: 3801 bytes
// Class: MUBarSignature


undefined8 *
FUN_017891f0(undefined8 **param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  code *pcVar1;
  undefined8 **ppuVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuVar12;
  pthread_key_t pVar13;
  undefined8 **ppuVar14;
  longlong lVar15;
  int iVar16;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar17;
  undefined8 ***pppuVar18;
  longlong *local_res8;
  int iStack_cc;
  undefined8 **local_b0;
  char local_a8;
  longlong *local_a0;
  undefined8 **local_98;
  undefined8 *local_90;
  undefined8 local_88;
  char local_80;
  longlong *local_78;
  undefined8 **local_70;
  char local_68 [8];
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  undefined8 **local_48;
  char local_40;
  
  local_98 = param_1;
  local_78 = param_2;
  if (*local_res8 == 0) {
    ppuVar14 = (undefined8 **)(longlong *)0x0;
  }
  else {
    FUN_00d23310();
    ppuVar2 = local_70;
    pppuVar10 = &local_48;
    if (local_68[0] != '\0') {
      pppuVar10 = (undefined8 ***)local_68;
    }
    local_48 = (undefined8 **)CONCAT71(local_48._1_7_,local_68[0]);
    *(char *)pppuVar10 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    ppuVar14 = ppuVar2;
    if (((char)local_48 == '\0') &&
       (ppuVar14 = (undefined8 **)(longlong *)0x0, ppuVar2 != (undefined8 **)0x0)) {
      FUN_00d50b00();
      ppuVar14 = ppuVar2;
    }
  }
  *(undefined1 *)(unaff_RSI + 0x40) = 1;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar1 = DAT_02572370;
  (*DAT_02572370)();
  local_90 = puVar4;
  if (*(longlong *)(unaff_RSI + 0x48) != 0) {
    *(undefined8 *)(unaff_RSI + 0x48) = 0;
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*pcVar1)();
  lVar5 = *(longlong *)(unaff_RSI + 0x50);
  *(undefined8 **)(unaff_RSI + 0x50) = puVar4;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d216c0();
  if (*param_4 != 0) {
    FUN_00d216c0();
  }
  if (*local_res8 != 0) {
    FUN_00d216c0();
  }
  puVar4 = (undefined8 *)*local_78;
  if ((puVar4 == (undefined8 *)0x0) || (*(int *)((longlong)puVar4 + 0xc) == 0)) {
LAB_017895fc:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_68[0] = '\0';
    local_70 = (undefined8 **)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_a0 = (longlong *)ppuVar14;
    local_60 = puVar4;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar16 = -local_58._4_4_;
        }
        else {
          iVar16 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar16);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar16 = 0;
        }
        local_58 = CONCAT44(iVar16,(int)local_58);
      }
      lVar5 = (longlong)(int)local_58;
      iVar16 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar16);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar16) break;
      lVar15 = local_60[2];
      local_70 = *(undefined8 ***)(lVar15 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar15);
      pVar13 = (pthread_key_t)lVar15;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      ppuVar14 = local_48;
      if ((local_40 != '\0') && (local_48 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      if (ppuVar14 != (undefined8 **)0x0) {
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        ppuVar14 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (undefined8 **)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_48 = ppuVar14;
        local_40 = '\0';
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        if (ppuVar14 != (undefined8 **)0x0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    ppuVar14 = (undefined8 **)local_a0;
    if (*(int *)((longlong)local_90 + 0xc) == 0) goto LAB_017895fc;
    FUN_00d23310();
    ppuVar14 = local_70;
    pppuVar10 = (undefined8 ***)local_68;
    pppuVar18 = &local_b0;
    if (local_68[0] != '\0') {
      pppuVar18 = pppuVar10;
    }
    local_b0 = (undefined8 **)CONCAT71(local_b0._1_7_,local_68[0]);
    *(undefined1 *)pppuVar18 = 0;
    if ((local_68[0] != '\0') && (ppuVar14 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    pVar13 = (pthread_key_t)pppuVar10;
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    ppuVar2 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (undefined8 **)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_b0 != '\0') && (ppuVar14 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    ppuVar14 = local_70;
    local_88 = (undefined8 **)CONCAT71(local_88._1_7_,local_68[0]);
    ppuVar12 = (undefined8 **)local_68;
    if (local_68[0] == '\0') {
      ppuVar12 = (undefined8 **)&local_88;
    }
    *(char *)ppuVar12 = '\0';
    if ((local_68[0] != '\0') && (ppuVar14 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508450();
    ppuVar12 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (undefined8 **)0x0) {
        FUN_00d50b00();
        goto LAB_0178978b;
      }
      if (*(longlong *)(unaff_RSI + 0x30) != 0) {
        *(undefined8 *)(unaff_RSI + 0x30) = 0;
        goto LAB_017897d7;
      }
    }
    else {
      local_40 = '\0';
LAB_0178978b:
      ppuVar11 = *(undefined8 ***)(unaff_RSI + 0x30);
      if (ppuVar11 != ppuVar12) {
        if (ppuVar12 != (undefined8 **)0x0) {
          FUN_00d50b00();
        }
        *(undefined8 ***)(unaff_RSI + 0x30) = ppuVar12;
        if (ppuVar11 != (undefined8 **)0x0) {
LAB_017897d7:
          FUN_00d50b20();
        }
      }
      if (ppuVar12 != (undefined8 **)0x0) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_88 != '\0') && (ppuVar14 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    ppuVar12 = local_70;
    ppuVar14 = (undefined8 **)local_68;
    ppuVar11 = (undefined8 **)&local_88;
    if (local_68[0] != '\0') {
      ppuVar11 = ppuVar14;
    }
    local_88 = (undefined8 **)CONCAT71(local_88._1_7_,local_68[0]);
    *(char *)ppuVar11 = '\0';
    if ((local_68[0] != '\0') && (ppuVar12 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)ppuVar14);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    ppuVar11 = *(undefined8 ***)(unaff_RSI + 0x38);
    if (ppuVar11 != local_48) {
      ppuVar14 = ppuVar11;
      if (local_40 == '\0') {
        if (local_48 == (undefined8 **)0x0) {
          ppuVar11 = (undefined8 **)0x0;
        }
        else {
          FUN_00d50b00();
          ppuVar11 = local_48;
          ppuVar14 = *(undefined8 ***)(unaff_RSI + 0x38);
        }
      }
      else {
        local_40 = '\0';
        ppuVar11 = local_48;
      }
      *(undefined8 ***)(unaff_RSI + 0x38) = ppuVar11;
      if (ppuVar14 != (undefined8 **)0x0) {
        FUN_00d50b20();
        ppuVar11 = local_48;
      }
    }
    pVar13 = (pthread_key_t)ppuVar14;
    if ((local_40 != '\0') && (ppuVar11 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_88 != '\0') && (ppuVar12 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_01794ea0();
    (**(code **)(*plVar7 + 0x18))();
    local_78 = plVar7;
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_016caaa0();
    *(undefined8 *)((longlong)plVar7 + 0xc) = uVar8;
    pvVar6 = _pthread_getspecific(pVar13);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_016caaa0();
    *(undefined8 *)((longlong)local_78 + 0x14) = uVar8;
    local_68[0] = '\0';
    local_70 = (undefined8 **)0x0;
    local_60 = local_90;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar16 = -local_58._4_4_;
        }
        else {
          iVar16 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar16);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar16 = 0;
        }
        local_58 = CONCAT44(iVar16,(int)local_58);
      }
      lVar5 = (longlong)(int)local_58;
      iVar16 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar16);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar16) break;
      lVar15 = local_60[2];
      local_70 = *(undefined8 ***)(lVar15 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar15);
      pVar13 = (pthread_key_t)lVar15;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (undefined8 **)FUN_01507970();
      local_48 = local_98;
      FUN_00e7c280();
      local_b0 = local_48;
      if (((local_88._4_4_ != 0) && ((ulonglong)local_48 >> 0x20 != 0)) &&
         (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_01507970();
        if (((uVar9 >> 0x20 != 0) && (iStack_cc = (int)((ulonglong)param_3 >> 0x20), iStack_cc != 0)
            ) && (cVar3 = FUN_00e7c020(), plVar7 = local_78, cVar3 != '\0')) {
          local_88 = (undefined8 **)FUN_0178c570();
          if ((((char)local_b0 != '\0') && ((ulonglong)local_88 >> 0x20 != 0)) &&
             ((int)plVar7[2] != 0)) {
            cVar3 = FUN_00e7c020();
            if (((cVar3 == '\0' && local_88._4_4_ != 0) && ((int)plVar7[3] != 0)) &&
               (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
              local_48 = local_70;
              local_40 = '\0';
              FUN_00d21140();
              if ((local_40 != '\0') && (local_48 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    puVar4 = local_60;
    FUN_0015ed50();
    if (*(longlong *)(unaff_RSI + 0x30) != 0) {
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar4);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510b20(0,local_98,0,0);
      ppuVar14 = *(undefined8 ***)(unaff_RSI + 0x28);
      ppuVar12 = ppuVar14;
      if (ppuVar14 != local_70) {
        if (local_68[0] == '\0') {
          if (local_70 == (undefined8 **)0x0) {
            ppuVar12 = (undefined8 **)0x0;
          }
          else {
            FUN_00d50b00();
            ppuVar14 = *(undefined8 ***)(unaff_RSI + 0x28);
            ppuVar12 = local_70;
          }
        }
        else {
          local_68[0] = '\0';
          ppuVar12 = local_70;
        }
        *(undefined8 ***)(unaff_RSI + 0x28) = ppuVar12;
        if (ppuVar14 != (undefined8 **)0x0) {
          FUN_00d50b20();
          ppuVar12 = local_70;
        }
      }
      if ((local_68[0] != '\0') && (ppuVar12 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar7 = local_78;
    uVar8 = FUN_0178c910();
    ppuVar12 = local_70;
    if (local_70 == (undefined8 **)0x0) {
      local_98 = (undefined8 **)
                 CONCAT44(local_98._4_4_,(int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1));
    }
    else {
      if (local_68[0] == '\0') {
        FUN_00d50b00();
      }
      local_98 = (undefined8 **)((ulonglong)local_98 & 0xffffffff00000000);
    }
    local_70 = (undefined8 **)plVar7;
    local_68[0] = '\0';
    FUN_00d21140();
    if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    if (*param_4 != 0) {
      plVar7 = (longlong *)local_78[4];
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_68[0] = '\0';
      local_70 = (undefined8 **)plVar7;
      FUN_00d21140();
      if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((*local_res8 != 0) && (*(int *)(local_78[7] + 0xc) != 0)) {
        FUN_00d23310();
        ppuVar14 = local_70;
        local_48 = (undefined8 **)CONCAT71(local_48._1_7_,local_68[0]);
        pppuVar10 = (undefined8 ***)local_68;
        if (local_68[0] == '\0') {
          pppuVar10 = &local_48;
        }
        *(char *)pppuVar10 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = ppuVar14[4];
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_68[0] = '\0';
        local_70 = (undefined8 **)plVar7;
        FUN_00d21140();
        if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_48 != '\0') {
          FUN_00d50b20();
        }
      }
      if (*(int *)(local_78[6] + 0xc) != 0) {
        FUN_00d23310();
        ppuVar14 = local_70;
        local_48 = (undefined8 **)CONCAT71(local_48._1_7_,local_68[0]);
        pppuVar10 = (undefined8 ***)local_68;
        if (local_68[0] == '\0') {
          pppuVar10 = &local_48;
        }
        *(char *)pppuVar10 = '\0';
        if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = ppuVar14[4];
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_68[0] = '\0';
        local_70 = (undefined8 **)plVar7;
        FUN_00d21140();
        if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_48 != '\0') {
          FUN_00d50b20();
        }
        if (*local_res8 != 0) {
          FUN_00d23310();
          ppuVar14 = local_70;
          local_48 = (undefined8 **)CONCAT71(local_48._1_7_,local_68[0]);
          pppuVar10 = (undefined8 ***)local_68;
          if (local_68[0] == '\0') {
            pppuVar10 = &local_48;
          }
          *(char *)pppuVar10 = '\0';
          if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          iVar16 = *(int *)((longlong)ppuVar14[7] + 0xc);
          if (((char)local_48 != '\0') && (ppuVar14 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          if (iVar16 != 0) {
            FUN_00d23310();
            ppuVar14 = local_70;
            pcVar17 = (char *)&local_88;
            if (local_68[0] != '\0') {
              pcVar17 = local_68;
            }
            local_88 = (undefined8 **)CONCAT71(local_88._1_7_,local_68[0]);
            *pcVar17 = '\0';
            if ((local_68[0] != '\0') && (ppuVar14 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d23310();
            ppuVar14 = local_70;
            pppuVar10 = (undefined8 ***)local_68;
            if (local_68[0] == '\0') {
              pppuVar10 = &local_48;
            }
            local_48 = (undefined8 **)CONCAT71(local_48._1_7_,local_68[0]);
            *(char *)pppuVar10 = '\0';
            if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = ppuVar14[4];
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_68[0] = '\0';
            local_70 = (undefined8 **)plVar7;
            FUN_00d21140();
            if ((local_68[0] != '\0') && (local_70 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((char)local_48 != '\0') {
              FUN_00d50b20();
            }
            if ((char)local_88 != '\0') {
              FUN_00d50b20();
            }
          }
        }
      }
    }
    *(undefined1 *)(unaff_RSI + 0x40) = 0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (((char)local_98 != '\0') && (ppuVar12 != (undefined8 **)0x0)) {
      FUN_00d50b00();
    }
    ppuVar14 = (undefined8 **)local_a0;
    *unaff_RDI = ppuVar12;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    puVar4 = local_90;
    if (ppuVar2 != (undefined8 **)0x0) {
      FUN_00d50b20();
    }
    if (puVar4 == (undefined8 *)0x0) goto LAB_01789618;
  }
  FUN_00d50b20();
LAB_01789618:
  if (ppuVar14 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


