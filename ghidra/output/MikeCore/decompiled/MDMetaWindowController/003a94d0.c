// Function: FUN_003a94d0
// Address: 003a94d0
// Size: 6865 bytes
// Class: MDMetaWindowController
// String references:
//   "MDMetaWindowController"


/* WARNING: Removing unreachable block (ram,0x003a9f60) */
/* WARNING: Removing unreachable block (ram,0x003a9f69) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a94d0(double param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  longlong *plVar10;
  bool bVar11;
  undefined4 uVar12;
  float fVar13;
  double dVar14;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  double local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined4 local_ac;
  longlong local_a8;
  char local_a0;
  longlong *local_90;
  uint local_88 [2];
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  undefined4 uStack_6c;
  char local_68;
  float local_5c;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *plVar15;
  char local_40;
  float local_34;
  
  lVar6 = unaff_RDI[0xf];
  local_c8 = param_1;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar6;
  FUN_00d50b00();
  local_58 = '\0';
  plVar15 = unaff_RDI;
  do {
    (**(code **)(*plVar15 + 0x370))();
    plVar9 = local_90;
    if (local_90 == plVar15) {
      if (((local_58 == '\0') && (local_90 != (longlong *)0x0)) &&
         (plVar9 = plVar15, (char)local_88[0] != '\0')) goto LAB_003a9587;
    }
    else {
      if ((char)local_88[0] == '\0') {
        if (local_58 == '\0') {
          puVar4 = (uint *)&local_58;
        }
        else {
          FUN_00d50b20();
          puVar4 = (uint *)&local_58;
        }
      }
      else {
        if (local_58 != '\0') {
          FUN_00d50b20();
        }
LAB_003a9587:
        local_58 = '\x01';
        puVar4 = local_88;
      }
      *(undefined1 *)puVar4 = 0;
      plVar15 = plVar9;
    }
    if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026fddb0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_026e0ab8 = FUN_00015ff0();
      _DAT_026e0aa0 = "MDMetaWindowController";
      _DAT_026e0aa8 = 0x198;
      _DAT_026e0ab0 = FUN_0006dea0;
      _DAT_026e0ac0 = 0;
      uRam00000000026e0ac8 = 0;
      _DAT_026e0ad0 = 0;
      _DAT_026e0b48 = 0;
      uRam00000000026e0b50 = 0;
      _DAT_026e0b58 = 0;
      DAT_026e0b5a = 1;
      _DAT_026e0ad8 = 0;
      uRam00000000026e0ae0 = 0;
      _DAT_026e0ae8 = 0;
      uRam00000000026e0af0 = 0;
      _DAT_026e0af8 = 0;
      uRam00000000026e0b00 = 0;
      _DAT_026e0b08 = 0;
      uRam00000000026e0b10 = 0;
      _DAT_026e0b18 = 0;
      uRam00000000026e0b20 = 0;
      _DAT_026e0b28 = 0;
      uRam00000000026e0b30 = 0;
      _DAT_026e0b38 = 0;
      uRam00000000026e0b40 = 0;
      DAT_026e0b63 = 0;
      _DAT_026e0b5b = 0;
      ___cxa_guard_release();
    }
    plVar9 = &DAT_02802688;
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar9 = (longlong *)&stack0xffffffffffffffb8;
      if (cVar2 == '\0') {
        plVar9 = &DAT_02802688;
      }
    }
    if (*plVar9 != 0) {
      plVar10 = plVar15;
      if ((local_58 == '\0') && (plVar15 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      goto LAB_003a96fd;
    }
  } while (plVar15 != (longlong *)0x0);
  plVar10 = (longlong *)0x0;
LAB_003a96fd:
  pVar8 = (pthread_key_t)plVar9;
  FUN_00d50b20();
  if (plVar10 == (longlong *)0x0) goto LAB_003aaf83;
  FUN_0063f230();
  plVar9 = local_90;
  if ((char)local_88[0] == '\0') {
    if (local_90 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_003a9766;
    }
  }
  else if (local_90 != (longlong *)0x0) {
LAB_003a9766:
    local_c0 = plVar9;
    FUN_0021a630();
    (**(code **)(*plVar15 + 0xa10))();
    local_b8 = local_90;
    if ((char)local_88[0] == '\0') {
      if (local_90 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_88[0] = local_88[0] & 0xffffff00;
    }
    if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_5c = 0.0;
    if (local_b8 != (longlong *)0x0) {
      pvVar5 = _pthread_getspecific(pVar8);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar8 = (pthread_key_t)local_b8;
      }
      FUN_01505900();
      if ((char)local_88[0] == '\0') {
        if (local_90 != (longlong *)0x0) {
          FUN_00d50b00();
          if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_003a9897;
        }
      }
      else if (local_90 != (longlong *)0x0) {
LAB_003a9897:
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar3 = FUN_016c2e90();
        if (iVar3 == 0) {
          local_5c = 0.0;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_016c9480(SUB84(local_c8,0));
          local_5c = (float)dVar14;
        }
        FUN_00d50b20();
      }
    }
    iVar3 = FUN_00228b30();
    if (iVar3 == 1) {
      FUN_0063f230();
      FUN_00226f20();
      plVar9 = local_90;
      if ((char)local_88[0] == '\0') {
        if (local_90 != (longlong *)0x0) {
          FUN_00d50b00();
          if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_88[0] = local_88[0] & 0xffffff00;
      }
      if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 == (longlong *)0x0) {
        local_34 = 0.0;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505900();
        plVar9 = local_90;
        if ((char)local_88[0] == '\0') {
          if (local_90 != (longlong *)0x0) {
            FUN_00d50b00();
            if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_88[0] = local_88[0] & 0xffffff00;
        }
        if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 == (longlong *)0x0) {
          local_34 = 0.0;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar3 = FUN_016c2e90();
          if (iVar3 == 0) {
            local_34 = 0.0;
          }
          else {
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pVar8 = 0x2802558;
            pvVar5 = _pthread_getspecific(0x2802558);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01656080(SUB84(local_c8,0));
            dVar14 = (double)FUN_016c9480();
            local_34 = (float)dVar14;
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
LAB_003aa202:
      if (unaff_RDI[0xf] != 0) goto LAB_003aa212;
      bVar11 = true;
    }
    else {
      iVar3 = FUN_00228b30();
      local_34 = 0.0;
      if (iVar3 != 0) goto LAB_003aa202;
      if (*(longlong *)(unaff_RDI[0xf] + 0x308) != 0) {
        FUN_0063f230();
        FUN_00261550();
        plVar9 = local_90;
        if ((char)local_88[0] == '\0') {
          if (local_90 != (longlong *)0x0) {
            FUN_00d50b00();
            if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_88[0] = local_88[0] & 0xffffff00;
        }
        if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) {
          local_88[0] = local_88[0] & 0xffffff00;
          local_90 = (longlong *)0x0;
          local_80 = plVar9;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_78._4_4_ = 0;
          local_34 = 0.0;
LAB_003a9c47:
          if (local_78._4_4_ != 0) {
            if (local_78._4_4_ < 1) {
              iVar3 = -local_78._4_4_;
            }
            else {
              iVar3 = (int)local_78 - local_78._4_4_;
              local_78 = CONCAT44(local_78._4_4_,iVar3);
              FUN_00d23690();
              local_70 = local_70 + local_78._4_4_;
              iVar3 = 0;
            }
            local_78 = CONCAT44(iVar3,(int)local_78);
          }
          lVar6 = (longlong)(int)local_78;
          iVar3 = (int)local_78 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar3);
          plVar9 = local_80;
          if (*(int *)((longlong)local_80 + 0xc) <= iVar3) goto LAB_003aac57;
          plVar9 = (longlong *)local_80[2];
          local_90 = (longlong *)plVar9[lVar6 + 1];
          pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_01653910();
          if (local_c8 < dVar14) {
LAB_003a9c44:
            goto LAB_003a9c47;
          }
          pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar14 = (double)FUN_01655350();
          if (dVar14 < local_c8) goto LAB_003a9c44;
          pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165a070();
          pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
            FUN_00d50b20();
          }
          if (plVar15 != (longlong *)0x0) {
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0165a070();
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012eb770();
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cade0();
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar7 = FUN_01505900();
            if (plVar15 == (longlong *)0x0) {
              local_ac = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = plVar15;
              if (local_40 == '\0') {
                FUN_00d50b00();
                local_ac = 0;
              }
              else {
                local_40 = '\0';
                local_ac = 0;
              }
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != 0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              FUN_00d50b20();
            }
            if (plVar10 != (longlong *)0x0) {
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar3 = FUN_016c2e90();
              if (iVar3 == 0) {
LAB_003aa0d3:
                bVar1 = false;
                bVar11 = false;
                local_34 = DAT_02390d00;
              }
              else {
                pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_016553c0(SUB84(local_c8,0));
                dVar14 = (double)FUN_016c9480();
                if (((local_34 != DAT_0239424c) ||
                    (fVar13 = (float)dVar14, NAN(local_34) || NAN(DAT_0239424c))) &&
                   (fVar13 = local_34,
                   DAT_0239011c < (float)((uint)(local_34 - (float)dVar14) & _DAT_02390140)))
                goto LAB_003aa0d3;
                local_34 = fVar13;
                bVar11 = true;
                bVar1 = true;
              }
              if ((char)local_ac == '\0') {
                FUN_00d50b20();
                bVar11 = bVar1;
              }
              if (bVar11) goto LAB_003a9c44;
              goto LAB_003aac57;
            }
          }
          local_34 = DAT_02390d00;
LAB_003aac57:
          pVar8 = (pthread_key_t)plVar9;
          FUN_00277f20();
          FUN_00d50b20();
        }
        goto LAB_003aa202;
      }
      local_34 = 0.0;
LAB_003aa212:
      FUN_00d50b00();
      bVar11 = false;
    }
    FUN_003abcc0(local_5c);
    if (!bVar11) {
      FUN_00d50b20();
    }
    bVar11 = true;
    if (*(char *)((longlong)unaff_RDI + 0xd1) == '\0') {
      FUN_0021e4e0();
      if (local_90 == (longlong *)0x0) {
        bVar11 = false;
      }
      else {
        FUN_0021e4e0();
        FUN_01c42960();
        bVar11 = plVar15 != (longlong *)0x0;
        if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        FUN_0021e4e0();
        FUN_01c42960();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016d8300();
        bVar11 = local_90 != (longlong *)0x0;
        if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar11 = false;
      }
    }
    cVar2 = FUN_01e05890();
    if (bVar11 == (bool)cVar2) {
LAB_003aa41c:
      if ((local_d0 != 0) && (*(longlong *)(local_d0 + 0x308) != 0)) {
        FUN_003abec0();
      }
      if ((local_5c == *(float *)(unaff_RDI + 0x19)) &&
         (!NAN(local_5c) && !NAN(*(float *)(unaff_RDI + 0x19)))) {
        if ((local_34 == *(float *)((longlong)unaff_RDI + 0xcc)) &&
           (!NAN(local_34) && !NAN(*(float *)((longlong)unaff_RDI + 0xcc)))) goto LAB_003aaf5e;
      }
      *(float *)(unaff_RDI + 0x19) = local_5c;
      *(float *)((longlong)unaff_RDI + 0xcc) = local_34;
      unaff_RDI[0x1b] = -0x4010000000000000;
      if ((local_5c != 0.0) || (NAN(local_5c))) {
        (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x9c8))();
        (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x998))();
        FUN_01e058a0();
        FUN_01e0cfc0();
        if ((local_34 != DAT_02390d00) || (NAN(local_34) || NAN(DAT_02390d00))) {
          fVar13 = local_34 / local_5c;
          if (((fVar13 == 0.0) && (!NAN(fVar13))) ||
             ((DAT_023b36e4 < fVar13 && (fVar13 < DAT_023b36e8)))) {
            plVar15 = (longlong *)unaff_RDI[0x12];
            (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x378))(local_5c);
            local_110 = local_90;
            local_108 = 0;
            if ((char)local_88[0] == '\0') {
              if (local_90 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88[0] = local_88[0] & 0xffffff00;
            }
            local_108 = '\x01';
            (**(code **)(*plVar15 + 0x958))();
            if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_88[0] != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_34 = local_5c;
            goto LAB_003aaa17;
          }
        }
        FUN_00d48ad0();
        FUN_00d48ac0();
        lVar6 = DAT_02705100;
        if ((local_34 != DAT_02390d00) || (NAN(local_34) || NAN(DAT_02390d00))) {
          iVar3 = FUN_00228b30();
          lVar6 = DAT_02705108;
          plVar9 = (longlong *)unaff_RDI[0x12];
          if (iVar3 == 0) {
            if (DAT_02705108 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x378))(local_5c);
            (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x378))(local_34);
            local_130 = local_a8;
            uVar12 = FUN_00083ea0(2,&local_130);
            FUN_00d93690(uVar12,&local_90);
            local_e8 = 0;
            if (local_40 == '\0') {
              if (plVar15 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_e8 = '\x01';
            local_f0 = plVar15;
            (**(code **)(*plVar9 + 0x958))();
            if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_90 = (longlong *)&DAT_0253d630;
            if ((local_68 != '\0') && (CONCAT44(uStack_6c,local_70) != 0)) {
              FUN_00d50b20();
            }
            local_90 = &DAT_024c5048;
            if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            local_5c = local_34;
          }
          else {
            if (DAT_02705108 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x378))(local_34);
            (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x378))(local_5c);
            local_130 = local_a8;
            uVar12 = FUN_00083ea0(2,&local_130);
            FUN_00d93690(uVar12,&local_90);
            local_d8 = 0;
            if (local_40 == '\0') {
              if (plVar15 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            local_d8 = '\x01';
            local_e0 = plVar15;
            (**(code **)(*plVar9 + 0x958))();
            if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_90 = (longlong *)&DAT_0253d630;
            if ((local_68 != '\0') && (CONCAT44(uStack_6c,local_70) != 0)) {
              FUN_00d50b20();
            }
            local_90 = &DAT_024c5048;
            if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          plVar9 = (longlong *)unaff_RDI[0x12];
          if (DAT_02705100 != 0) {
            FUN_00d50b00();
          }
          uVar12 = (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x378))(local_5c);
          plVar10 = (longlong *)CONCAT71(uStack_57,local_58);
          local_88[0] = 1;
          local_90 = &DAT_024c5048;
          local_78 = local_78 & 0xffffffffffffff00;
          if (plVar10 != (longlong *)0x0) {
            uVar12 = FUN_00d50b00();
          }
          local_78 = CONCAT71(local_78._1_7_,1);
          local_80 = plVar10;
          FUN_00d93690(uVar12,&local_90);
          local_f8 = 0;
          if (local_40 == '\0') {
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_f8 = '\x01';
          local_100 = plVar15;
          (**(code **)(*plVar9 + 0x958))();
          if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_90 = &DAT_024c5048;
          if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
        unaff_RDI[0x1b] = (longlong)(double)local_5c;
        FUN_00d48ac0();
      }
      else {
        (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x998))();
        FUN_01e058a0();
        FUN_01e0cfc0();
        if (local_34 <= 0.0) {
          (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x9c8))();
          lVar6 = DAT_026e3e60;
          plVar15 = (longlong *)unaff_RDI[0x12];
          if (DAT_026e3e60 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar15 + 0x968))();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x9c8))();
          FUN_00d48ad0();
          FUN_00d48ac0();
          lVar6 = DAT_027050f8;
          plVar9 = (longlong *)unaff_RDI[0x12];
          if (DAT_027050f8 != 0) {
            FUN_00d50b00();
          }
          uVar12 = (**(code **)(*(longlong *)unaff_RDI[0x18] + 0x378))(local_34);
          plVar10 = (longlong *)CONCAT71(uStack_57,local_58);
          local_88[0] = 1;
          local_90 = &DAT_024c5048;
          local_78 = local_78 & 0xffffffffffffff00;
          if (plVar10 != (longlong *)0x0) {
            uVar12 = FUN_00d50b00();
          }
          local_78 = CONCAT71(local_78._1_7_,1);
          local_80 = plVar10;
          FUN_00d93690(uVar12,&local_90);
          local_118 = 0;
          if (local_40 == '\0') {
            if (plVar15 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_118 = '\x01';
          local_120 = plVar15;
          (**(code **)(*plVar9 + 0x958))();
          if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_90 = &DAT_024c5048;
          if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          FUN_00d48ac0();
LAB_003aaa17:
          unaff_RDI[0x1b] = (longlong)(double)local_34;
        }
      }
    }
    else {
      FUN_01e058a0();
      FUN_01e0cfc0();
      (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x620))();
      if ((*(char *)((longlong)unaff_RDI + 0xd1) == '\0') || (unaff_RDI[0x1e] != 0))
      goto LAB_003aa41c;
      (**(code **)(*(longlong *)unaff_RDI[0x12] + 0x970))();
      plVar15 = (longlong *)unaff_RDI[0x1e];
      plVar9 = plVar15;
      if (plVar15 != local_90) {
        if ((char)local_88[0] == '\0') {
          if (local_90 == (longlong *)0x0) {
            plVar9 = (longlong *)0x0;
            goto LAB_003aa79e;
          }
          FUN_00d50b00();
          plVar15 = (longlong *)unaff_RDI[0x1e];
          unaff_RDI[0x1e] = (longlong)local_90;
          plVar9 = local_90;
        }
        else {
          local_88[0] = local_88[0] & 0xffffff00;
          plVar9 = local_90;
LAB_003aa79e:
          unaff_RDI[0x1e] = (longlong)plVar9;
        }
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar9 = local_90;
        }
      }
      if (((char)local_88[0] != '\0') && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e42250();
      (**(code **)(*(longlong *)unaff_RDI[0x12] + 0xab8))();
    }
LAB_003aaf5e:
    if (local_b8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_003aaf83:
  if (local_d0 != 0) {
    FUN_00d50b20();
  }
  return;
}


