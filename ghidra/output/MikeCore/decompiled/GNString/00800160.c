// Function: FUN_00800160
// Address: 00800160
// Size: 4998 bytes
// Class: GNString
// String references:
//   "%I %%"
//   "%I %% - %I %%"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x00800a78) */
/* WARNING: Removing unreachable block (ram,0x00800a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00800160(void)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  byte bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  void *pvVar11;
  longlong *plVar12;
  pthread_key_t pVar13;
  longlong **pplVar14;
  int iVar15;
  longlong unaff_RDI;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  undefined4 uVar22;
  float fVar23;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  undefined8 *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  undefined8 *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  undefined8 *local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  uint local_c0;
  int local_bc;
  longlong local_b8;
  uint local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  char local_80;
  uint local_74;
  double local_68;
  undefined4 local_5c;
  longlong *local_58;
  uint local_50;
  int local_4c;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  puVar4 = DAT_026e1810;
  if (DAT_026e1810 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  dVar2 = (double)FUN_00e7d6f0();
  uVar8 = (ulonglong)(dVar2 * DAT_023907c0);
  dVar2 = dVar2 * DAT_023907c0 - _DAT_023907c8;
  uVar22 = FUN_0071a120();
  if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    uVar22 = FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar22 = FUN_00d50b20();
    }
  }
  bVar6 = (byte)(((longlong)dVar2 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
  local_c8 = puVar4;
  local_c0 = local_c0 & 0xffffff00;
  FUN_000175c0(uVar22,&local_c8);
  plVar19 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if (((char)local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar19 != (longlong *)0x0) {
    local_50 = local_50 & 0xffffff00;
    local_58 = plVar19;
    bVar6 = FUN_00c70bc0();
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar19 != (longlong *)0x0 & bVar6) == 0) {
    if ((*(longlong **)(unaff_RDI + 0xd8) != (longlong *)0x0) &&
       ((**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x478))(),
       *(longlong *)(unaff_RDI + 0xd8) != 0)) {
      *(undefined8 *)(unaff_RDI + 0xd8) = 0;
      FUN_00d50b20();
    }
    if ((*(longlong **)(unaff_RDI + 0xa0) != (longlong *)0x0) &&
       ((**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x478))(),
       *(longlong *)(unaff_RDI + 0xa0) != 0)) {
      *(undefined8 *)(unaff_RDI + 0xa0) = 0;
      FUN_00d50b20();
    }
    if ((*(longlong **)(unaff_RDI + 0xb0) != (longlong *)0x0) &&
       ((**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x478))(),
       *(longlong *)(unaff_RDI + 0xb0) != 0)) {
      *(undefined8 *)(unaff_RDI + 0xb0) = 0;
      FUN_00d50b20();
    }
  }
  local_98 = (longlong *)0x0;
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x998))();
  FUN_00364b20();
  local_98 = local_58;
  bVar21 = local_58 == (longlong *)0x0;
  if (bVar21) {
    bVar3 = false;
    local_98 = (longlong *)0x0;
  }
  else {
    if ((char)local_50 == '\0') {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(int *)((longlong)local_98 + 0xc) != 0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
      uVar17 = *(uint *)((longlong)local_98 + 0xc);
      if ((int)uVar17 < 1) {
        local_d0 = DAT_0238fee8;
        local_68 = 0.0;
        local_a8 = 0;
        lVar16 = 0;
        local_90 = (longlong *)0x0;
      }
      else {
        lVar20 = (ulonglong)uVar17 + 1;
        uVar17 = uVar17 - 1;
        local_d0 = DAT_0238fee8;
        local_90 = (longlong *)0x0;
        lVar16 = 0;
        local_68 = 0.0;
        local_a8 = 0;
        do {
          while( true ) {
            lVar9 = local_98[2];
            lVar1 = *(longlong *)(lVar9 + (ulonglong)uVar17 * 8);
            pVar13 = uVar17;
            local_a0 = lVar16;
            if (lVar16 == lVar1) {
              if (((char)local_a8 == '\0') && (lVar16 != 0)) {
                local_a8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (lVar1 != 0) {
                lVar9 = FUN_00d50b00();
              }
              if (((char)local_a8 == '\0') || (local_a0 == 0)) {
                local_a8 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
                local_a0 = lVar1;
              }
              else {
                local_a0 = lVar1;
                uVar10 = FUN_00d50b20();
                local_a8 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
              }
            }
            lVar16 = local_a0;
            pvVar11 = _pthread_getspecific(pVar13);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            plVar19 = local_58;
            if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar19 != (longlong *)0x0) break;
            FUN_00d23620();
LAB_0080049f:
            lVar20 = lVar20 + -1;
            uVar17 = uVar17 - 1;
            if (lVar20 < 2) goto LAB_00800782;
          }
          pvVar11 = _pthread_getspecific(pVar13);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar11 = _pthread_getspecific(pVar13);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_d8 = (longlong *)FUN_0152e810();
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar11 = _pthread_getspecific(pVar13);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar11 = _pthread_getspecific(pVar13);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar7 = FUN_0152e870();
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar19 = local_d8;
          if ((double)local_d0 <= (double)local_d8) {
            plVar19 = local_d0;
          }
          local_68 = local_68 + (double)local_d8;
          plVar12 = local_d8;
          if ((double)local_d8 <= (double)local_90) {
            plVar12 = local_90;
          }
          local_d0 = plVar19;
          if (cVar7 != '\0') {
            local_d8 = plVar12;
            (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x998))();
            local_90 = local_d8;
            goto LAB_0080049f;
          }
          lVar20 = lVar20 + -1;
          uVar17 = uVar17 - 1;
          local_90 = plVar12;
        } while (1 < lVar20);
LAB_00800782:
        uVar17 = *(uint *)((longlong)local_98 + 0xc);
      }
      local_a0 = lVar16;
      (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x928))
                ((float)(local_68 / (double)(int)uVar17));
      plVar19 = *(longlong **)(unaff_RDI + 0x98);
      if (((double)local_d0 != (double)local_90) || (NAN((double)local_d0) || NAN((double)local_90))
         ) {
        local_4c = (int)((double)local_d0 * DAT_023934d0);
        pVar13 = (pthread_key_t)((double)local_90 * DAT_023934d0);
        local_50 = 2;
        local_58 = (longlong *)&DAT_024c3df0;
        local_48 = (longlong *)CONCAT44(local_48._4_4_,pVar13);
        FUN_00d8cb40(pVar13,&local_58);
        local_108 = local_c8;
        local_100 = 0;
        if ((char)local_c0 == '\0') {
          if (local_c8 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c0 = local_c0 & 0xffffff00;
        }
        local_100 = '\x01';
        (**(code **)(*plVar19 + 0x968))();
        if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_bc = (int)((local_68 / (double)(int)uVar17) * DAT_023934d0);
        local_c0 = 1;
        pVar13 = 0x24cc6f0;
        local_c8 = &DAT_024cc6f0;
        FUN_00d8cb40(&DAT_024cc6f0,&local_c8);
        local_118 = local_58;
        local_110 = 0;
        if ((char)local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
        }
        local_110 = '\x01';
        (**(code **)(*plVar19 + 0x968))();
        if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x918))();
      if (*(longlong *)(unaff_RDI + 0xc0) == 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0xad8))(_DAT_023b84e0);
      }
      *(undefined1 *)(unaff_RDI + 200) = 0;
      FUN_012e74e0();
      plVar19 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_50 = local_50 & 0xffffff00;
      }
      local_d8 = plVar19;
      if (*(longlong *)(unaff_RDI + 0xb8) == 0) {
LAB_00800c48:
        local_5c = 0;
      }
      else {
        FUN_01e40eb0();
        plVar12 = local_58;
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar12 == (longlong *)0x0) goto LAB_00800c48;
        if (*(longlong *)(unaff_RDI + 0xc0) == 0) {
          (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x478))();
          FUN_00d50130();
          if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
            *(undefined8 *)(unaff_RDI + 0xb8) = 0;
            FUN_00d50b20();
          }
          goto LAB_00800c48;
        }
        plVar12 = (longlong *)FUN_00e8fc40();
        FUN_001d7da0();
        (**(code **)(*plVar12 + 0x18))();
        if (*(int *)((longlong)local_98 + 0xc) == 0) {
          local_74 = 0xffffffff;
          local_5c = 0;
        }
        else {
          pvVar11 = _pthread_getspecific(pVar13);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb110();
          pvVar11 = _pthread_getspecific(pVar13);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          local_f8 = local_c8;
          local_f0 = 0;
          if ((char)local_c0 == '\0') {
            if (local_c8 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = local_c0 & 0xffffff00;
          }
          local_f0 = '\x01';
          FUN_012fc0c0();
          plVar5 = local_58;
          if ((char)local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
              if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_50 = local_50 & 0xffffff00;
          }
          if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_e8 = plVar5;
          FUN_00d6f370();
          local_178 = DAT_0272fba8;
          if (DAT_0272fba8 != 0) {
            FUN_00d50b00();
          }
          local_170 = '\x01';
          local_168 = 0;
          local_160 = '\0';
          pplVar14 = &local_58;
          FUN_00d704d0(&local_168,&local_178);
          plVar5 = local_58;
          if ((DAT_026fd0c0 == '\0') && (iVar18 = ___cxa_guard_acquire(), iVar18 != 0)) {
            _DAT_026d5e58 = FUN_00d4fe50();
            DAT_026d5e40 = "GNString";
            _DAT_026d5e48 = 0x40;
            _DAT_026d5e50 = FUN_0005d920;
            _DAT_026d5e60 = 0;
            uRam00000000026d5e68 = 0;
            _DAT_026d5e70 = 0;
            uRam00000000026d5e78 = 0;
            _DAT_026d5e80 = 0;
            uRam00000000026d5e88 = 0;
            _DAT_026d5e90 = 0;
            uRam00000000026d5e98 = 0;
            _DAT_026d5ea0 = 0;
            uRam00000000026d5ea8 = 0;
            _DAT_026d5eb0 = 0;
            uRam00000000026d5eb8 = 0;
            _DAT_026d5ec0 = 0;
            uRam00000000026d5ec8 = 0;
            _DAT_026d5ed0 = 0;
            uRam00000000026d5ed8 = 0;
            _DAT_026d5ee0 = 0;
            uRam00000000026d5ee8 = 0;
            _DAT_026d5ef0 = 0;
            uRam00000000026d5ef8 = 0;
            _DAT_026d5f00 = 0;
            ___cxa_guard_release();
            plVar19 = local_d8;
          }
          if (plVar5 == (longlong *)0x0) {
            pplVar14 = (longlong **)&DAT_02802688;
          }
          else {
            (**(code **)(*plVar5 + 0x360))();
            cVar7 = FUN_00e85ea0();
            if (cVar7 == '\0') {
              pplVar14 = (longlong **)&DAT_02802688;
            }
          }
          lVar16 = local_a0;
          local_e0 = *pplVar14;
          if (*(char *)(pplVar14 + 1) == '\0') {
            if (local_e0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar14 + 1) = 0;
          }
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if (((char)local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (local_e8 == (longlong *)0x0) {
LAB_008013b9:
            local_74 = 0xffffffff;
            local_5c = 0;
          }
          else {
            local_c0 = local_c0 & 0xffffff00;
            local_c8 = (undefined8 *)0x0;
            local_b8 = local_e8[2];
            local_b0 = 0;
            if (*(int *)(local_b8 + 0xc) < 1) goto LAB_008013b9;
            local_74 = 0xffffffff;
            local_5c = 0;
            do {
              local_c8 = *(undefined8 **)
                          (*(longlong *)(local_b8 + 0x10) + (longlong)(int)local_b0 * 8);
              FUN_00801e90(*(longlong *)(local_b8 + 0x10),&local_c8);
              local_90 = local_58;
              if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b00();
                if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_158 = local_c8;
              local_150 = '\0';
              local_148 = 0;
              local_140 = '\0';
              uVar22 = FUN_01d5d9b0();
              if ((local_140 != '\0') && (local_148 != 0)) {
                uVar22 = FUN_00d50b20();
              }
              if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
                uVar22 = FUN_00d50b20();
              }
              if (local_90 == (longlong *)0x0) {
LAB_008012e3:
                local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
              }
              else {
                local_50 = local_50 & 0xffffff00;
                local_58 = (longlong *)0x0;
                local_48 = local_90;
                local_40 = 0xffffffff;
                local_38 = 0;
                local_d0 = (longlong *)CONCAT44(local_d0._4_4_,0xffffff01);
                local_40._4_4_ = 0;
                iVar18 = 0;
                while( true ) {
                  if (local_40._4_4_ != 0) {
                    if (local_40._4_4_ < 1) {
                      iVar15 = -local_40._4_4_;
                    }
                    else {
                      iVar15 = (int)local_40 - local_40._4_4_;
                      local_40 = CONCAT44(local_40._4_4_,iVar15);
                      FUN_00d23690();
                      local_38 = local_38 + local_40._4_4_;
                      iVar15 = 0;
                    }
                    local_40 = CONCAT44(iVar15,(int)local_40);
                  }
                  lVar20 = (longlong)(int)local_40;
                  iVar15 = (int)local_40 + 1;
                  local_40 = CONCAT44(local_40._4_4_,iVar15);
                  if (*(int *)((longlong)local_48 + 0xc) <= iVar15) goto LAB_008012ce;
                  lVar9 = local_48[2];
                  local_88 = *(longlong **)(lVar9 + 8 + lVar20 * 8);
                  local_80 = '\0';
                  local_58 = local_88;
                  cVar7 = FUN_00d23d70();
                  pVar13 = (pthread_key_t)lVar9;
                  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar7 != '\0') break;
                  pvVar11 = _pthread_getspecific(pVar13);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012eb770();
                  plVar19 = local_88;
                  if (local_80 == '\0') {
                    if (local_88 != (longlong *)0x0) {
                      FUN_00d50b00();
                      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_008011e0;
                    }
                    bVar21 = true;
LAB_00801239:
                    pvVar11 = _pthread_getspecific(pVar13);
                    if (pvVar11 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012e5ae0();
                    iVar18 = iVar18 + *(int *)((longlong)local_88 + 0xc);
                    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    lVar16 = local_a0;
                    if (!bVar21) {
                      bVar21 = false;
                      goto LAB_008012a3;
                    }
                  }
                  else {
                    if (local_88 == (longlong *)0x0) {
                      bVar21 = true;
                      goto LAB_00801239;
                    }
LAB_008011e0:
                    local_80 = '\0';
                    local_88 = plVar19;
                    cVar7 = FUN_00d23d70();
                    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    bVar21 = false;
                    if (cVar7 == '\0') goto LAB_00801239;
                    bVar21 = true;
                    local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
LAB_008012a3:
                    lVar16 = local_a0;
                    FUN_00d50b20();
                    if (bVar21) goto LAB_008012ce;
                  }
                }
                local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
LAB_008012ce:
                uVar22 = FUN_000be170();
                plVar19 = local_d8;
                if (iVar18 == 0) goto LAB_008012e3;
              }
              FUN_01d5b240(uVar22,local_b0);
              uVar8 = FUN_01d65260();
              if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                uVar8 = FUN_00d50b20();
              }
              if (((ulonglong)local_d0 & 1) != 0) {
                if (local_74 == 0xffffffff) {
                  uVar8 = (ulonglong)local_b0;
                  local_74 = local_b0;
                }
                local_5c = (undefined4)CONCAT71((int7)(uVar8 >> 8),1);
                if (local_e0 != (longlong *)0x0) {
                  local_138 = local_c8;
                  local_130 = '\0';
                  cVar7 = (**(code **)(*local_e0 + 0x50))();
                  if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (cVar7 != '\0') {
                    local_74 = local_b0;
                  }
                }
              }
              if (local_90 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              local_b0 = local_b0 + 1;
            } while ((int)local_b0 < *(int *)(local_b8 + 0xc));
            if (((char)local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (local_e0 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_e8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        local_120 = '\0';
        local_128 = plVar12;
        FUN_01d6ed60();
        if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_74 != 0xffffffff) {
          (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
        }
        (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x998))();
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      fVar23 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0xae0))();
      if (DAT_023908ec <= fVar23) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0xb10))(fVar23,9);
        (**(code **)(*local_58 + 0x998))(local_5c);
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar19 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      bVar3 = true;
      bVar21 = false;
      if (((char)local_a8 != '\0') && (bVar21 = false, lVar16 != 0)) {
        FUN_00d50b20();
        bVar21 = false;
      }
      goto LAB_00800cdf;
    }
    bVar3 = true;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x998))();
LAB_00800cdf:
  if ((bVar3) && (!bVar21)) {
    FUN_00d50b20();
  }
  return;
}


