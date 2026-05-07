// Function: FUN_01acacb0
// Address: 01acacb0
// Size: 3153 bytes
// Class: Unknown

uint64_t FUN_01acacb0(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  int64_t *plVar9;
  void* pVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t **pplVar12;
  uint64_t uVar13;
  bool bVar14;
  bool bVar15;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  float fVar17;
  float extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint64_t uVar18;
  int64_t local_a8;
  char local_a0;
  uint64_t local_98;
  int64_t *local_88;
  int64_t *local_80;
  uint32_t local_74;
  int64_t *local_70;
  float local_64;
  uint64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pVar10 = (void*)param_1;
  FUN_01a58dc0();
  pplVar12 = &local_40;
  (**(code **)(*local_50 + 0xd40))();
  plVar9 = local_40;
  FUN_00083c20();
  if (plVar9 == (int64_t *)0x0) {
LAB_01acad21:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01acad21;
  }
  local_70 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar12 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar16 = FUN_01a58dc0();
  if (local_40 == (int64_t *)0x0) {
    bVar5 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_50))();
    uVar16 = extraout_XMM0_Da;
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    bVar5 = bVar5 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  if (bVar5 == 0) {
    if (local_70 != (int64_t *)0x0) {
      uVar16 = FUN_01a58dc0();
      if ((local_40 == (int64_t *)0x0) ||
         (iVar6 = FUN_01d3a5a0(), uVar16 = extraout_XMM0_Da_00, iVar6 != 1)) {
        bVar14 = false;
      }
      else {
        iVar6 = FUN_01d3b630();
        bVar14 = iVar6 == 1;
        uVar16 = extraout_XMM0_Da_01;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      if ((bVar14) && (*param_2 != 0)) {
        pvVar8 = _pthread_getspecific(pVar10);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_0125e930();
        plVar9 = local_40;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          FUN_01a58dc0();
          FUN_01d3abf0();
          local_98 = FUN_01e466c0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01a58dc0();
          plVar9 = local_40;
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152e3a0();
          fVar17 = (float)(**(code **)(*plVar9 + 0x938))();
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01a58dc0();
          plVar9 = local_40;
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152e3a0();
          uVar16 = (**(code **)(*plVar9 + 0x938))();
          local_88 = (int64_t *)CONCAT44(local_88._4_4_,uVar16);
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_64 = (float)local_98 - fVar17;
          if (local_88._0_4_ + g_023945a4 <= (float)local_98) {
            FUN_01a58dc0();
            plVar9 = local_40;
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152e5d0();
            uVar18 = (**(code **)(*plVar9 + 0x938))();
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
            bVar14 = true;
            local_74 = (uint32_t)CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
            if (extraout_XMM0_Da_02 + g_02390440 < (float)local_98) {
              FUN_01a58dc0();
              plVar9 = local_40;
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              pvVar8 = _pthread_getspecific(pVar10);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152e5d0();
              local_64 = (float)(**(code **)(*plVar9 + 0x938))();
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_64 = local_64 - (float)local_98;
              bVar14 = false;
              local_74 = 0;
            }
          }
          else {
            local_74 = 0;
            bVar14 = true;
          }
          FUN_0039e8b0();
          local_80 = local_40;
          if (local_38 == '\0') {
            plVar9 = param_2;
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
              plVar9 = param_2;
              if ((local_38 != '\0') && (plVar9 = param_2, local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar9 = param_2;
              }
            }
          }
          else {
            local_38 = '\0';
            plVar9 = param_2;
          }
LAB_01acb3c0:
          do {
            local_88 = plVar9;
            lVar11 = *param_1;
            cVar4 = (char)param_1[1];
            lVar1 = *arg1;
            if (lVar1 == lVar11) {
              if (cVar4 != '\0') {
                if (((char)arg1[1] == '\0') && (lVar11 != 0)) {
                  cVar4 = '\x01';
                  FUN_00d50b00();
                  goto LAB_01acb430;
                }
                goto LAB_01acb434;
              }
            }
            else {
              lVar2 = arg1[1];
              if ((cVar4 != '\0') && (lVar11 != 0)) {
                FUN_00d50b00();
              }
              *arg1 = lVar11;
              if (((char)lVar2 != '\0') && (lVar1 != 0)) {
                FUN_00d50b20();
              }
LAB_01acb430:
              *(char *)(arg1 + 1) = cVar4;
LAB_01acb434:
              lVar11 = *arg1;
            }
            if (lVar11 == 0) {
              FUN_01a58dc0();
              (**(code **)(*local_50 + 0x658))();
              plVar3 = local_40;
              plVar9 = (int64_t *)*arg1;
              if (plVar9 == local_40) {
                if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0))
                goto LAB_01acb4aa;
                if (local_38 != '\0') goto LAB_01acb4a1;
                FUN_00d50b00();
LAB_01acb4f1:
                *(void*)(arg1 + 1) = 1;
                if (*arg1 != 0) goto LAB_01acb4b2;
LAB_01acb4fe:
                bVar15 = false;
              }
              else {
                lVar1 = arg1[1];
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  *arg1 = (int64_t)plVar3;
                  if (((char)lVar1 != '\0') && (plVar9 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01acb4f1;
                }
                *arg1 = (int64_t)local_40;
                if (((char)lVar1 != '\0') && (plVar9 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01acb4a1:
                *(void*)(arg1 + 1) = 1;
                local_38 = '\0';
LAB_01acb4aa:
                if (*arg1 == 0) goto LAB_01acb4fe;
LAB_01acb4b2:
                iVar6 = FUN_01d3a5a0();
                bVar15 = iVar6 != 6;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              plVar9 = local_70;
              plVar3 = local_80;
              if (!bVar15) goto LAB_01acb89c;
            }
            iVar6 = FUN_01d3a5a0();
            plVar9 = local_88;
            if (iVar6 == 5) {
              FUN_01a58dc0();
              FUN_01d3abf0();
              uVar18 = FUN_01e466c0();
              local_98 = uVar18;
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (bVar14) {
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01507970();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01a58dc0();
                (**(code **)(*local_40 + 0x930))((float)local_98 - local_64);
                plVar9 = (int64_t *)FUN_01a8fc90();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0152ebe0();
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01508610();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01a58dc0();
                (**(code **)(*local_40 + 0x930))((float)local_98 + local_64);
                plVar9 = (int64_t *)FUN_01a8fc90();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_40 = plVar9;
              FUN_00e7b970();
              plVar9 = local_40;
              local_50 = local_40;
              local_40 = (int64_t *)FUN_00e7bdb0();
              local_50._4_4_ = (int)((uint64_t)plVar9 >> 0x20);
              uVar16 = extraout_XMM0_Da_03;
              local_50 = plVar9;
              if ((local_50._4_4_ != 0) && ((uint64_t)local_40 >> 0x20 != 0)) {
                cVar4 = FUN_00e7c000();
                uVar16 = extraout_XMM0_Da_04;
                plVar9 = local_88;
                if (cVar4 != '\0') goto LAB_01acb3c0;
              }
              if (bVar14) {
                FUN_01acbed0();
                plVar9 = local_88;
              }
              else {
                FUN_01acce90(uVar16,0);
                plVar9 = local_88;
              }
            }
          } while( true );
        }
      }
    }
    local_a8 = *param_2;
    local_a0 = '\0';
    uVar7 = FUN_01a58d30(uVar16,&local_a8);
    plVar9 = local_70;
    uVar13 = (uint64_t)uVar7;
    local_98 = CONCAT44(local_98._4_4_,(float)local_98);
    if ((local_a0 != '\0') && (local_98 = CONCAT44(local_98._4_4_,(float)local_98), local_a8 != 0))
    {
      FUN_00d50b20();
    }
  }
  else {
    uVar13 = 0;
    plVar9 = local_70;
    local_98 = CONCAT44(local_98._4_4_,(float)local_98);
  }
LAB_01acb13d:
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar13 & 0xffffffff;
LAB_01acb89c:
  if (*param_1 != 0) {
    *param_1 = 0;
    if ((char)param_1[1] != '\0') {
      FUN_00d50b20();
    }
    *(void*)(param_1 + 1) = 0;
  }
  uVar13 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01acb13d;
}

