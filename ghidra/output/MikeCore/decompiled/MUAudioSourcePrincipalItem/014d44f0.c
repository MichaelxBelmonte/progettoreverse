// Function: FUN_014d44f0
// Address: 014d44f0
// Size: 2420 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"


/* WARNING: Removing unreachable block (ram,0x014d4686) */
/* WARNING: Removing unreachable block (ram,0x014d4ac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_014d44f0(pthread_key_t param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong **pplVar9;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong *local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  
  (**(code **)(*unaff_RSI + 0x378))();
  plVar11 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (longlong *)0x0) goto LAB_014d459e;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_68 == (longlong *)0x0) {
LAB_014d459e:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  cVar3 = (**(code **)(*unaff_RSI + 1000))();
  if (cVar3 != '\0') {
    FUN_014bc340();
    plVar10 = local_68;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) {
      fVar12 = (float)(**(code **)(*unaff_RSI + 0x3e0))();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01326de0();
      lVar6 = (**(code **)(*unaff_RSI + 0x380))();
      if (*param_2 == 0) {
LAB_014d4a5b:
        *(undefined1 *)(unaff_RDI + 1) = 0;
      }
      else {
        local_40 = plVar11;
        fVar14 = *(float *)(&DAT_0240e4c8 + (ulonglong)(iVar4 == 3) * 4);
        local_60 = '\0';
        local_68 = (longlong *)0x0;
        local_58 = *param_2;
        local_50 = 0xffffffff;
        local_48 = 0;
        bVar1 = false;
        local_38 = (longlong *)0x0;
        while( true ) {
          lVar7 = (longlong)(int)local_50;
          iVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          if (*(int *)(local_58 + 0xc) <= iVar4) break;
          plVar11 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
          local_68 = plVar11;
          if ((DAT_027c0170 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            _DAT_02790158 = FUN_007ef2d0();
            _DAT_02790140 = "MUAudioSourcePrincipalItem";
            _DAT_02790148 = 0x138;
            _DAT_02790150 = FUN_010fe5c0;
            _DAT_02790160 = 0;
            uRam0000000002790168 = 0;
            _DAT_02790170 = 0;
            uRam0000000002790178 = 0;
            _DAT_02790180 = 0;
            uRam0000000002790188 = 0;
            _DAT_02790190 = 0;
            uRam0000000002790198 = 0;
            _DAT_027901a0 = 0;
            uRam00000000027901a8 = 0;
            _DAT_027901b0 = 0;
            uRam00000000027901b8 = 0;
            _DAT_027901c0 = 0;
            uRam00000000027901c8 = 0;
            _DAT_027901d0 = 0;
            uRam00000000027901d8 = 0;
            _DAT_027901e0 = 0;
            uRam00000000027901e8 = 0;
            _DAT_027901f0 = 0;
            uRam00000000027901f8 = 0;
            _DAT_02790200 = 0;
            ___cxa_guard_release();
          }
          pplVar9 = (longlong **)&DAT_02802688;
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x360))();
            cVar3 = FUN_00e85ea0();
            pplVar9 = &local_68;
            if (cVar3 == '\0') {
              pplVar9 = (longlong **)&DAT_02802688;
            }
          }
          plVar11 = *pplVar9;
          if ((plVar11 != (longlong *)0x0) && (plVar11 != unaff_RSI)) {
            pvVar5 = _pthread_getspecific((pthread_key_t)pplVar9);
            pVar8 = (pthread_key_t)pplVar9;
            plVar10 = plVar11;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
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
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                lVar7 = FUN_014bb590();
                if (lVar7 == lVar6) {
                  pvVar5 = _pthread_getspecific(pVar8);
                  plVar10 = plVar11;
                  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                    plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                  }
                  fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
                  if ((float)((uint)(fVar13 - fVar12) & _DAT_02390140) < fVar14) {
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
                      if ((bVar1) && (local_38 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    bVar1 = bVar2;
                    local_38 = plVar10;
                    pvVar5 = _pthread_getspecific(pVar8);
                    if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                      plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                    }
                    fVar14 = (float)(**(code **)(*plVar11 + 0x3e0))();
                    fVar14 = (float)((uint)(fVar14 - fVar12) & _DAT_02390140);
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
        pVar8 = (pthread_key_t)lVar7;
        if (local_38 == (longlong *)0x0) {
          if (*param_2 != 0) {
            local_60 = '\0';
            local_68 = (longlong *)0x0;
            local_58 = *param_2;
            local_50 = 0xffffffff;
            local_48 = 0;
            local_38 = (longlong *)0x0;
            fVar14 = DAT_02391078;
            while( true ) {
              lVar7 = (longlong)(int)local_50;
              iVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              if (*(int *)(local_58 + 0xc) <= iVar4) break;
              plVar11 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
              local_68 = plVar11;
              if ((DAT_027c0170 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                _DAT_02790158 = FUN_007ef2d0();
                _DAT_02790140 = "MUAudioSourcePrincipalItem";
                _DAT_02790148 = 0x138;
                _DAT_02790150 = FUN_010fe5c0;
                _DAT_02790160 = 0;
                uRam0000000002790168 = 0;
                _DAT_02790170 = 0;
                uRam0000000002790178 = 0;
                _DAT_02790180 = 0;
                uRam0000000002790188 = 0;
                _DAT_02790190 = 0;
                uRam0000000002790198 = 0;
                _DAT_027901a0 = 0;
                uRam00000000027901a8 = 0;
                _DAT_027901b0 = 0;
                uRam00000000027901b8 = 0;
                _DAT_027901c0 = 0;
                uRam00000000027901c8 = 0;
                _DAT_027901d0 = 0;
                uRam00000000027901d8 = 0;
                _DAT_027901e0 = 0;
                uRam00000000027901e8 = 0;
                _DAT_027901f0 = 0;
                uRam00000000027901f8 = 0;
                _DAT_02790200 = 0;
                ___cxa_guard_release();
              }
              pplVar9 = (longlong **)&DAT_02802688;
              if (plVar11 != (longlong *)0x0) {
                (**(code **)(*plVar11 + 0x360))();
                cVar3 = FUN_00e85ea0();
                pplVar9 = &local_68;
                if (cVar3 == '\0') {
                  pplVar9 = (longlong **)&DAT_02802688;
                }
              }
              plVar11 = *pplVar9;
              if ((plVar11 != (longlong *)0x0) && (plVar11 != unaff_RSI)) {
                pvVar5 = _pthread_getspecific((pthread_key_t)pplVar9);
                pVar8 = (pthread_key_t)pplVar9;
                plVar10 = plVar11;
                if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
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
                    if (pvVar5 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar7 = FUN_014bb590();
                    if (lVar7 == lVar6) {
                      pvVar5 = _pthread_getspecific(pVar8);
                      plVar10 = plVar11;
                      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                        plVar10 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4]
                        ;
                      }
                      fVar13 = (float)(**(code **)(*plVar10 + 0x3e0))();
                      if ((float)((uint)(fVar13 - fVar12) & _DAT_02390140) < fVar14) {
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
                          if ((bVar1) && (local_38 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        local_38 = plVar10;
                        pvVar5 = _pthread_getspecific(pVar8);
                        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                          plVar11 = (longlong *)
                                    plVar11[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                        }
                        fVar14 = (float)(**(code **)(*plVar11 + 0x3e0))();
                        fVar14 = (float)((uint)(fVar14 - fVar12) & _DAT_02390140);
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
            pVar8 = (pthread_key_t)lVar6;
            if (local_38 != (longlong *)0x0) goto LAB_014d49e6;
            bVar2 = true;
            local_38 = (longlong *)0x0;
            goto LAB_014d4e27;
          }
          *(undefined1 *)(unaff_RDI + 1) = 0;
          local_38 = (longlong *)0x0;
          if (bVar1) goto LAB_014d4e63;
        }
        else {
LAB_014d49e6:
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc420();
          plVar11 = local_68;
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar11 != (longlong *)0x0) {
            if (bVar1) {
              FUN_00d50b20();
            }
            goto LAB_014d4a5b;
          }
          bVar2 = false;
LAB_014d4e27:
          plVar11 = local_38;
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (bVar1) {
LAB_014d4e63:
            *unaff_RDI = local_38;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            goto LAB_014d4594;
          }
          if (!bVar2) {
            FUN_00d50b00();
            *unaff_RDI = plVar11;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            goto LAB_014d4594;
          }
        }
      }
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto LAB_014d4594;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_014d4594:
  FUN_00d50b20();
  return unaff_RDI;
}


