// Function: FUN_01677b30
// Address: 01677b30
// Size: 3614 bytes
// Class: GNUni


void FUN_01677b30(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong lVar4;
  pthread_key_t in_ECX;
  pthread_key_t pVar5;
  int iVar6;
  longlong *plVar7;
  byte unaff_SIL;
  longlong *plVar8;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  uint local_38;
  
  bVar11 = true;
  local_38 = (uint)unaff_SIL;
  local_58 = param_2;
  local_50 = param_1;
  if (!NAN((double)param_1)) {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01265b80();
    iVar6 = *(int *)((longlong)local_80 + 0xc);
    if (local_78 != '\0') {
      FUN_00d50b20();
    }
    if (iVar6 != 0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      local_98 = plVar3;
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_0125a280();
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      plVar7 = local_80;
      pvVar2 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar8, lVar4 != 0)) {
        plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      local_50 = (longlong *)((double)local_50 - dVar12);
      dVar12 = (double)(**(code **)(*plVar7 + 0x3d8))(local_50,1);
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      plVar7 = local_80;
      pvVar2 = _pthread_getspecific(in_ECX);
      plVar8 = local_80;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar8, lVar4 != 0)) {
        plVar7 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      dVar13 = (double)(**(code **)(*plVar7 + 0x3d8))((double)local_50 + (double)local_58);
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b80();
      plVar7 = local_80;
      if (local_78 == '\0') {
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01677e31;
        }
      }
      else if (local_80 != (longlong *)0x0) {
LAB_01677e31:
        local_78 = 0;
        local_80 = (longlong *)0x0;
        local_70 = plVar7;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar6 = -local_68._4_4_;
            }
            else {
              iVar6 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar6);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar6 = 0;
            }
            local_68 = CONCAT44(iVar6,(int)local_68);
          }
          lVar4 = (longlong)(int)local_68;
          iVar6 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar6);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar6) break;
          plVar7 = (longlong *)local_70[2];
          local_80 = (longlong *)plVar7[lVar4 + 1];
          pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef460();
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01677f60;
            }
          }
          else if (local_48 != (longlong *)0x0) {
LAB_01677f60:
            pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd710();
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                local_50 = local_48;
                FUN_00d50b00();
                if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01678000;
              }
            }
            else {
              local_50 = local_48;
              if (local_48 != (longlong *)0x0) {
LAB_01678000:
                pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dd6a0();
                local_58 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != (longlong *)0x0) {
                    FUN_00d50b00();
                    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01678090;
                  }
                }
                else if (local_48 != (longlong *)0x0) {
LAB_01678090:
                  pvVar2 = _pthread_getspecific((pthread_key_t)plVar7);
                  plVar8 = local_58;
                  if ((pvVar2 != (void *)0x0) &&
                     (lVar4 = FUN_00e8b990(), plVar8 = local_58, lVar4 != 0)) {
                    plVar7 = local_58;
                    plVar8 = (longlong *)local_58[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                  }
                  pVar5 = (pthread_key_t)plVar7;
                  cVar1 = (**(code **)(*plVar8 + 0x3d8))();
                  if (cVar1 != '\0') {
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_014bc000();
                    plVar7 = local_48;
                    if (local_40 == '\0') {
                      if (local_48 == (longlong *)0x0) goto LAB_0167815b;
                      FUN_00d50b00();
                      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else if (local_48 == (longlong *)0x0) {
LAB_0167815b:
                      pvVar2 = _pthread_getspecific(pVar5);
                      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                        pVar5 = (pthread_key_t)local_50;
                      }
                      FUN_013df6b0();
                      if ((((local_48 != (longlong *)0x0) && (plVar7 = local_48, local_40 == '\0'))
                          && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    pvVar2 = _pthread_getspecific(pVar5);
                    if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                      pVar5 = (pthread_key_t)local_50;
                    }
                    dVar14 = (double)FUN_013de8d0();
                    pvVar2 = _pthread_getspecific(pVar5);
                    if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                      pVar5 = (pthread_key_t)local_50;
                    }
                    dVar15 = (double)FUN_013de8d0();
                    pvVar2 = _pthread_getspecific(pVar5);
                    plVar3 = plVar7;
                    if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                      plVar3 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                    }
                    dVar16 = (double)(**(code **)(*plVar3 + 0x370))();
                    pvVar2 = _pthread_getspecific(pVar5);
                    plVar3 = plVar7;
                    if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                      plVar3 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                    }
                    dVar17 = (double)(**(code **)(*plVar3 + 0x370))();
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_a8 = FUN_014bb8c0();
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar4 = FUN_014bb8a0();
                    pvVar2 = _pthread_getspecific(pVar5);
                    if (pvVar2 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_01266fe0();
                    plVar3 = local_48;
                    if (local_40 == '\0') {
                      if (local_48 == (longlong *)0x0) goto LAB_016783fa;
                      FUN_00d50b00();
                      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else if (local_48 == (longlong *)0x0) {
LAB_016783fa:
                      pvVar2 = _pthread_getspecific(pVar5);
                      if (pvVar2 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01264970();
                      plVar8 = local_48;
                      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar8 != (longlong *)0x0) {
                        pvVar2 = _pthread_getspecific(pVar5);
                        if (pvVar2 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_01264970();
                        plVar8 = (longlong *)local_48[5];
                        if (plVar8 != (longlong *)0x0) {
                          FUN_00d50b00();
                          plVar3 = plVar8;
                        }
                        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    local_a0 = plVar3;
                    if (plVar3 != (longlong *)0x0) {
                      pvVar2 = _pthread_getspecific(pVar5);
                      if (pvVar2 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_012e78c0();
                      plVar3 = local_48;
                      if (local_40 == '\0') {
                        if (local_48 != (longlong *)0x0) {
                          FUN_00d50b00();
                          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          goto LAB_01678563;
                        }
                      }
                      else if (local_48 != (longlong *)0x0) {
LAB_01678563:
                        pvVar2 = _pthread_getspecific(pVar5);
                        if ((pvVar2 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                          plVar3 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4]
                          ;
                        }
                        iVar6 = (**(code **)(*plVar3 + 0x388))();
                        FUN_00d50b20();
                        local_a8 = local_a8 - iVar6;
                        lVar4 = lVar4 + iVar6;
                      }
                    }
                    lVar9 = (longlong)((dVar14 + dVar12) * dVar16);
                    if (lVar9 <= lVar4) {
                      dVar17 = (dVar15 + dVar13) * dVar17;
                      lVar10 = (longlong)dVar17;
                      if (local_a8 <= lVar10) {
                        if (lVar9 < local_a8) {
                          lVar9 = local_a8;
                        }
                        if (lVar4 < lVar10) {
                          lVar10 = lVar4;
                        }
                        local_e8 = local_58;
                        local_e0 = '\0';
                        FUN_01678f90(dVar17,&local_e8);
                        plVar3 = local_48;
                        if (local_40 == '\0') {
                          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0'))
                             && (local_48 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_40 = '\0';
                        }
                        if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar3 != (longlong *)0x0) {
                          local_48 = local_58;
                          local_40 = '\0';
                          FUN_00ca13a0();
                          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        pvVar2 = _pthread_getspecific(pVar5);
                        plVar8 = plVar7;
                        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                          plVar8 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4]
                          ;
                        }
                        local_d8 = plVar3;
                        local_d0 = '\0';
                        uVar18 = (**(code **)(*plVar8 + 0x3b8))
                                           (param_3,&local_d8,lVar9,(int)lVar10 - (int)lVar9);
                        plVar8 = local_48;
                        if (plVar3 == local_48) {
LAB_0167878d:
                          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                            uVar18 = FUN_00d50b20();
                          }
                        }
                        else {
                          if (local_40 == '\0') {
                            if (local_48 != (longlong *)0x0) {
                              uVar18 = FUN_00d50b00();
                            }
                            bVar11 = plVar3 != (longlong *)0x0;
                            plVar3 = plVar8;
                            if (bVar11) {
                              uVar18 = FUN_00d50b20();
                            }
                            goto LAB_0167878d;
                          }
                          if (plVar3 != (longlong *)0x0) {
                            uVar18 = FUN_00d50b20();
                          }
                          local_40 = '\0';
                          plVar3 = plVar8;
                        }
                        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                          uVar18 = FUN_00d50b20();
                        }
                        if (plVar3 != (longlong *)0x0) {
                          local_c0 = '\0';
                          local_b8 = local_58;
                          local_b0 = '\0';
                          local_c8 = plVar3;
                          FUN_01679040(uVar18,&local_b8);
                          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          FUN_00d50b20();
                        }
                      }
                    }
                    if (local_a0 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                    plVar3 = local_98;
                    if (plVar7 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
        }
        FUN_0015edf0();
        FUN_00d50b20();
      }
      bVar11 = false;
      lVar4 = *(longlong *)(unaff_RDI + 0x18);
      goto joined_r0x01677dff;
    }
  }
  plVar3 = (longlong *)0x0;
  lVar4 = *(longlong *)(unaff_RDI + 0x18);
joined_r0x01677dff:
  if (lVar4 != 0) {
    local_78 = '\0';
    local_70 = *(longlong **)(lVar4 + 0x10);
    local_68 = local_68 & 0xffffffff00000000;
    if (0 < *(int *)((longlong)local_70 + 0xc)) {
      iVar6 = 0;
      local_98 = plVar3;
      do {
        local_80 = *(longlong **)(local_70[2] + (longlong)iVar6 * 8);
        FUN_016790f0((longlong)iVar6,&local_80);
        FUN_00bea930();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar3 = local_98;
        iVar6 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar6);
      } while (iVar6 < *(int *)((longlong)local_70 + 0xc));
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  local_78 = '\0';
  local_80 = plVar3;
  FUN_00ca0e70();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar11 && plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


