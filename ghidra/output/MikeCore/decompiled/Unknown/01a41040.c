// Function: FUN_01a41040
// Address: 01a41040
// Size: 2971 bytes
// Class: Unknown


void FUN_01a41040(double param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong *plVar7;
  pthread_key_t pVar8;
  longlong lVar9;
  char *pcVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 *unaff_RDI;
  undefined7 uVar14;
  double dVar13;
  longlong *plVar15;
  double dVar16;
  longlong *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  undefined8 *local_100;
  char local_f8;
  undefined4 local_ec;
  double local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  double local_c0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  undefined8 *local_90;
  undefined8 local_88;
  int local_80;
  longlong *local_78;
  char local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong *local_58;
  double local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  local_c0 = param_1;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x2572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  local_60 = puVar2;
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    dVar13 = 0.0;
    plVar11 = (longlong *)0x0;
  }
  else {
    local_98 = '\0';
    local_a0 = (longlong *)0x0;
    local_88 = 0xffffffff;
    local_80 = 0;
    dVar13 = 0.0;
    local_58 = (longlong *)0x0;
    local_ec = param_3;
    local_90 = (undefined8 *)*param_2;
    local_88._4_4_ = 0;
    while( true ) {
      if (local_88._4_4_ != 0) {
        if (local_88._4_4_ < 1) {
          iVar12 = -local_88._4_4_;
        }
        else {
          iVar12 = (int)local_88 - local_88._4_4_;
          local_88 = CONCAT44(local_88._4_4_,iVar12);
          FUN_00d23690();
          local_80 = local_80 + local_88._4_4_;
          iVar12 = 0;
        }
        local_88 = CONCAT44(iVar12,(int)local_88);
      }
      lVar3 = (longlong)(int)local_88;
      iVar12 = (int)local_88 + 1;
      local_88 = CONCAT44(local_88._4_4_,iVar12);
      if (*(int *)((longlong)local_90 + 0xc) <= iVar12) break;
      lVar9 = local_90[2];
      local_a0 = *(longlong **)(lVar9 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar9);
      pVar8 = (pthread_key_t)lVar9;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_01274b60();
      plVar11 = local_40;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
      plVar15 = local_a0;
      if (plVar11 == (longlong *)0x0) {
        if (local_a0 == (longlong *)0x0) {
          local_68 = 0;
          plVar15 = (longlong *)0x0;
        }
        else {
          if (local_98 == '\0') {
            local_68 = 0;
            uVar5 = FUN_00d50b00();
          }
          else {
            local_98 = '\0';
          }
          local_68 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
        local_50 = local_c0;
      }
      else {
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_01274b60();
        plVar15 = local_40;
        if (local_40 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
          local_68 = 0;
        }
        else {
          local_68 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          if (((local_38[0] == '\0') && (FUN_00d50b00(), local_38[0] != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_50 = (double)FUN_012f8e60(local_c0);
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar4 = _pthread_getspecific(pVar8);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar16 = (double)FUN_0125a280();
      if (dVar16 < local_50) {
        pvVar4 = _pthread_getspecific(pVar8);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar16 = (double)FUN_01259520();
        if (local_50 < dVar16) {
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          plVar11 = local_40;
          local_48[0] = local_38[0];
          pcVar10 = local_48;
          pcVar6 = local_38;
          if (local_38[0] == '\0') {
            pcVar6 = pcVar10;
          }
          *pcVar6 = '\0';
          if ((local_38[0] != '\0') && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_b8 = plVar11;
          pVar8 = (pthread_key_t)pcVar10;
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e8 = (double)FUN_0125a280();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264180();
          plVar11 = local_40;
          pvVar4 = _pthread_getspecific(pVar8);
          plVar7 = local_40;
          if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), plVar11 = plVar7, lVar3 != 0)) {
            plVar11 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          local_50 = (double)(**(code **)(*plVar11 + 0x380))(local_50 - local_e8);
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e8 = (double)FUN_013de8d0();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar16 = (double)FUN_01327990();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_128 = '\0';
          local_120 = 0;
          local_118 = '\0';
          pVar8 = (pthread_key_t)&local_120;
          local_130 = plVar15;
          FUN_01320250((local_50 + local_e8) * dVar16,&local_130);
          plVar11 = local_40;
          uVar14 = (undefined7)((ulonglong)dVar13 >> 8);
          if (local_40 == local_58) {
            plVar11 = local_58;
            if ((SUB81(dVar13,0) == '\0') && (local_40 != (longlong *)0x0)) {
              if (local_38[0] != '\0') goto LAB_01a41662;
              FUN_00d50b00();
LAB_01a416ce:
              dVar13 = (double)CONCAT71(uVar14,1);
              plVar11 = local_58;
            }
joined_r0x01a4198d:
            local_58 = plVar11;
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_38[0] == '\0') {
              local_50 = dVar13;
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              dVar13 = (double)CONCAT71(uVar14,1);
              if ((local_50._0_1_ != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
                local_58 = plVar11;
                goto LAB_01a416ce;
              }
              goto joined_r0x01a4198d;
            }
            if ((SUB81(dVar13,0) != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a41662:
            local_38[0] = '\0';
            dVar13 = (double)CONCAT71(uVar14,1);
            local_58 = plVar11;
          }
          if ((local_118 != '\0') && (local_120 != 0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01274b60();
          plVar11 = local_40;
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            plVar11 = (longlong *)*unaff_RDI;
            local_110 = local_a0;
            local_108 = '\0';
            local_50 = dVar13;
            uVar5 = FUN_0039e8b0();
            local_b0 = local_78;
            local_a8 = 0;
            if (local_70 == '\0') {
              if (local_78 != (longlong *)0x0) {
                uVar5 = FUN_00d50b00();
              }
            }
            else {
              local_70 = '\0';
            }
            dVar13 = local_50;
            local_a8 = '\x01';
            (**(code **)(*plVar11 + 0xe60))(uVar5,&local_b0);
            plVar11 = (longlong *)local_58[6];
            plVar7 = plVar11;
            if (plVar11 != local_40) {
              if (local_38[0] == '\0') {
                if (local_40 == (longlong *)0x0) {
                  plVar7 = (longlong *)0x0;
                }
                else {
                  FUN_00d50b00();
                  plVar11 = (longlong *)local_58[6];
                  plVar7 = local_40;
                }
              }
              else {
                local_38[0] = '\0';
                plVar7 = local_40;
              }
              local_58[6] = (longlong)plVar7;
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
                plVar7 = local_40;
              }
            }
            if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          plVar11 = local_b8;
          local_40 = local_58;
          local_38[0] = '\0';
          FUN_00d21140();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_40 = local_a0;
          local_38[0] = '\0';
          FUN_00d23f50();
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48[0] != '\0') && (plVar11 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (((char)local_68 != '\0') && (plVar15 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    puVar2 = local_90;
    FUN_001159b0();
    pVar8 = (pthread_key_t)puVar2;
    plVar11 = local_58;
  }
  puVar2 = local_60;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_f8 = '\0';
  local_100 = puVar2;
  FUN_01364f70();
  if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    local_98 = '\0';
    local_a0 = (longlong *)0x0;
    local_80 = 0;
    local_88 = 0;
    local_90 = puVar2;
    local_58 = plVar11;
    local_50 = dVar13;
    if (0 < *(int *)((longlong)puVar2 + 0xc)) {
      lVar3 = 0;
      do {
        plVar11 = *(longlong **)(puVar2[2] + lVar3 * 8);
        plVar15 = (longlong *)*unaff_RDI;
        local_d8 = 0;
        lVar9 = plVar11[5];
        local_a0 = plVar11;
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        local_d8 = '\x01';
        local_c8 = 0;
        lVar1 = plVar11[6];
        local_e0 = lVar9;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_c8 = '\x01';
        local_d0 = lVar1;
        (**(code **)(*plVar15 + 0xe50))(&local_d0,&local_e0);
        plVar11 = local_78;
        if (local_70 == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_40 = plVar11;
        local_38[0] = '\0';
        FUN_00d23480();
        puVar2 = local_60;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
        local_88 = CONCAT44(local_88._4_4_,(int)lVar3);
      } while ((int)lVar3 < *(int *)((longlong)puVar2 + 0xc));
    }
    FUN_01954b60();
    dVar13 = local_50;
    plVar11 = local_58;
  }
  if ((SUB81(dVar13,0) != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


