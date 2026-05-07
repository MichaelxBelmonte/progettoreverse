// Function: FUN_014d39b0
// Address: 014d39b0
// Size: 2583 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"


/* WARNING: Removing unreachable block (ram,0x014d3af8) */
/* WARNING: Removing unreachable block (ram,0x014d3eb1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_014d39b0(float param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  char in_CL;
  pthread_key_t pVar7;
  longlong **pplVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar11;
  float fVar12;
  float extraout_XMM0_Da;
  float fVar13;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float extraout_XMM0_Da_09;
  float extraout_XMM0_Da_10;
  float extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float extraout_XMM0_Da_13;
  float extraout_XMM0_Da_14;
  longlong *local_70;
  char local_68;
  longlong local_60;
  int local_58;
  int iStack_54;
  int local_50;
  int local_40;
  int local_3c;
  longlong *local_38;
  
  cVar2 = (**(code **)(*unaff_RSI + 1000))();
  if (cVar2 == '\0') {
LAB_014d3a35:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  if (in_CL == '\0') {
    FUN_014bc420();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_014bc340();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_70 != (longlong *)0x0) goto LAB_014d3a35;
  fVar12 = (float)(**(code **)(*unaff_RSI + 0x3e0))();
  if (in_CL == '\0') {
    iVar3 = FUN_014c2f80();
    if (*param_2 == 0) goto LAB_014d43dc;
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_60 = *param_2;
    local_58 = -1;
    iStack_54 = 0;
    local_50 = 0;
    local_3c = 1000000;
    bVar11 = false;
    local_38 = (longlong *)0x0;
    fVar13 = extraout_XMM0_Da_07;
    while( true ) {
      lVar5 = (longlong)local_58;
      local_58 = local_58 + 1;
      if (*(int *)(local_60 + 0xc) <= local_58) break;
      plVar10 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar5 * 8);
      local_70 = plVar10;
      if ((DAT_027c0170 == '\0') &&
         (iVar4 = ___cxa_guard_acquire(), fVar13 = extraout_XMM0_Da_14, iVar4 != 0)) {
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
        fVar13 = (float)___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar8 = &local_70;
        fVar13 = extraout_XMM0_Da_08;
        if (cVar2 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar10 = *pplVar8;
      if ((plVar10 != (longlong *)0x0) && (plVar10 != unaff_RSI)) {
        pvVar6 = _pthread_getspecific((pthread_key_t)pplVar8);
        pVar7 = (pthread_key_t)pplVar8;
        plVar9 = plVar10;
        if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        cVar2 = (**(code **)(*plVar9 + 1000))();
        fVar13 = extraout_XMM0_Da_09;
        if (cVar2 != '\0') {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_014bc070();
          fVar13 = extraout_XMM0_Da_10;
          if (cVar2 == '\0') {
            pvVar6 = _pthread_getspecific(pVar7);
            plVar9 = plVar10;
            if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            cVar2 = (**(code **)(*plVar9 + 1000))();
            iVar4 = -1;
            fVar13 = extraout_XMM0_Da_11;
            if ((cVar2 != '\0') && (lVar5 = **(longlong **)(plVar9[0x21] + 0x10), lVar5 != 0)) {
              FUN_00d50b00();
              iVar4 = *(int *)(lVar5 + 0xc);
              fVar13 = (float)FUN_00d50b20();
            }
            if (iVar3 < iVar4) {
              pvVar6 = _pthread_getspecific(pVar7);
              plVar9 = plVar10;
              if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
              }
              cVar2 = (**(code **)(*plVar9 + 1000))();
              iVar4 = -1;
              fVar13 = extraout_XMM0_Da_12;
              if ((cVar2 != '\0') && (lVar5 = **(longlong **)(plVar9[0x21] + 0x10), lVar5 != 0)) {
                FUN_00d50b00();
                iVar4 = *(int *)(lVar5 + 0xc);
                fVar13 = (float)FUN_00d50b20();
              }
              if (iVar4 - iVar3 < local_3c) {
                pvVar6 = _pthread_getspecific(pVar7);
                plVar9 = plVar10;
                if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                  plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                }
                fVar13 = (float)(**(code **)(*plVar9 + 0x3e0))();
                fVar13 = (float)((uint)(fVar13 - fVar12) & _DAT_02390140);
                if (fVar13 < param_1) {
                  if (plVar10 == local_38) {
                    plVar9 = local_38;
                    bVar1 = bVar11;
                    if (!bVar11) {
                      FUN_00d50b00();
                      bVar1 = true;
                    }
                  }
                  else {
                    FUN_00d50b00();
                    bVar1 = true;
                    plVar9 = plVar10;
                    if ((bVar11) && (local_38 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  local_38 = plVar9;
                  pvVar6 = _pthread_getspecific(pVar7);
                  if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                    plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                  }
                  cVar2 = (**(code **)(*plVar10 + 1000))();
                  local_3c = -1;
                  fVar13 = extraout_XMM0_Da_13;
                  if ((cVar2 != '\0') && (lVar5 = **(longlong **)(plVar10[0x21] + 0x10), lVar5 != 0)
                     ) {
                    FUN_00d50b00();
                    local_3c = *(int *)(lVar5 + 0xc);
                    fVar13 = (float)FUN_00d50b20();
                  }
                  local_3c = local_3c - iVar3;
                  bVar11 = bVar1;
                }
              }
            }
          }
        }
      }
      iVar4 = iStack_54;
      if (iStack_54 != 0) {
        if (iStack_54 < 1) {
          iStack_54 = -iStack_54;
        }
        else {
          local_58 = local_58 - iStack_54;
          fVar13 = (float)FUN_00d23690(fVar13,iStack_54);
          local_50 = local_50 + iVar4;
          iStack_54 = 0;
        }
      }
    }
    lVar5 = local_60;
    FUN_01481520();
    if (local_38 != (longlong *)0x0) {
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar5);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc340();
      plVar10 = local_70;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_014d43c6;
    }
LAB_014d4379:
    local_38 = (longlong *)0x0;
LAB_014d43e5:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar11) goto LAB_014d43ff;
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_014d43ff;
    }
  }
  else {
    cVar2 = (**(code **)(*unaff_RSI + 1000))();
    local_40 = -1;
    fVar13 = extraout_XMM0_Da;
    if ((cVar2 != '\0') && (lVar5 = **(longlong **)(unaff_RSI[0x21] + 0x10), lVar5 != 0)) {
      FUN_00d50b00();
      local_40 = *(int *)(lVar5 + 0xc);
      fVar13 = (float)FUN_00d50b20();
    }
    if (*param_2 != 0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = *param_2;
      local_58 = -1;
      iStack_54 = 0;
      local_50 = 0;
      local_3c = 1000000;
      bVar11 = false;
      local_38 = (longlong *)0x0;
      while( true ) {
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(local_60 + 0xc) <= local_58) break;
        plVar10 = *(longlong **)(*(longlong *)(local_60 + 0x10) + 8 + lVar5 * 8);
        local_70 = plVar10;
        if ((DAT_027c0170 == '\0') &&
           (iVar3 = ___cxa_guard_acquire(), fVar13 = extraout_XMM0_Da_06, iVar3 != 0)) {
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
          fVar13 = (float)___cxa_guard_release();
        }
        pplVar8 = (longlong **)&DAT_02802688;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x360))();
          cVar2 = FUN_00e85ea0();
          pplVar8 = &local_70;
          fVar13 = extraout_XMM0_Da_00;
          if (cVar2 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        plVar10 = *pplVar8;
        if ((plVar10 != (longlong *)0x0) && (plVar10 != unaff_RSI)) {
          pvVar6 = _pthread_getspecific((pthread_key_t)pplVar8);
          pVar7 = (pthread_key_t)pplVar8;
          plVar9 = plVar10;
          if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          cVar2 = (**(code **)(*plVar9 + 1000))();
          fVar13 = extraout_XMM0_Da_01;
          if (cVar2 != '\0') {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            fVar13 = extraout_XMM0_Da_02;
            if (cVar2 == '\0') {
              pvVar6 = _pthread_getspecific(pVar7);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar3 = FUN_014c2f80();
              fVar13 = extraout_XMM0_Da_03;
              if (iVar3 < local_40) {
                pvVar6 = _pthread_getspecific(pVar7);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar3 = FUN_014c2f80();
                pVar7 = local_40 - iVar3;
                fVar13 = extraout_XMM0_Da_04;
                if ((int)pVar7 < local_3c) {
                  pvVar6 = _pthread_getspecific(pVar7);
                  plVar9 = plVar10;
                  if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
                    plVar9 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
                  }
                  fVar13 = (float)(**(code **)(*plVar9 + 0x3e0))();
                  fVar13 = (float)((uint)(fVar13 - fVar12) & _DAT_02390140);
                  if (fVar13 < param_1) {
                    if (plVar10 == local_38) {
                      plVar10 = local_38;
                      bVar1 = bVar11;
                      if (!bVar11) {
                        FUN_00d50b00();
                        bVar1 = true;
                      }
                    }
                    else {
                      FUN_00d50b00();
                      bVar1 = true;
                      if ((bVar11) && (local_38 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    local_38 = plVar10;
                    pvVar6 = _pthread_getspecific(pVar7);
                    if (pvVar6 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_3c = FUN_014c2f80();
                    local_3c = local_40 - local_3c;
                    fVar13 = extraout_XMM0_Da_05;
                    bVar11 = bVar1;
                  }
                }
              }
            }
          }
        }
        iVar3 = iStack_54;
        if (iStack_54 != 0) {
          if (iStack_54 < 1) {
            iStack_54 = -iStack_54;
          }
          else {
            local_58 = local_58 - iStack_54;
            fVar13 = (float)FUN_00d23690(fVar13,iStack_54);
            local_50 = local_50 + iVar3;
            iStack_54 = 0;
          }
        }
      }
      lVar5 = local_60;
      FUN_01481520();
      if (local_38 == (longlong *)0x0) goto LAB_014d4379;
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar5);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc420();
      plVar10 = local_70;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_014d43c6:
      if (plVar10 == (longlong *)0x0) goto LAB_014d43e5;
      if (bVar11) {
        FUN_00d50b20();
      }
    }
LAB_014d43dc:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  local_38 = (longlong *)0x0;
LAB_014d43ff:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


