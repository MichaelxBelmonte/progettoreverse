// Function: FUN_01b1e790
// Address: 01b1e790
// Size: 5963 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01b1edbf) */
/* WARNING: Removing unreachable block (ram,0x01b1edcb) */
/* WARNING: Removing unreachable block (ram,0x01b1fa52) */
/* WARNING: Removing unreachable block (ram,0x01b1fa5e) */
/* WARNING: Removing unreachable block (ram,0x01b1f2ff) */
/* WARNING: Removing unreachable block (ram,0x01b1f30b) */
/* WARNING: Removing unreachable block (ram,0x01b1f5fe) */
/* WARNING: Removing unreachable block (ram,0x01b1f60a) */

undefined8 FUN_01b1e790(pthread_key_t param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *unaff_RDI;
  undefined4 uVar11;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (param_2 == 0) goto LAB_01b1feb2;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
    *(int *)((longlong)unaff_RDI + 0x2fc) = *(int *)((longlong)unaff_RDI + 0x2fc) + 1;
  }
  if (unaff_RDI[0x52] == 0) {
    FUN_01ad3cb0();
    plVar2 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01b1e9ae;
      }
    }
    else if (local_70 != (longlong *)0x0) {
LAB_01b1e9ae:
      local_88 = plVar2;
      FUN_01caeb00();
      plVar4 = local_70;
      plVar2 = (longlong *)unaff_RDI[0x45];
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 == plVar2) {
        pvVar9 = _pthread_getspecific(param_1);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          param_1 = (pthread_key_t)local_88;
        }
        FUN_0173b790();
        pvVar9 = _pthread_getspecific(param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01caeb00();
        (**(code **)(*local_98 + 0x960))();
        local_158 = local_80;
        local_150 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_150 = '\x01';
        FUN_0176fd70();
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(param_1);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          param_1 = (pthread_key_t)local_88;
        }
        FUN_0173b6f0();
        pvVar9 = _pthread_getspecific(param_1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar10 = DAT_027e3c20;
        if (DAT_027e3c20 != 0) {
          FUN_00d50b00();
        }
        FUN_01735120();
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_017bfb00();
        plVar2 = local_70;
        if (local_68 == '\0') {
          if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
             (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68 = '\0';
        }
        if (plVar2 == (longlong *)0x0) {
LAB_01b1f4db:
          uVar11 = FUN_00d8ede0();
          local_128 = local_80;
          local_120 = 0;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              uVar11 = FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_120 = '\x01';
          FUN_017aa660(uVar11,&local_128);
          local_138 = local_70;
          local_130 = 0;
          if (local_68 == '\0') {
            if (local_70 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_130 = '\x01';
          FUN_017bf8a0();
          if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if (plVar2 == (longlong *)0x0) goto LAB_01b1fe95;
        }
        else {
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aa5e0();
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736da0();
          if (local_70 == (longlong *)0x0) {
            cVar5 = '\0';
          }
          else {
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017aa5e0();
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0173b6f0();
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01736da0();
            plVar4 = local_a8;
            lVar10 = DAT_027e3c20;
            if (DAT_027e3c20 != 0) {
              FUN_00d50b00();
            }
            cVar5 = (**(code **)(*plVar4 + 0x50))();
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') goto LAB_01b1f4db;
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017aa5e0();
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar9 = _pthread_getspecific(param_1);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            param_1 = (pthread_key_t)local_88;
          }
          FUN_0173b790();
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770c90();
          local_148 = local_98;
          local_140 = 0;
          if (local_90 == '\0') {
            if (local_98 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_140 = '\x01';
          FUN_0176fd70();
          if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      else {
        FUN_01caeb00();
        plVar4 = local_70;
        plVar2 = (longlong *)unaff_RDI[0x4a];
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 == plVar2) {
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01caeb00();
          (**(code **)(*local_98 + 0x960))();
          local_118 = local_80;
          local_110 = 0;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_110 = '\x01';
          FUN_01735c40();
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar9 = _pthread_getspecific(param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar10 = DAT_027e3c20;
          if (DAT_027e3c20 != 0) {
            FUN_00d50b00();
          }
          FUN_01735120();
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_017bfb00();
          plVar2 = local_70;
          if (local_68 == '\0') {
            if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
               (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_68 = '\0';
          }
          if (plVar2 == (longlong *)0x0) {
LAB_01b1f933:
            uVar11 = FUN_00d8ede0();
            local_e8 = local_80;
            local_e0 = 0;
            if (local_78 == '\0') {
              if (local_80 != 0) {
                uVar11 = FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_e0 = '\x01';
            FUN_017aa660(uVar11,&local_e8);
            local_f8 = local_70;
            local_f0 = 0;
            if (local_68 == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_f0 = '\x01';
            FUN_017bf8a0();
            if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if (plVar2 == (longlong *)0x0) goto LAB_01b1fe95;
          }
          else {
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017aa5e0();
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0173b6f0();
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01736da0();
            if (local_70 == (longlong *)0x0) {
              cVar5 = '\0';
            }
            else {
              pvVar9 = _pthread_getspecific(param_1);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017aa5e0();
              pvVar9 = _pthread_getspecific(param_1);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0173b6f0();
              pvVar9 = _pthread_getspecific(param_1);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01736da0();
              plVar4 = local_a8;
              lVar10 = DAT_027e3c20;
              if (DAT_027e3c20 != 0) {
                FUN_00d50b00();
              }
              cVar5 = (**(code **)(*plVar4 + 0x50))();
              if (lVar10 != 0) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar5 == '\0') goto LAB_01b1f933;
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017aa5e0();
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0173b6f0();
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0173b6f0();
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01736d70();
            local_108 = local_98;
            local_100 = 0;
            if (local_90 == '\0') {
              if (local_98 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_90 = '\0';
            }
            local_100 = '\x01';
            FUN_01735c40();
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        else {
          FUN_01caeb00();
          plVar4 = local_70;
          plVar2 = (longlong *)unaff_RDI[0x4f];
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar4 == plVar2) {
            FUN_01af1380();
            pvVar9 = _pthread_getspecific(param_1);
            if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              param_1 = (pthread_key_t)local_88;
            }
            FUN_0173b790();
            pvVar9 = _pthread_getspecific(param_1);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b0 = (float)FUN_0176f850();
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01caeb00();
            local_b4 = (float)(**(code **)(*local_70 + 0x930))();
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_ac = 0.0;
            if (local_b4 <= 0.0) {
              FUN_01b14f90();
            }
            else {
              local_ac = (float)_logf(local_b4 * DAT_02394204);
              local_b0 = (float)_logf(local_b0 * DAT_02394204);
              pvVar9 = _pthread_getspecific(param_1);
              if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                param_1 = (pthread_key_t)local_88;
              }
              FUN_0173b790();
              pvVar9 = _pthread_getspecific(param_1);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990(local_b4);
              }
              FUN_01774240(local_b4);
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_ac = local_ac * DAT_02394208 - local_b0 * DAT_02394208;
            }
            FUN_01b07460();
            *(float *)((longlong)unaff_RDI + 0x1e4) = local_ac;
            (**(code **)(*unaff_RDI + 0x620))();
            FUN_01f27fe0();
            local_160 = 0;
            (**(code **)(unaff_RDI[0x2d] + 0x10))();
            uVar11 = FUN_00d50b00();
            local_160 = '\x01';
            local_178 = 0;
            local_170 = '\0';
            local_168 = unaff_RDI + 0x2d;
            FUN_01f47190(uVar11,&local_178);
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
            if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
              (**(code **)(*local_168 + 0x10))();
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
LAB_01b1fe95:
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d3a560();
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01b1e874;
      }
LAB_01b1e917:
      bVar3 = true;
LAB_01b1e91f:
      FUN_01d3a560();
      uVar8 = FUN_01d3b590();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((uVar8 & 4) == 0) {
        (**(code **)(*unaff_RDI + 0xa68))();
      }
      else {
        (**(code **)(*unaff_RDI + 0xa68))();
      }
      if (bVar3) goto LAB_01b1fe9d;
      bVar3 = false;
    }
    else {
      if (local_70 == (longlong *)0x0) goto LAB_01b1e917;
LAB_01b1e874:
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 2) {
        iVar7 = FUN_01d3a5a0();
        if (iVar7 == 2) {
          FUN_01d3b5d0();
          FUN_00d8cbc0();
          cVar5 = FUN_00d9bcc0();
          cVar6 = '\x01';
          if (cVar5 == '\0') {
            FUN_01d3b5d0();
            FUN_00d8cbc0();
            cVar6 = FUN_00d9bc90();
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar6 != '\0') goto LAB_01b1e90b;
        }
        bVar3 = false;
        goto LAB_01b1e91f;
      }
LAB_01b1e90b:
      bVar3 = true;
      FUN_01b1dbf0();
    }
    FUN_00d50b20();
    if (bVar3) {
      FUN_01af6500();
      FUN_00d50b20();
      goto LAB_01b1feb2;
    }
  }
LAB_01b1fe9d:
  if (unaff_RDI != (longlong *)0x0) {
    FUN_01af6500();
    FUN_00d50b20();
  }
LAB_01b1feb2:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return CONCAT71((int7)((ulonglong)*(longlong *)PTR____stack_chk_guard_024a9898 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


