// Function: FUN_014d4f90
// Address: 014d4f90
// Size: 2428 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"

void* FUN_014d4f90(void* param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void* pVar8;
  int64_t **pplVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  (**(code **)(*arg1 + 0x378))();
  plVar11 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) goto LAB_014d503e;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (int64_t *)0x0) {
LAB_014d503e:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  cVar3 = (**(code **)(*arg1 + 1000))();
  if (cVar3 != '\0') {
    FUN_014bc420();
    plVar10 = local_68;
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      fVar12 = (float)(**(code **)(*arg1 + 0x3e0))();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01326de0();
      lVar6 = FUN_014bb590();
      if (*param_2 == 0) {
LAB_014d550b:
        *(void*)(this_ptr + 1) = 0;
      }
      else {
        local_40 = plVar11;
        fVar14 = *(float *)(&g_0240e4c8 + (uint64_t)(iVar4 == 3) * 4);
        local_60 = '\0';
        local_68 = (int64_t *)0x0;
        local_58 = *param_2;
        local_50 = 0xffffffff;
        local_48 = 0;
        bVar1 = false;
        local_38 = (int64_t *)0x0;
        while( true ) {
          lVar7 = (int64_t)(int)local_50;
          iVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (*(int *)(local_58 + 0xc) <= iVar4) break;
          plVar11 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar7 * 8);
          local_68 = plVar11;
          if ((g_027c0170 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            g_02790158 = FUN_007ef2d0();
            g_02790140 = "MUAudioSourcePrincipalItem";
            g_02790148 = 0x138;
            g_02790150 = FUN_010fe5c0;
            g_02790160 = 0;
            ram_0000000002790168 = 0;
            g_02790170 = 0;
            ram_0000000002790178 = 0;
            g_02790180 = 0;
            ram_0000000002790188 = 0;
            g_02790190 = 0;
            ram_0000000002790198 = 0;
            g_027901a0 = 0;
            ram_00000000027901a8 = 0;
            g_027901b0 = 0;
            ram_00000000027901b8 = 0;
            g_027901c0 = 0;
            ram_00000000027901c8 = 0;
            g_027901d0 = 0;
            ram_00000000027901d8 = 0;
            g_027901e0 = 0;
            ram_00000000027901e8 = 0;
            g_027901f0 = 0;
            ram_00000000027901f8 = 0;
            g_02790200 = 0;
            ___cxa_guard_release();
          }
          pplVar9 = (int64_t **)&g_02802688;
          if (plVar11 != (int64_t *)0x0) {
            (**(code **)(*plVar11 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar9 = &local_68;
            if (cVar3 == '\0') {
              pplVar9 = (int64_t **)&g_02802688;
            }
          }
          plVar11 = *pplVar9;
          if ((plVar11 != (int64_t *)0x0) && (plVar11 != arg1)) {
            pvVar5 = _pthread_getspecific((void*)pplVar9);
            pVar8 = (void*)pplVar9;
            plVar10 = plVar11;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar10 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            cVar3 = (**(code **)(*plVar10 + 1000))();
            if (cVar3 != '\0') {
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar3 = FUN_014bc070();
              if (cVar3 == '\0') {
                pvVar5 = _pthread_getspecific(pVar8);
                plVar10 = plVar11;
                if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar10 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
                lVar7 = (**(code **)(*plVar10 + 0x380))();
                if (lVar7 == lVar6) {
                  pvVar5 = _pthread_getspecific(pVar8);
                  plVar10 = plVar11;
                  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    plVar10 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                  }
                  fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
                  if ((float)((uint)(fVar13 - fVar12) & g_02390140) < fVar14) {
                    if (plVar11 == local_38) {
                      plVar10 = local_38;
                      bVar2 = bVar1;
                      if (!bVar1) {
                        FUN_00d50b00();
                        plVar10 = local_38;
                        bVar2 = true;
                      }
                    }
                    else {
                      FUN_00d50b00();
                      bVar2 = true;
                      plVar10 = plVar11;
                      if ((bVar1) && (local_38 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    bVar1 = bVar2;
                    local_38 = plVar10;
                    pvVar5 = _pthread_getspecific(pVar8);
                    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    fVar14 = (float)(**(code **)(*plVar11 + 0x3e0))();
                    fVar14 = (float)((uint)(fVar14 - fVar12) & g_02390140);
                  }
                }
              }
            }
          }
          if (local_50._4_4_ != 0) {
            if (local_50._4_4_ < 1) {
              iVar4 = -local_50._4_4_;
            }
            else {
              local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar4 = 0;
            }
            local_50 = CONCAT44(iVar4,(int)local_50);
          }
        }
        lVar7 = local_58;
        FUN_01481520();
        pVar8 = (void*)lVar7;
        if (local_38 == (int64_t *)0x0) {
          if (*param_2 != 0) {
            local_60 = '\0';
            local_68 = (int64_t *)0x0;
            local_58 = *param_2;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_38 = (int64_t *)0x0;
            fVar14 = g_02391078;
            while( true ) {
              lVar7 = (int64_t)(int)local_50;
              iVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              if (*(int *)(local_58 + 0xc) <= iVar4) break;
              plVar11 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar7 * 8);
              local_68 = plVar11;
              if ((g_027c0170 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                g_02790158 = FUN_007ef2d0();
                g_02790140 = "MUAudioSourcePrincipalItem";
                g_02790148 = 0x138;
                g_02790150 = FUN_010fe5c0;
                g_02790160 = 0;
                ram_0000000002790168 = 0;
                g_02790170 = 0;
                ram_0000000002790178 = 0;
                g_02790180 = 0;
                ram_0000000002790188 = 0;
                g_02790190 = 0;
                ram_0000000002790198 = 0;
                g_027901a0 = 0;
                ram_00000000027901a8 = 0;
                g_027901b0 = 0;
                ram_00000000027901b8 = 0;
                g_027901c0 = 0;
                ram_00000000027901c8 = 0;
                g_027901d0 = 0;
                ram_00000000027901d8 = 0;
                g_027901e0 = 0;
                ram_00000000027901e8 = 0;
                g_027901f0 = 0;
                ram_00000000027901f8 = 0;
                g_02790200 = 0;
                ___cxa_guard_release();
              }
              pplVar9 = (int64_t **)&g_02802688;
              if (plVar11 != (int64_t *)0x0) {
                (**(code **)(*plVar11 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar9 = &local_68;
                if (cVar3 == '\0') {
                  pplVar9 = (int64_t **)&g_02802688;
                }
              }
              plVar11 = *pplVar9;
              if ((plVar11 != (int64_t *)0x0) && (plVar11 != arg1)) {
                pvVar5 = _pthread_getspecific((void*)pplVar9);
                pVar8 = (void*)pplVar9;
                plVar10 = plVar11;
                if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar10 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
                cVar3 = (**(code **)(*plVar10 + 1000))();
                if (cVar3 != '\0') {
                  pvVar5 = _pthread_getspecific(pVar8);
                  if (pvVar5 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  cVar3 = FUN_014bc070();
                  if (cVar3 != '\0') {
                    pvVar5 = _pthread_getspecific(pVar8);
                    plVar10 = plVar11;
                    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      plVar10 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    lVar7 = (**(code **)(*plVar10 + 0x380))();
                    if (lVar7 == lVar6) {
                      pvVar5 = _pthread_getspecific(pVar8);
                      plVar10 = plVar11;
                      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                        plVar10 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                        ;
                      }
                      fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
                      if ((float)((uint)(fVar13 - fVar12) & g_02390140) < fVar14) {
                        if (plVar11 == local_38) {
                          plVar10 = local_38;
                          bVar2 = bVar1;
                          if (!bVar1) {
                            FUN_00d50b00();
                            plVar10 = local_38;
                            bVar2 = true;
                          }
                        }
                        else {
                          FUN_00d50b00();
                          bVar2 = true;
                          plVar10 = plVar11;
                          if ((bVar1) && (local_38 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        local_38 = plVar10;
                        pvVar5 = _pthread_getspecific(pVar8);
                        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                          plVar11 = (int64_t *)
                                    plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                        }
                        fVar14 = (float)(**(code **)(*plVar11 + 0x3e0))();
                        fVar14 = (float)((uint)(fVar14 - fVar12) & g_02390140);
                        bVar1 = bVar2;
                      }
                    }
                  }
                }
              }
              if (local_50._4_4_ != 0) {
                if (local_50._4_4_ < 1) {
                  iVar4 = -local_50._4_4_;
                }
                else {
                  local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
                  FUN_00d23690();
                  local_48 = local_48 + local_50._4_4_;
                  iVar4 = 0;
                }
                local_50 = CONCAT44(iVar4,(int)local_50);
              }
            }
            lVar6 = local_58;
            FUN_01481520();
            pVar8 = (void*)lVar6;
            if (local_38 != (int64_t *)0x0) goto LAB_014d5496;
            bVar2 = true;
            local_38 = (int64_t *)0x0;
            goto LAB_014d58d7;
          }
          *(void*)(this_ptr + 1) = 0;
          local_38 = (int64_t *)0x0;
          if (bVar1) goto LAB_014d5913;
        }
        else {
LAB_014d5496:
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc340();
          plVar11 = local_68;
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 != (int64_t *)0x0) {
            if (bVar1) {
              FUN_00d50b20();
            }
            goto LAB_014d550b;
          }
          bVar2 = false;
LAB_014d58d7:
          plVar11 = local_38;
          *(void*)(this_ptr + 1) = 0;
          if (bVar1) {
LAB_014d5913:
            *this_ptr = local_38;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_014d5034;
          }
          if (!bVar2) {
            FUN_00d50b00();
            *this_ptr = plVar11;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_014d5034;
          }
        }
      }
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
      goto LAB_014d5034;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_014d5034:
  FUN_00d50b20();
  return this_ptr;
}

