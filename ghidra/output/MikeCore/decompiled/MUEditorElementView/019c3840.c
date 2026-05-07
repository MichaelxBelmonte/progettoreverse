// Function: FUN_019c3840
// Address: 019c3840
// Size: 3717 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019c4505) */
/* WARNING: Removing unreachable block (ram,0x019c4511) */
/* WARNING: Removing unreachable block (ram,0x019c3ae4) */
/* WARNING: Removing unreachable block (ram,0x019c3af0) */
/* WARNING: Removing unreachable block (ram,0x019c459a) */
/* WARNING: Removing unreachable block (ram,0x019c45aa) */

ulonglong FUN_019c3840(undefined8 param_1,byte param_2)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  longlong *plVar13;
  char *pcVar14;
  longlong lVar15;
  pthread_key_t pVar16;
  ulonglong unaff_RBX;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *unaff_RDI;
  longlong **pplVar19;
  undefined7 uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  undefined8 *local_198;
  char local_190;
  undefined8 *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  undefined8 *local_168;
  char local_160;
  undefined8 *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  undefined8 *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *local_40;
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0xe10))();
  if (*(int *)((longlong)local_40 + 0xc) == 0) {
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    uVar8 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *unaff_RDI))();
    unaff_RBX = (ulonglong)uVar8;
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar8 == '\0') {
      uVar17 = 0;
      goto LAB_019c46b1;
    }
  }
  (**(code **)(*unaff_RDI + 0xe28))();
  local_68 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_019c3910;
    FUN_00d50b00();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = local_68;
    if (*(int *)((longlong)local_68 + 0xc) == 0) goto LAB_019c390b;
LAB_019c39b7:
    local_68 = plVar3;
    (**(code **)(*unaff_RDI + 0xe10))();
    plVar3 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pplVar19 = &local_40;
    (**(code **)(*unaff_RDI + 0xd40))();
    plVar18 = local_40;
    FUN_00083c20();
    if (plVar18 == (longlong *)0x0) {
LAB_019c3a37:
      pplVar19 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar18 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_019c3a37;
    }
    plVar18 = *pplVar19;
    if (*(char *)(pplVar19 + 1) == '\0') {
      if (plVar18 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar19 + 1) = 0;
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_50 = plVar18;
    puVar11 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar16 = 0x2572358;
    *puVar11 = &DAT_02572358;
    (*DAT_02572370)();
    if ((plVar3 == (longlong *)0x0) || (*(int *)((longlong)plVar3 + 0xc) == 0)) {
      local_58 = (longlong *)(**(code **)(*unaff_RDI + 0xf08))();
      if (!NAN((double)local_58)) {
        if (plVar18 == (longlong *)0x0) {
          local_178 = local_68;
          local_170 = '\0';
          local_160 = '\0';
          local_168 = puVar11;
          bVar6 = FUN_01c9db50(local_58,&local_168);
          if ((local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((param_2 & bVar6) == 1) {
            cVar4 = FUN_019c3480();
            bVar7 = 1;
            bVar6 = 1;
            if (cVar4 != '\0') {
              local_150 = '\0';
              local_158 = puVar11;
              (**(code **)(*unaff_RDI + 0xdc8))(extraout_XMM0_Qa_00,1);
              local_58 = (longlong *)0x0;
              local_60 = 0;
              if ((local_150 == '\0') || (local_158 == (undefined8 *)0x0)) goto LAB_019c3f8c;
              FUN_00d50b20();
            }
          }
        }
        else {
          uVar22 = FUN_01a8c310();
          plVar18 = local_40;
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            uVar22 = FUN_00d50b20();
          }
          plVar13 = local_50;
          if (plVar18 == (longlong *)0x0) goto LAB_019c3dd0;
          local_1c8 = local_50;
          local_1c0 = '\0';
          FUN_019c29e0(uVar22,&local_1c8);
          plVar18 = local_40;
          if (plVar13 == local_40) {
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_38[0] == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            local_50 = plVar18;
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
            local_50 = plVar18;
          }
          if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_1b8 = local_50;
          local_1b0 = '\0';
          uVar22 = FUN_01ca2ec0(local_58);
          if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar18 = (longlong *)unaff_RDI[0x77];
          local_1a8 = local_68;
          local_1a0 = '\0';
          uVar5 = (**(code **)(&DAT_000015e8 + *unaff_RDI))();
          local_190 = '\0';
          local_198 = puVar11;
          bVar6 = FUN_01ca1b40(uVar5,uVar22,&local_198,param_2);
          if ((local_190 != '\0') && (local_198 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((param_2 & bVar6) == 1) {
            cVar4 = FUN_019c3480();
            bVar7 = 1;
            bVar6 = 1;
            if (cVar4 != '\0') {
              local_180 = '\0';
              local_188 = puVar11;
              (**(code **)(*unaff_RDI + 0xdc8))(extraout_XMM0_Qa_01,1);
              local_58 = (longlong *)0x0;
              local_60 = 0;
              if ((local_180 == '\0') || (local_188 == (undefined8 *)0x0)) goto LAB_019c3f8c;
              FUN_00d50b20();
            }
          }
        }
        bVar7 = bVar6;
        local_60 = 0;
        local_58 = (longlong *)0x0;
        goto LAB_019c3f8c;
      }
LAB_019c3dd0:
      uVar17 = 0;
    }
    else {
      uVar10 = FUN_01ca1fa0();
      if ((char)uVar10 == '\0') {
        FUN_00243390();
        plVar18 = local_40;
        if (local_40 == (longlong *)0x0) {
          plVar18 = (longlong *)0x0;
          uVar22 = 0;
        }
        else {
          uVar20 = (undefined7)((ulonglong)plVar3 >> 8);
          if (local_38[0] == '\0') {
            FUN_00d50b00();
            uVar22 = CONCAT71(uVar20,1);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
            uVar22 = CONCAT71(uVar20,1);
          }
        }
        if (param_2 != 0) {
          (**(code **)(*unaff_RDI + 0xda0))();
        }
        local_1d0 = '\0';
        local_1d8 = puVar11;
        local_60 = uVar22;
        local_58 = plVar18;
        bVar7 = FUN_01c97b90(param_2,&local_1d8);
        if ((local_1d0 != '\0') && (local_1d8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
LAB_019c3f8c:
        if ((param_2 != 0) && (bVar7 != 0)) {
          local_48 = puVar11;
          plVar13 = (longlong *)FUN_00e8fc40();
          FUN_00022d50();
          uVar22 = (**(code **)(*plVar13 + 0x18))();
          plVar18 = DAT_026de560;
          if ((local_58 != (longlong *)0x0) && (*(int *)((longlong)local_58 + 0xc) != 0)) {
            local_148 = local_58;
            local_140 = '\0';
            if (DAT_026de560 != (longlong *)0x0) {
              uVar22 = FUN_00d50b00();
            }
            local_40 = plVar18;
            local_38[0] = '\0';
            FUN_00ca0840(uVar22,&local_40);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (*(int *)((longlong)puVar11 + 0xc) != 0) {
            local_130 = '\0';
            local_138 = puVar11;
            uVar22 = FUN_00243390();
            lVar15 = CONCAT71(uStack_77,local_78);
            plVar18 = DAT_0270b8f0;
            if (local_70 == '\0') {
              if (lVar15 != 0) {
                uVar22 = FUN_00d50b00();
                plVar18 = DAT_0270b8f0;
              }
            }
            else {
              local_70 = '\0';
            }
            DAT_0270b8f0 = plVar18;
            if (plVar18 != (longlong *)0x0) {
              uVar22 = FUN_00d50b00();
            }
            local_38[0] = '\0';
            local_40 = plVar18;
            FUN_00ca0840(uVar22,&local_40);
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if (lVar15 != 0) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
              FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d403d0();
          local_128 = DAT_026de568;
          if (DAT_026de568 != 0) {
            FUN_00d50b00();
          }
          local_120 = '\x01';
          FUN_00d50b00();
          local_110 = '\0';
          pplVar19 = &local_118;
          local_118 = plVar13;
          FUN_00d40470(pplVar19,&stack0xffffffffffffff48,1,0);
          pVar16 = (pthread_key_t)pplVar19;
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d23310();
          plVar13 = local_40;
          local_78 = local_38[0];
          pcVar14 = local_38;
          if (local_38[0] == '\0') {
            pcVar14 = &local_78;
          }
          *pcVar14 = '\0';
          if ((local_38[0] != '\0') && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar18 = local_50;
          if (plVar13 != (longlong *)0x0) {
            FUN_00d23310();
            plVar13 = local_40;
            pcVar14 = local_38;
            if (local_38[0] == '\0') {
              pcVar14 = &local_78;
            }
            local_78 = local_38[0];
            *pcVar14 = '\0';
            if ((local_38[0] != '\0') && (plVar13 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar12 = _pthread_getspecific(pVar16);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e8b990();
            local_100 = '\0';
            local_108 = (longlong *)0x0;
            FUN_00cb1fa0();
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              (**(code **)(*local_108 + 0x10))();
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (plVar13 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
          puVar11 = local_48;
          if (*(int *)((longlong)local_48 + 0xc) != 0) goto LAB_019c437c;
LAB_019c4658:
          bVar7 = 1;
          local_50 = plVar18;
        }
      }
      else {
        if (param_2 == 0) {
          uVar17 = CONCAT71((uint7)(uint3)((uint)uVar10 >> 8),1);
          goto LAB_019c4680;
        }
        local_38[0] = '\0';
        local_40 = plVar3;
        FUN_00d214d0(extraout_XMM0_Qa,*(undefined4 *)((longlong)puVar11 + 0xc));
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0xda0))();
        (**(code **)(*unaff_RDI + 0xa00))();
        pvVar12 = _pthread_getspecific(pVar16);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        FUN_00cb1f10();
        FUN_00d3af20();
        lVar15 = local_c8;
        if (local_c0 == '\0') {
          if (local_c8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c0 = '\0';
        }
        plVar18 = local_50;
        FUN_00db2790();
        if (lVar15 != 0) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
          FUN_00d50b20();
        }
        local_60 = 0;
        local_58 = (longlong *)0x0;
        if (*(int *)((longlong)puVar11 + 0xc) == 0) goto LAB_019c4658;
LAB_019c437c:
        bVar7 = 1;
        local_f0 = '\0';
        local_f8 = puVar11;
        uVar21 = FUN_012664b0();
        uVar22 = uVar21;
        if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
          uVar22 = FUN_00d50b20();
        }
        if (plVar18 == (longlong *)0x0) {
          (**(code **)(*(longlong *)unaff_RDI[0x69] + 0x60))(uVar21);
          local_50 = (longlong *)0x0;
          plVar18 = (longlong *)0x0;
        }
        else {
          local_e0 = '\0';
          local_d0 = '\0';
          local_e8 = puVar11;
          local_d8 = plVar18;
          local_50 = plVar18;
          FUN_01ca29a0(uVar22,&local_d8);
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          plVar13 = (longlong *)unaff_RDI[0x69];
          (**(code **)(*unaff_RDI + 0xa18))();
          plVar18 = local_40;
          pvVar12 = _pthread_getspecific(pVar16);
          plVar2 = local_40;
          if ((pvVar12 != (void *)0x0) && (lVar15 = FUN_00e8b990(), plVar18 = plVar2, lVar15 != 0))
          {
            plVar18 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          FUN_016c98e0();
          (**(code **)(*plVar13 + 0x60))();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar17 = CONCAT71((int7)((ulonglong)plVar18 >> 8),bVar7 != 0);
      if (((char)local_60 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_019c4680:
    FUN_00d50b20();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == (longlong *)0x0) {
LAB_019c3910:
      bVar1 = true;
    }
    else {
      plVar3 = local_68;
      if (*(int *)((longlong)local_40 + 0xc) != 0) goto LAB_019c39b7;
LAB_019c390b:
      bVar1 = false;
    }
    iVar9 = FUN_01ca3250();
    uVar17 = CONCAT71((int7)(unaff_RBX >> 8),iVar9 != 0);
    if ((iVar9 != 0) && (param_2 != 0)) {
      uVar10 = FUN_01ca3250();
      (**(code **)(&UNK_000015e0 + *unaff_RDI))(*unaff_RDI,uVar10);
      plVar3 = local_40;
      plVar18 = local_68;
      if (local_68 != local_40) {
        if (local_38[0] != '\0') {
          if (!bVar1) {
            local_68 = local_40;
            FUN_00d50b20();
          }
          goto LAB_019c39b7;
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar18 = plVar3;
        if (!bVar1) {
          local_68 = plVar3;
          FUN_00d50b20();
        }
      }
      plVar3 = plVar18;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019c39b7;
    }
  }
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_019c46b1:
  return uVar17 & 0xffffffff;
}


