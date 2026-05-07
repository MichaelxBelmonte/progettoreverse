// Function: FUN_01316d80
// Address: 01316d80
// Size: 2635 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"

uint64_t FUN_01316d80(void* param_1,uint64_t param_2,uint64_t param_3,
                      uint64_t param_4)

{
  uint uVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  uint8_t uVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t lVar9;
  undefined7 uVar10;
  byte bVar11;
  void* pVar12;
  int64_t lVar13;
  int64_t **pplVar14;
  int iVar15;
  byte unaff_SIL;
  uint64_t extraout_XMM0_Qa;
  double dVar16;
  double dVar17;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar18;
  int64_t in_stack_ffffffffffffff58;
  char in_stack_ffffffffffffff60;
  uint8_t uVar19;
  int iVar20;
  uint64_t uVar21;
  int iVar22;
  byte local_74;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  uint8_t local_31;
  
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_0124c6e0();
  if (in_stack_ffffffffffffff60 == '\0') {
    if (in_stack_ffffffffffffff58 != 0) {
      lVar9 = in_stack_ffffffffffffff58;
      uVar18 = FUN_00d50b00();
      if ((in_stack_ffffffffffffff60 != '\0') && (lVar9 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      goto LAB_01316e24;
    }
  }
  else {
    uVar18 = extraout_XMM0_Qa;
    if (in_stack_ffffffffffffff58 != 0) {
LAB_01316e24:
      uVar19 = 0;
      uVar8 = 0;
      uVar21 = 0xffffffff;
      iVar22 = 0;
      local_74 = unaff_SIL ^ 1;
      local_31 = 1;
      iVar15 = 0;
      while( true ) {
        if (iVar15 != 0) {
          if (iVar15 < 1) {
            iVar15 = -iVar15;
          }
          else {
            uVar21 = (uint64_t)(uint)((int)uVar21 - iVar15);
            FUN_00d23690(uVar18,iVar15,param_3,param_4,uVar8,uVar19,in_stack_ffffffffffffff58,uVar21
                         ,iVar22);
            iVar22 = iVar22 + iVar15;
            iVar15 = 0;
          }
          uVar21 = CONCAT44(iVar15,(int)uVar21);
        }
        iVar20 = (int)uVar21;
        iVar15 = iVar20 + 1;
        uVar21 = CONCAT44((int)(uVar21 >> 0x20),iVar15);
        if (*(int *)(in_stack_ffffffffffffff58 + 0xc) <= iVar15) break;
        lVar9 = *(int64_t *)(in_stack_ffffffffffffff58 + 0x10);
        uVar8 = *(void*)(lVar9 + 8 + (int64_t)iVar20 * 8);
        pvVar7 = _pthread_getspecific((void*)lVar9);
        pVar12 = (void*)lVar9;
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01327a50();
        lVar9 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01316f68;
          }
        }
        else if (local_60 != 0) {
LAB_01316f68:
          local_58 = '\0';
          local_60 = 0;
          local_50 = lVar9;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar15 = -local_48._4_4_;
              }
              else {
                iVar15 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar15);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar15 = 0;
              }
              local_48 = CONCAT44(iVar15,(int)local_48);
            }
            lVar9 = (int64_t)(int)local_48;
            iVar15 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar15);
            if (*(int *)(local_50 + 0xc) <= iVar15) break;
            lVar13 = *(int64_t *)(local_50 + 0x10);
            local_60 = *(int64_t *)(lVar13 + 8 + lVar9 * 8);
            pvVar7 = _pthread_getspecific((void*)lVar13);
            pVar12 = (void*)lVar13;
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            plVar2 = local_70;
            if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfdd0();
            plVar3 = local_70;
            if (local_68 == '\0') {
              if (local_70 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_013170a2;
              }
            }
            else {
LAB_013170a2:
              if ((plVar2 != (int64_t *)0x0) && (plVar3 != (int64_t *)0x0)) {
                pvVar7 = _pthread_getspecific(pVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar16 = (double)FUN_013dd200();
                pvVar7 = _pthread_getspecific(pVar12);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar17 = (double)FUN_013dd200();
                if (dVar16 <= dVar17) {
                  pvVar7 = _pthread_getspecific(pVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd0b0();
                  pvVar7 = _pthread_getspecific(pVar12);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_013dd0b0();
                }
              }
              if (plVar3 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          lVar9 = local_50;
          FUN_001150f0();
          pVar12 = (void*)lVar9;
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01328c30();
        lVar9 = local_60;
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01317278;
          }
        }
        else if (local_60 != 0) {
LAB_01317278:
          local_58 = '\0';
          local_60 = 0;
          local_50 = lVar9;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar15 = -local_48._4_4_;
              }
              else {
                iVar15 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar15);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar15 = 0;
              }
              local_48 = CONCAT44(iVar15,(int)local_48);
            }
            lVar9 = (int64_t)(int)local_48;
            iVar15 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar15);
            if (*(int *)(local_50 + 0xc) <= iVar15) break;
            local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
            pvVar7 = _pthread_getspecific((void*)*(int64_t *)(local_50 + 0x10));
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc240();
            plVar2 = local_70;
            if ((g_027c01a0 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
              g_027af248 = FUN_001016a0();
              g_027af230 = "MUSampledFunction";
              g_027af238 = 0x58;
              g_027af240 = FUN_00101650;
              g_027af250 = 0;
              ram_00000000027af258 = 0;
              g_027af260 = 0;
              ram_00000000027af268 = 0;
              g_027af270 = 0;
              ram_00000000027af278 = 0;
              g_027af280 = 0;
              ram_00000000027af288 = 0;
              g_027af290 = 0;
              ram_00000000027af298 = 0;
              g_027af2a0 = 0;
              ram_00000000027af2a8 = 0;
              g_027af2b0 = 0;
              ram_00000000027af2b8 = 0;
              g_027af2c0 = 0;
              ram_00000000027af2c8 = 0;
              g_027af2d0 = 0;
              ram_00000000027af2d8 = 0;
              g_027af2e0 = 0;
              ram_00000000027af2e8 = 0;
              g_027af2f0 = 0;
              ___cxa_guard_release();
            }
            pplVar14 = (int64_t **)&g_02802688;
            if (plVar2 != (int64_t *)0x0) {
              (**(code **)(*plVar2 + 0x360))();
              cVar5 = FUN_00e85ea0();
              pplVar14 = &local_70;
              if (cVar5 == '\0') {
                pplVar14 = (int64_t **)&g_02802688;
              }
            }
            plVar2 = *pplVar14;
            if (*(char *)(pplVar14 + 1) == '\0') {
              if (plVar2 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar14 + 1) = 0;
            }
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (int64_t *)0x0) {
              pvVar7 = _pthread_getspecific((void*)pplVar14);
              if ((pvVar7 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
                lVar9 = plVar2[9];
                if (lVar9 == 0) goto LAB_013173ec;
LAB_013173fc:
                uVar1 = *(uint *)(lVar9 + 0x18);
                pplVar14 = (int64_t **)(uint64_t)uVar1;
                uVar6 = uVar1 + 3;
                if (-1 < (int)uVar1) {
                  uVar6 = uVar1;
                }
                iVar15 = (int)uVar6 >> 2;
              }
              else {
                lVar9 = *(int64_t *)(plVar2[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4] + 0x48);
                if (lVar9 != 0) goto LAB_013173fc;
LAB_013173ec:
                iVar15 = 0;
              }
              uVar4 = local_31;
              if (iVar15 < 1) {
                uVar4 = 0;
              }
              bVar11 = 0 < iVar15 | local_74;
              if (bVar11 == 0) {
                pvVar7 = _pthread_getspecific
                                   ((void*)CONCAT71((int7)((uint64_t)pplVar14 >> 8),bVar11)
                                   );
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_00c8e690();
                plVar2 = local_70;
                if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
                    (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00c92170();
                FUN_00c92160();
                ___bzero();
                FUN_013eb890();
                uVar4 = local_31;
                if (plVar2 != (int64_t *)0x0) {
                  FUN_00d50b20();
                  uVar4 = local_31;
                }
              }
              local_31 = uVar4;
              FUN_00d50b20();
            }
          }
          lVar9 = local_50;
          FUN_0131c810();
          pVar12 = (void*)lVar9;
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar12);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar15 = FUN_01326de0();
        uVar18 = extraout_XMM0_Qa_00;
        if (iVar15 == 3) {
          pvVar7 = _pthread_getspecific(pVar12);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_0134a7d0();
          uVar18 = extraout_XMM0_Qa_01;
          if (cVar5 == '\0') {
            pvVar7 = _pthread_getspecific(pVar12);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar18 = FUN_01328c30();
            lVar9 = local_60;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                if ((local_58 != '\0') && (local_60 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_013176c2;
              }
            }
            else if (local_60 != 0) {
LAB_013176c2:
              local_58 = '\0';
              local_60 = 0;
              local_50 = lVar9;
              local_48 = 0xffffffff;
              local_40 = 0;
              while( true ) {
                lVar9 = (int64_t)(int)local_48;
                iVar15 = (int)local_48 + 1;
                local_48 = CONCAT44(local_48._4_4_,iVar15);
                if (*(int *)(local_50 + 0xc) <= iVar15) break;
                lVar13 = *(int64_t *)(local_50 + 0x10);
                local_60 = *(int64_t *)(lVar13 + 8 + lVar9 * 8);
                pvVar7 = _pthread_getspecific((void*)lVar13);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bc000();
                plVar2 = local_70;
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar4 = local_31;
                if (plVar2 == (int64_t *)0x0) {
                  uVar4 = 0;
                }
                bVar11 = plVar2 != (int64_t *)0x0 | local_74;
                if (bVar11 == 0) {
                  pvVar7 = _pthread_getspecific
                                     ((void*)CONCAT71((int7)((uint64_t)lVar13 >> 8),bVar11)
                                     );
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0134a780();
                }
                else {
                  local_31 = uVar4;
                }
                if (local_48._4_4_ != 0) {
                  if (local_48._4_4_ < 1) {
                    iVar15 = -local_48._4_4_;
                  }
                  else {
                    iVar15 = (int)local_48 - local_48._4_4_;
                    local_48._4_4_ = (int)((uint64_t)local_48 >> 0x20);
                    local_48 = CONCAT44(local_48._4_4_,iVar15);
                    FUN_00d23690();
                    local_40 = local_40 + local_48._4_4_;
                    iVar15 = 0;
                  }
                  local_48 = CONCAT44(iVar15,(int)local_48);
                }
              }
              FUN_0131c8b0();
              uVar18 = FUN_00d50b20();
            }
          }
        }
        iVar15 = (int)(uVar21 >> 0x20);
      }
      FUN_00115190();
      uVar8 = FUN_00d50b20();
      uVar10 = (undefined7)((uint64_t)uVar8 >> 8);
      goto LAB_0131781d;
    }
  }
  uVar10 = (undefined7)((uint64_t)uVar8 >> 8);
  local_31 = 1;
LAB_0131781d:
  return CONCAT71(uVar10,local_31) & 0xffffffffffffff01;
}

