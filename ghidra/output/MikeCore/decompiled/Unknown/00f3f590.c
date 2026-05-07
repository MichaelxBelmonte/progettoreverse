// Function: FUN_00f3f590
// Address: 00f3f590
// Size: 10928 bytes
// Class: Unknown
// String references:
//   "\t"
//   "\f"
//   "\a"
//   "[[:alnum:]_]"
//   "[^[:alnum:]_]"
//   "[[:space:]]"
//   "[^[:space:]]"
//   "[[:digit:]]"
//   "[^[:digit:]]"
//   "\n"
//   "\r"


/* WARNING: Removing unreachable block (ram,0x00f4114c) */
/* WARNING: Removing unreachable block (ram,0x00f42008) */

mbstate_t * FUN_00f3f590(undefined8 param_1,mbstate_t *param_2,uint *param_3,mbstate_t *param_4)

{
  mbstate_t *pmVar1;
  byte bVar2;
  dword dVar3;
  int iVar4;
  ulonglong *puVar5;
  bool bVar6;
  undefined *puVar7;
  mbstate_t *pmVar8;
  mbstate_t *pmVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  dword dVar15;
  uint uVar16;
  size_t sVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  __darwin_ct_rune_t _Var21;
  mbstate_t *pmVar22;
  mbstate_t *pmVar23;
  qword qVar24;
  mbstate_t *pmVar25;
  mbstate_t *pmVar26;
  longlong lVar27;
  int *piVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  __darwin_ct_rune_t _Var32;
  uint *puVar33;
  mbstate_t *pmVar34;
  void *pvVar35;
  dword *pdVar36;
  code *pcVar37;
  char *pcVar38;
  char *pcVar39;
  ulong uVar40;
  undefined8 uVar41;
  wchar_t *pwVar42;
  mbstate_t *pmVar43;
  uint uVar44;
  mbstate_t *pmVar45;
  bool bVar46;
  uint uVar47;
  mbstate_t *unaff_RDI;
  mbstate_t *pmVar48;
  undefined7 uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  uint uVar52;
  uint uVar53;
  char *pcVar54;
  bool bVar55;
  bool bVar56;
  uint local_36c;
  int local_360;
  int local_35c;
  mbstate_t *local_358;
  ulonglong local_350;
  uint local_33c;
  int local_338;
  int local_334;
  mbstate_t *local_330;
  mbstate_t *local_328;
  mbstate_t *local_310;
  mbstate_t *local_308;
  ulonglong local_2f8;
  ulonglong uStack_2f0;
  mbstate_t *local_2e8;
  undefined4 *puStack_2e0;
  ulonglong local_2d8;
  ulonglong uStack_2d0;
  ulonglong local_2c8;
  ulonglong uStack_2c0;
  ulonglong local_2b8;
  ulonglong uStack_2b0;
  ulonglong local_2a8;
  ulonglong uStack_2a0;
  ulonglong local_298;
  ulonglong uStack_290;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  int local_174 [63];
  undefined1 local_78 [64];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  iVar11 = FUN_00f425b0();
  if (((segment_command *)(unaff_RDI->__mbstate8 + 0x48))->cmd == 0) {
    FUN_00f425c0();
    FUN_00f425c0();
    *(int *)(unaff_RDI->__mbstate8 + 0x34) = *(int *)(unaff_RDI->__mbstate8 + 0x34) + 1;
  }
  local_308 = (mbstate_t *)0x0;
  uVar12 = FUN_00f425c0();
  pmVar23 = (mbstate_t *)(ulonglong)uVar12;
  *(ulonglong *)(unaff_RDI->__mbstate8 + 0x20) = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18);
  *(ulonglong *)(unaff_RDI->__mbstate8 + 0x28) =
       *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) +
       (longlong)(int)*(qword *)(unaff_RDI->__mbstate8 + 0x30) * 4;
  iVar13 = FUN_00f425b0();
  bVar55 = uVar12 == 0;
  if (iVar13 <= iVar11) {
    local_334 = 0;
LAB_00f41fbf:
    pmVar25 = (mbstate_t *)&MACH_HEADER.cpusubtype;
    if (0 < local_334) goto LAB_00f4200f;
LAB_00f41fd1:
    pmVar25 = pmVar23;
    if (bVar55) {
      *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x10) = local_308;
    }
LAB_00f4200f:
    if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return pmVar25;
  }
  pmVar1 = (mbstate_t *)(unaff_RDI->__mbstate8 + 0x18);
  if (uVar12 != 0) goto LAB_00f41fd1;
  local_334 = 0;
  local_33c = 0;
  local_308 = (mbstate_t *)0x0;
LAB_00f3f680:
  uVar14 = FUN_00f42760();
  uVar40 = (ulong)param_2;
  switch(uVar14) {
  case 0:
    if (((*(uint *)(unaff_RDI->__mbstate8 + 0x44) & 0x11) == 1) &&
       (uVar12 = FUN_00f425c0(), uVar12 != 0)) goto LAB_00f3f807;
    goto LAB_00f3f802;
  case 1:
    pmVar23 = *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x18);
    pmVar22 = *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x28);
    if ((pmVar22 <= pmVar23) ||
       (uVar16 = *(uint *)(unaff_RDI->__mbstate8 + 0x44), (uVar16 & 0x10) != 0))
    goto switchD_00f3f70c_caseD_25;
    puVar33 = &switchD_00f3f70c::switchdataD_00f420a8;
    switch(*(undefined4 *)pmVar23) {
    case 0x24:
      if ((((uVar16 & 1) != 0) ||
          ((((mbstate_t *)(pmVar23->__mbstate8 + 8) < pmVar22 &&
            (*(dword *)(pmVar23->__mbstate8 + 4) == 0x5c)) &&
           (*(int *)(pmVar23->__mbstate8 + 8) == 0x29)))) ||
         ((mbstate_t *)(pmVar23->__mbstate8 + 4) == pmVar22)) {
        param_2 = (mbstate_t *)((longlong)&MACH_HEADER.magic + 2);
        local_308 = (mbstate_t *)FUN_00f33800(0xffffffff);
        if (local_308 == (mbstate_t *)0x0) break;
LAB_00f408cc:
        pmVar1->_mbstateL = pmVar1->_mbstateL + 4;
        goto switchD_00f3f6a1_default;
      }
    default:
switchD_00f3f70c_caseD_25:
      pmVar25 = (mbstate_t *)(pmVar23->__mbstate8 + 4);
      if (((local_33c != 0) && (pmVar25 < pmVar22)) &&
         ((*(int *)pmVar23 == 0x5c && (*(dword *)pmVar25 == 0x45)))) {
        *(uint *)(unaff_RDI->__mbstate8 + 0x44) =
             *(uint *)(unaff_RDI->__mbstate8 + 0x44) & ~local_33c;
        *(char **)(unaff_RDI->__mbstate8 + 0x18) = pmVar23->__mbstate8 + 8;
        uVar12 = FUN_00f425c0();
        pmVar23 = (mbstate_t *)(ulonglong)uVar12;
        local_33c = 0;
        goto LAB_00f41113;
      }
      uVar12 = *(uint *)(unaff_RDI->__mbstate8 + 0x44);
      if ((uVar12 & 0x10) != 0) goto LAB_00f40fe9;
      if ((pmVar22 <= pmVar23) || (uVar40 = *(ulong *)pmVar23, uVar40 == 0x2a)) {
LAB_00f40fb4:
        local_308 = (mbstate_t *)0xffffffff;
        pmVar22 = (mbstate_t *)FUN_00f33800(0xffffffff);
        goto LAB_00f40fcb;
      }
      if ((uVar12 & 1) == 0) {
        if (((pmVar25 < pmVar22) && (uVar40 == 0x5c)) && (*(dword *)pmVar25 == 0x7b))
        goto LAB_00f40fb4;
      }
      else {
        pmVar25 = (mbstate_t *)(ulonglong)(uVar40 - 0x3f);
        if (((uVar40 - 0x3f < 0x3e) &&
            ((0x3000000000000001U >> ((ulonglong)pmVar25 & 0x3f) & 1) != 0)) || (uVar40 == 0x2b))
        goto LAB_00f40fb4;
      }
LAB_00f40fe9:
      if ((uVar12 & 2) == 0) {
LAB_00f40fed:
        param_2 = (mbstate_t *)(ulonglong)*(uint *)pmVar23;
        local_308 = (mbstate_t *)FUN_00f33800(*(dword *)(unaff_RDI->__mbstate8 + 0x38));
        if (local_308 != (mbstate_t *)0x0) {
LAB_00f410ff:
          *(dword *)(unaff_RDI->__mbstate8 + 0x38) = *(dword *)(unaff_RDI->__mbstate8 + 0x38) + 1;
          *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) =
               *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) + 4;
          goto switchD_00f3f6a1_default;
        }
      }
      else {
        if ((ulonglong)*(uint *)pmVar23 < 0x80) {
          pdVar36 = (dword *)PTR___DefaultRuneLocale_0249c238;
          if (-1 < *(short *)(PTR___DefaultRuneLocale_0249c238 +
                             (ulonglong)*(uint *)pmVar23 * 4 + 0x3c)) {
LAB_00f41043:
            if ((ulonglong)**(uint **)pmVar1 < 0x80) {
              pdVar36 = &dylib_command_00000ff0.dylib.current_version;
              uVar12 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                (ulonglong)**(uint **)pmVar1 * 4 + 0x3c) & 0x1000;
            }
            else {
              pdVar36 = (dword *)PTR___DefaultRuneLocale_0249c238;
              uVar12 = ___maskrune((__darwin_ct_rune_t)PTR___DefaultRuneLocale_0249c238,uVar40);
            }
            if (uVar12 == 0) {
              pmVar23 = *(mbstate_t **)pmVar1;
              goto LAB_00f40fed;
            }
          }
        }
        else {
          iVar13 = ___maskrune((__darwin_ct_rune_t)pmVar25,uVar40);
          pdVar36 = (dword *)PTR___DefaultRuneLocale_0249c238;
          if (iVar13 == 0) goto LAB_00f41043;
        }
        _Var21 = (__darwin_ct_rune_t)pdVar36;
        ___toupper(_Var21);
        _Var21 = ___toupper(_Var21);
        dVar15 = *(dword *)(unaff_RDI->__mbstate8 + 0x38);
        lVar27 = FUN_00f33800(dVar15,_Var21);
        if (lVar27 == 0) break;
        ___tolower(dVar15);
        _Var21 = ___tolower(dVar15);
        param_2 = (mbstate_t *)FUN_00f33800(*(dword *)(unaff_RDI->__mbstate8 + 0x38),_Var21);
        if (param_2 != (mbstate_t *)0x0) {
          local_308 = (mbstate_t *)FUN_00f33950();
          pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
          if (local_308 != (mbstate_t *)0x0) goto LAB_00f410ff;
          goto LAB_00f4200f;
        }
      }
      break;
    case 0x28:
      if ((uVar16 & 1) == 0) {
        if ((pmVar23 <= *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x20)) ||
           (*(dword *)((longlong)pmVar23 + -4) != 0x5c)) goto switchD_00f3f70c_caseD_25;
      }
      else if (*(dword *)(pmVar23->__mbstate8 + 4) == 0x3f) {
        pcVar39 = pmVar23->__mbstate8 + 8;
        pmVar23 = (mbstate_t *)(pmVar23->__mbstate8 + 0xc);
        bVar2 = 1;
        param_3 = &switchD_00f40ed2::switchdataD_00f42300;
        do {
          param_2 = (mbstate_t *)0x0;
          bVar10 = 0;
          switch(*(undefined4 *)pcVar39) {
          case 0x23:
            goto switchD_00f40ed2_caseD_23;
          default:
            pmVar1->_mbstateL = (longlong)pcVar39;
            goto LAB_00f42044;
          case 0x29:
            pmVar1->_mbstateL = (longlong)(pcVar39 + 4);
            goto LAB_00f4154e;
          case 0x2d:
            break;
          case 0x3a:
            pmVar1->_mbstateL = (longlong)(pcVar39 + 4);
            local_334 = local_334 + 1;
            goto LAB_00f4154e;
          case 0x55:
            uVar16 = uVar16 & 0xffffffbf;
            uVar12 = (uint)bVar2 << 6;
            goto LAB_00f40f05;
          case 0x69:
            uVar16 = (uVar16 & 0xfffffffd) + (uint)bVar2 * 2;
            bVar10 = bVar2;
            break;
          case 0x6e:
            uVar16 = (uVar16 & 0xfffffffb) + (uint)bVar2 * 4;
            bVar10 = bVar2;
            break;
          case 0x72:
            uVar16 = uVar16 & 0xffffffdf;
            uVar12 = (uint)bVar2 << 5;
LAB_00f40f05:
            uVar16 = uVar12 | uVar16;
            bVar10 = bVar2;
          }
          bVar2 = bVar10;
          pcVar39 = pcVar39 + 4;
          pmVar23 = (mbstate_t *)(pmVar23->__mbstate8 + 4);
        } while( true );
      }
      local_334 = local_334 + 1;
      if ((pmVar22 <= (mbstate_t *)(pmVar23->__mbstate8 + 8)) ||
         ((*(dword *)(pmVar23->__mbstate8 + 4) != 0x3f ||
          (*(int *)(pmVar23->__mbstate8 + 8) != 0x3a)))) {
        *(char **)(unaff_RDI->__mbstate8 + 0x18) = pmVar23->__mbstate8 + 4;
        uVar12 = FUN_00f425c0();
        if ((uVar12 != 0) ||
           ((uVar12 = FUN_00f425c0(), uVar12 != 0 || (uVar12 = FUN_00f425c0(), uVar12 != 0))))
        goto LAB_00f3f807;
        *(int *)(unaff_RDI->__mbstate8 + 0x34) = *(int *)(unaff_RDI->__mbstate8 + 0x34) + 1;
        goto switchD_00f3f6a1_default;
      }
      pmVar1->_mbstateL = (longlong)(pmVar23->__mbstate8 + 0xc);
      goto LAB_00f3f802;
    case 0x29:
      if ((((uVar16 & 1) == 0) || (local_334 < 1)) &&
         ((pmVar23 <= *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x20) ||
          (*(dword *)((longlong)pmVar23 + -4) != 0x5c)))) goto switchD_00f3f70c_caseD_25;
      param_2 = (mbstate_t *)0xffffffff;
      local_308 = (mbstate_t *)FUN_00f33800(0xffffffff);
      if (local_308 != (mbstate_t *)0x0) {
        if ((*(dword *)(unaff_RDI->__mbstate8 + 0x44) & 1) == 0) {
          pmVar1->_mbstateL = pmVar1->_mbstateL - 4;
        }
        goto switchD_00f3f6a1_default;
      }
      break;
    case 0x2e:
      if ((uVar16 & 4) == 0) {
        param_2 = (mbstate_t *)0x7fffffff;
        local_308 = (mbstate_t *)FUN_00f33800(*(dword *)(unaff_RDI->__mbstate8 + 0x38));
        if (local_308 != (mbstate_t *)0x0) {
          iVar13 = 1;
LAB_00f411de:
          *(dword *)(unaff_RDI->__mbstate8 + 0x38) =
               *(dword *)(unaff_RDI->__mbstate8 + 0x38) + iVar13;
          *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) =
               *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) + 4;
          goto switchD_00f3f6a1_default;
        }
      }
      else {
        lVar27 = FUN_00f33800(*(dword *)(unaff_RDI->__mbstate8 + 0x38),9);
        if ((lVar27 != 0) &&
           (param_2 = (mbstate_t *)
                      FUN_00f33800(*(dword *)(unaff_RDI->__mbstate8 + 0x38) + 1,0x7fffffff),
           param_2 != (mbstate_t *)0x0)) {
          local_308 = (mbstate_t *)FUN_00f33950();
          pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
          if (local_308 != (mbstate_t *)0x0) {
            iVar13 = 2;
            goto LAB_00f411de;
          }
          goto LAB_00f4200f;
        }
      }
      break;
    case 0x5b:
      local_328 = (mbstate_t *)(pmVar23->__mbstate8 + 4);
      *(mbstate_t **)pmVar1 = local_328;
      pmVar34 = _malloc(0xf420a8);
      if (pmVar34 == (mbstate_t *)0x0) break;
      dVar15 = *(dword *)local_328;
      if (dVar15 == 0x5e) {
        local_328 = (mbstate_t *)(pmVar23->__mbstate8 + 8);
        pmVar1->_mbstateL = (longlong)local_328;
      }
      pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.cputype + 3);
      if (local_328 != pmVar22) {
        uVar12 = 0x20;
        uVar50 = 0;
        local_350 = 0;
        do {
          uVar16 = *(uint *)local_328;
          uVar51 = (ulonglong)uVar16;
          iVar13 = (int)uVar50;
          sVar17 = (size_t)param_3;
          if ((uVar16 == 0x5d) &&
             (puVar33 = (uint *)(ulonglong)uVar12, (mbstate_t *)pmVar1->_mbstateL < local_328)) {
            pmVar1->_mbstateL = (longlong)(local_328->__mbstate8 + 4);
            if (dVar15 != 0x5e) {
              if (iVar13 < 1) {
                pmVar25 = (mbstate_t *)0x0;
                local_308 = (mbstate_t *)0x0;
                goto LAB_00f413fb;
              }
              local_310 = (mbstate_t *)(local_350 * 8 + 8);
              if ((int)local_350 < 1) {
                uVar51 = 1;
                local_308 = (mbstate_t *)0x0;
                goto LAB_00f41d95;
              }
              uVar51 = 1;
              local_308 = (mbstate_t *)0x0;
              goto LAB_00f41b9b;
            }
            pcVar37 = FUN_00f424f0;
            _qsort(FUN_00f424f0,8,sVar17,(int *)param_4->__mbstate8);
            local_310 = (mbstate_t *)(local_350 * 8 + 8);
            param_2 = local_310;
            if (iVar13 < 1) {
              pmVar25 = (mbstate_t *)0x0;
              local_308 = (mbstate_t *)0x0;
              puVar33 = (uint *)pcVar37;
              bVar55 = 0 < (int)local_350;
              goto LAB_00f41df3;
            }
            if ((int)local_350 < 1) {
              local_308 = (mbstate_t *)0x0;
              uVar51 = 1;
              iVar20 = 0;
              iVar13 = 0;
              goto LAB_00f41cd4;
            }
            local_308 = (mbstate_t *)0x0;
            uVar51 = 1;
            iVar20 = 0;
            iVar13 = 0;
            goto LAB_00f4191b;
          }
          pmVar23 = (mbstate_t *)(local_328->__mbstate8 + 8);
          if ((pmVar23 < pmVar22) && (*(dword *)(local_328->__mbstate8 + 4) == 0x2d)) {
            uVar31 = *(uint *)pmVar23;
            param_2 = (mbstate_t *)(ulonglong)uVar31;
            if (uVar31 == 0x5d) goto LAB_00f3fd63;
            pmVar22 = (mbstate_t *)(local_328->__mbstate8 + 0xc);
            local_308 = param_2;
            if ((int)uVar16 <= (int)uVar31) goto LAB_00f40111;
            pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.cpusubtype + 3);
            break;
          }
LAB_00f3fd63:
          puVar33 = (uint *)(local_328->__mbstate8 + 4);
          if ((puVar33 < pmVar22) && (uVar16 == 0x5b)) {
            dVar3 = *puVar33;
            if (dVar3 != 0x3a) {
              if ((dVar3 == 0x2e) || (dVar3 == 0x3d)) {
                pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.magic + 3);
                pmVar22 = local_328;
              }
              else {
                local_330 = (mbstate_t *)0x0;
                local_308 = (mbstate_t *)((longlong)&segment_command_00000020.maxprot + 3);
                uVar51 = 0x5b;
                bVar55 = false;
                pmVar25 = (mbstate_t *)param_3;
LAB_00f3fdbc:
                param_3 = (uint *)pmVar25;
                local_328 = (mbstate_t *)puVar33;
                if ((int)uVar50 < (int)uVar12) goto LAB_00f40135;
LAB_00f3fddc:
                puVar33 = (uint *)local_328;
                param_2 = local_308;
                if ((int)uVar12 < 0x401) {
                  iVar13 = (int)uVar50;
                  uVar12 = uVar12 * 2;
                  pmVar34 = _realloc(local_328,(size_t)local_308);
                  if (pmVar34 != (mbstate_t *)0x0) goto LAB_00f4013e;
LAB_00f413ba:
                  pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
                  pmVar22 = local_328;
                }
                else {
                  pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
                  pmVar22 = local_328;
                }
              }
              break;
            }
            for (; (pmVar23 < pmVar22 && (*(dword *)pmVar23 != 0x3a));
                pmVar23 = (mbstate_t *)(pmVar23->__mbstate8 + 4)) {
            }
            if (pmVar23 == pmVar22) {
              pmVar25 = (mbstate_t *)&MACH_HEADER.cputype;
              pmVar22 = local_328;
              break;
            }
            pwVar42 = (wchar_t *)
                      (((longlong)pmVar23 - (longlong)local_328) * 0x40000000 + -0x200000000 >> 0x20
                      );
            if (0x107 < (longlong)pmVar23 - (longlong)local_328) {
              pwVar42 = (wchar_t *)((longlong)&segment_command_00000020.vmaddr + 7);
            }
            _wcsncpy((wchar_t *)0xfffffffe00000000,pwVar42,sVar17);
            local_174[(longlong)pwVar42 + -1] = 0;
            local_1f8 = 0;
            uStack_1f0 = 0;
            local_1e8 = 0;
            uStack_1e0 = 0;
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_198 = 0;
            uStack_190 = 0;
            local_188 = 0;
            uStack_180 = 0;
            uVar41 = 0;
            pcVar39 = (char *)&local_1f8;
            sVar17 = _wcsrtombs(pcVar39,(wchar_t **)&segment_command_00000020.vmsize,sVar17,param_4)
            ;
            local_78[(int)sVar17] = 0;
            uVar16 = _wctype(pcVar39);
            param_3 = (uint *)0x0;
            bVar46 = uVar16 != 0;
            param_2 = (mbstate_t *)CONCAT71((int7)((ulonglong)uVar41 >> 8),bVar46);
            bVar56 = *(int *)PTR____mb_cur_max_024a9890 == 1;
            uVar49 = (undefined7)((ulonglong)param_4 >> 8);
            if (bVar56 && bVar46) {
              param_2 = (mbstate_t *)unaff_RDI->_mbstateL;
              if ((*(dword *)(unaff_RDI->__mbstate8 + 0x44) & 2) == 0) {
                pvVar35 = (void *)0xffffffff;
                uVar51 = 0;
                pmVar22 = (mbstate_t *)0x0;
                do {
                  _Var21 = (__darwin_ct_rune_t)pvVar35;
                  if (uVar51 < 0x80) {
                    uVar31 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + uVar51 * 4 + 0x3c) &
                             uVar16;
                  }
                  else {
                    uVar31 = ___maskrune(_Var21,(ulong)param_2);
                  }
                  if (uVar31 == 0) {
                    if (_Var21 < 0) {
                      param_3 = (uint *)0x0;
                    }
                    else {
                      iVar13 = (int)uVar50;
                      pmVar25 = pmVar34;
                      if ((int)uVar12 <= iVar13) {
                        param_4 = pmVar22;
                        if (0x400 < (int)uVar12) goto LAB_00f41f62;
                        uVar12 = uVar12 * 2;
                        pmVar25 = _realloc(pvVar35,(size_t)param_2);
                        if (pmVar25 == (mbstate_t *)0x0) goto LAB_00f41f62;
                      }
                      param_2 = pmVar22;
                      qVar24 = FUN_00f33800(0xffffffff,pmVar22);
                      *(qword *)((longlong)pmVar25 + (longlong)iVar13 * 8) = qVar24;
                      param_3 = (uint *)0x0;
                      if (qVar24 == 0) {
                        param_3 = &MACH_HEADER.filetype;
                      }
                      uVar50 = (ulonglong)(iVar13 + 1);
                      pvVar35 = (void *)0xffffffff;
                      pmVar34 = pmVar25;
                    }
                  }
                  else {
                    if (_Var21 < 0) {
                      pvVar35 = (void *)(uVar51 & 0xffffffff);
                    }
                    param_3 = (uint *)0x0;
                    pmVar22 = (mbstate_t *)(uVar51 & 0xffffffff);
                  }
                  param_2 = (mbstate_t *)CONCAT71((int7)((ulonglong)param_2 >> 8),(int)param_3 == 0)
                  ;
                } while ((uVar51 < 0xff) && (uVar51 = uVar51 + 1, (int)param_3 == 0));
              }
              else {
                pvVar35 = (void *)0xffffffff;
                uVar51 = 0;
                pmVar22 = (mbstate_t *)0x0;
                do {
                  _Var21 = (__darwin_ct_rune_t)pvVar35;
                  if (uVar51 < 0x80) {
                    if ((*(uint *)(PTR___DefaultRuneLocale_0249c238 + uVar51 * 4 + 0x3c) & uVar16)
                        != 0) goto LAB_00f405e5;
LAB_00f4055c:
                    param_4 = (mbstate_t *)(uVar51 & 0xffffffff);
                    _Var32 = _Var21;
                    uVar31 = ___tolower(_Var21);
                    if (uVar31 < 0x80) {
                      uVar31 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                        (ulonglong)uVar31 * 4 + 0x3c) & uVar16;
                    }
                    else {
                      uVar31 = ___maskrune(_Var32,(ulong)param_2);
                    }
                    if (uVar31 != 0) goto LAB_00f405e5;
                    _Var32 = _Var21;
                    uVar31 = ___toupper(_Var21);
                    if (uVar31 < 0x80) {
                      uVar31 = *(uint *)(PTR___DefaultRuneLocale_0249c238 +
                                        (ulonglong)uVar31 * 4 + 0x3c) & uVar16;
                    }
                    else {
                      uVar31 = ___maskrune(_Var32,(ulong)param_2);
                    }
                    iVar13 = (int)uVar50;
                    if (uVar31 != 0) goto LAB_00f405e5;
                    if (_Var21 < 0) {
                      param_3 = (uint *)0x0;
                    }
                    else {
                      pmVar25 = pmVar34;
                      if ((int)uVar12 <= iVar13) {
                        if (0x400 < (int)uVar12) goto LAB_00f41f62;
                        uVar12 = uVar12 * 2;
                        pmVar25 = _realloc(pvVar35,(size_t)param_2);
                        if (pmVar25 == (mbstate_t *)0x0) goto LAB_00f41f62;
                      }
                      param_2 = pmVar22;
                      qVar24 = FUN_00f33800(0xffffffff,pmVar22);
                      *(qword *)((longlong)pmVar25 + (longlong)iVar13 * 8) = qVar24;
                      param_3 = (uint *)0x0;
                      if (qVar24 == 0) {
                        param_3 = &MACH_HEADER.filetype;
                      }
                      uVar50 = (ulonglong)(iVar13 + 1);
                      pvVar35 = (void *)0xffffffff;
                      pmVar34 = pmVar25;
                    }
                    param_2 = (mbstate_t *)
                              CONCAT71((int7)((ulonglong)param_2 >> 8),(int)param_3 == 0);
                  }
                  else {
                    iVar13 = ___maskrune(_Var21,(ulong)param_2);
                    if (iVar13 == 0) goto LAB_00f4055c;
LAB_00f405e5:
                    pmVar22 = (mbstate_t *)(uVar51 & 0xffffffff);
                    if (_Var21 < 0) {
                      pvVar35 = (void *)(uVar51 & 0xffffffff);
                    }
                    param_3 = (uint *)0x0;
                    param_2 = (mbstate_t *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
                  }
                } while ((uVar51 < 0xff) && (uVar51 = uVar51 + 1, (int)param_3 == 0));
              }
              uVar16 = 0;
              bVar6 = true;
              if (((int)pvVar35 < 0) || ((char)param_2 == '\0')) {
                uVar49 = (undefined7)((ulonglong)pmVar22 >> 8);
                pmVar25 = (mbstate_t *)param_3;
                goto LAB_00f406d5;
              }
              iVar13 = (int)uVar50;
              pmVar25 = pmVar34;
              param_4 = pmVar22;
              if ((int)uVar12 <= iVar13) {
                if ((int)uVar12 < 0x401) {
                  uVar12 = uVar12 * 2;
                  pmVar25 = _realloc(pvVar35,(size_t)param_2);
                  if (pmVar25 != (mbstate_t *)0x0) goto LAB_00f407df;
                }
LAB_00f41f62:
                pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
                puVar33 = (uint *)pmVar34;
                pmVar22 = (mbstate_t *)(pmVar23->__mbstate8 + 8);
                break;
              }
LAB_00f407df:
              pmVar34 = pmVar25;
              param_4 = pmVar22;
              qVar24 = FUN_00f33800(0xffffffff);
              puVar33 = (uint *)(longlong)iVar13;
              *(qword *)((longlong)pmVar34 + (longlong)puVar33 * 8) = qVar24;
              param_2 = pmVar22;
              if (qVar24 == 0) goto LAB_00f41f62;
              uVar50 = (ulonglong)(iVar13 + 1);
              bVar55 = false;
              pmVar25 = (mbstate_t *)param_3;
LAB_00f4083f:
              local_328 = (mbstate_t *)(pmVar23->__mbstate8 + 8);
              local_308 = (mbstate_t *)0x7fffffff;
              uVar51 = 0;
              bVar46 = true;
              bVar6 = true;
              param_2 = (mbstate_t *)0x0;
              uVar16 = 0;
            }
            else {
              pmVar25 = (mbstate_t *)((ulonglong)(uVar16 == 0) << 2);
              bVar6 = false;
LAB_00f406d5:
              param_4 = (mbstate_t *)CONCAT71(uVar49,bVar56 && bVar46);
              puVar33 = (uint *)(pmVar23->__mbstate8 + 8);
              param_3 = (uint *)pmVar25;
              pmVar22 = (mbstate_t *)puVar33;
              if ((int)pmVar25 != 0) break;
              bVar55 = uVar16 != 0;
              if ((uVar16 == 0) || (dVar15 != 0x5e)) {
                local_330 = (mbstate_t *)(ulonglong)uVar16;
                local_308 = (mbstate_t *)0x7fffffff;
                uVar51 = 0;
                if (!bVar56 || !bVar46) goto LAB_00f3fdbc;
                goto LAB_00f4083f;
              }
              local_308 = (mbstate_t *)0x7fffffff;
              local_328 = (mbstate_t *)puVar33;
              if ((int)local_350 < 0x40) {
                pmVar25 = (mbstate_t *)(longlong)(int)local_350;
                local_350 = (ulonglong)((int)local_350 + 1);
                *(uint *)((longlong)&local_2f8 + (longlong)pmVar25 * 4) = uVar16;
                uVar51 = 0;
                bVar55 = true;
                param_2 = (mbstate_t *)0x0;
                bVar46 = true;
                uVar16 = 0;
              }
              else {
                uVar16 = 0xc;
                uVar51 = 0;
                bVar55 = true;
                param_2 = (mbstate_t *)CONCAT71((uint7)(uint3)(local_350 >> 8),1);
                bVar46 = false;
              }
            }
          }
          else {
            pmVar22 = (mbstate_t *)puVar33;
            if (uVar16 == 0x2d) {
              if (*puVar33 != 0x5d) {
                param_2 = (mbstate_t *)(ulonglong)uVar12;
                if ((mbstate_t *)pmVar1->_mbstateL == local_328) {
                  local_330 = (mbstate_t *)0x0;
                  uVar51 = 0x2d;
                  bVar55 = false;
                  local_308 = (mbstate_t *)(segment_command_00000020.segname + 5);
                  local_328 = (mbstate_t *)puVar33;
                  if (iVar13 < (int)uVar12) goto LAB_00f40135;
                  goto LAB_00f3fddc;
                }
                pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.cpusubtype + 3);
                break;
              }
              uVar51 = 0x2d;
              local_308 = (mbstate_t *)(segment_command_00000020.segname + 5);
            }
            else {
              local_308 = (mbstate_t *)(ulonglong)uVar16;
            }
LAB_00f40111:
            local_330 = (mbstate_t *)0x0;
            bVar55 = false;
            local_328 = pmVar22;
            if ((int)uVar12 <= iVar13) goto LAB_00f3fddc;
LAB_00f40135:
            iVar13 = (int)uVar50;
LAB_00f4013e:
            param_2 = local_308;
            qVar24 = FUN_00f33800(0xffffffff);
            *(qword *)((longlong)pmVar34 + (longlong)iVar13 * 8) = qVar24;
            if (qVar24 == 0) {
              pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
              puVar33 = (uint *)(longlong)iVar13;
              pmVar22 = local_328;
              break;
            }
            uVar50 = (ulonglong)(iVar13 + 1);
            *(undefined4 *)(*(longlong *)(qVar24 + 8) + 0x18) = local_330._0_4_;
            bVar46 = true;
            bVar6 = false;
            param_2 = (mbstate_t *)0x0;
            uVar16 = 0;
            puVar33 = (uint *)local_330;
            pmVar25 = (mbstate_t *)param_3;
          }
          puVar7 = PTR___DefaultRuneLocale_0249c238;
          pmVar22 = local_328;
          param_3 = (uint *)pmVar25;
          if ((((bVar6) || ((char)param_2 != '\0')) ||
              (puVar33 = (uint *)(ulonglong)(*(uint *)(unaff_RDI->__mbstate8 + 0x44) & 2),
              (*(uint *)(unaff_RDI->__mbstate8 + 0x44) & 2) == 0)) || (uVar31 = uVar16, bVar55)) {
            if (!bVar46) goto LAB_00f41880;
          }
          else {
            while( true ) {
              uVar16 = uVar31;
              uVar31 = (uint)uVar51;
              _Var21 = (__darwin_ct_rune_t)local_308;
              puVar33 = (uint *)local_308;
              if (_Var21 < (int)uVar31) break;
              iVar13 = (int)uVar50;
              if (uVar31 < 0x80) {
                if ((*(uint *)(puVar7 + uVar51 * 4 + 0x3c) & 0x1000) != 0) {
LAB_00f40235:
                  uVar16 = ___toupper((__darwin_ct_rune_t)puVar33);
                  uVar31 = uVar31 + 1;
                  if (uVar31 < 0x80) goto LAB_00f40270;
LAB_00f40250:
                  iVar20 = (int)uVar51;
                  uVar18 = ___maskrune((__darwin_ct_rune_t)puVar33,(ulong)param_2);
                  do {
                    if (uVar18 == 0) {
LAB_00f402b3:
                      if ((int)uVar12 <= iVar13) {
                        if (0x400 < (int)uVar12) goto LAB_00f413cf;
                        uVar12 = uVar12 * 2;
                        pmVar34 = _realloc(puVar33,(size_t)param_2);
                        if (pmVar34 == (mbstate_t *)0x0) goto LAB_00f413cf;
                      }
                      param_2 = (mbstate_t *)(ulonglong)uVar16;
                      qVar24 = FUN_00f33800(0xffffffff);
                      puVar33 = (uint *)(longlong)iVar13;
                      *(qword *)((longlong)pmVar34 + (longlong)puVar33 * 8) = qVar24;
                      if (qVar24 == 0) goto LAB_00f413ba;
                      uVar31 = iVar20 + 1;
                      uVar50 = (ulonglong)(iVar13 + 1);
                      uVar16 = 0;
                      goto LAB_00f401e0;
                    }
                    iVar20 = (int)uVar51;
                    uVar19 = ___toupper((__darwin_ct_rune_t)puVar33);
                    uVar18 = uVar16 + 1;
                    puVar33 = (uint *)(ulonglong)uVar18;
                    if ((uVar19 != uVar18) || (_Var21 <= iVar20)) goto LAB_00f402b3;
                    uVar16 = ___toupper(uVar18);
                    uVar51 = (ulonglong)uVar31;
                    uVar31 = uVar31 + 1;
                    if (0x7f < uVar31) goto LAB_00f40250;
LAB_00f40270:
                    iVar20 = (int)uVar51;
                    puVar33 = &dylib_command_00000ff0.dylib.current_version;
                    uVar18 = *(uint *)(puVar7 + (ulonglong)uVar31 * 4 + 0x3c) & 0x1000;
                  } while( true );
                }
                if ((short)*(uint *)(puVar7 + uVar51 * 4 + 0x3c) < 0) goto LAB_00f40353;
LAB_00f401cf:
                uVar31 = uVar31 + 1;
              }
              else {
                iVar20 = ___maskrune(_Var21,(ulong)param_2);
                if (iVar20 != 0) goto LAB_00f40235;
                iVar20 = ___maskrune((__darwin_ct_rune_t)puVar33,(ulong)param_2);
                if (iVar20 == 0) goto LAB_00f401cf;
LAB_00f40353:
                uVar16 = ___tolower((__darwin_ct_rune_t)puVar33);
                uVar31 = uVar31 + 1;
                if (uVar31 < 0x80) goto LAB_00f40390;
                while (iVar20 = ___maskrune((__darwin_ct_rune_t)puVar33,(ulong)param_2), iVar20 != 0
                      ) {
                  while( true ) {
                    uVar19 = ___tolower((__darwin_ct_rune_t)puVar33);
                    uVar18 = uVar16 + 1;
                    puVar33 = (uint *)(ulonglong)uVar18;
                    if ((uVar19 != uVar18) || (_Var21 <= (int)uVar51)) goto LAB_00f403cc;
                    uVar16 = ___tolower(uVar18);
                    uVar51 = (ulonglong)uVar31;
                    uVar31 = uVar31 + 1;
                    if (0x7f < uVar31) break;
LAB_00f40390:
                    if (-1 < *(short *)(puVar7 + (ulonglong)uVar31 * 4 + 0x3c)) goto LAB_00f403cc;
                  }
                }
LAB_00f403cc:
                if ((int)uVar12 <= iVar13) {
                  if ((int)uVar12 < 0x401) {
                    uVar12 = uVar12 * 2;
                    pmVar34 = _realloc(puVar33,(size_t)param_2);
                    if (pmVar34 != (mbstate_t *)0x0) goto LAB_00f40412;
                  }
LAB_00f413cf:
                  pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
                  goto LAB_00f413e8;
                }
LAB_00f40412:
                param_2 = (mbstate_t *)(ulonglong)uVar16;
                qVar24 = FUN_00f33800(0xffffffff);
                puVar33 = (uint *)(longlong)iVar13;
                *(qword *)((longlong)pmVar34 + (longlong)puVar33 * 8) = qVar24;
                if (qVar24 == 0) goto LAB_00f413ba;
                uVar50 = (ulonglong)(iVar13 + 1);
                uVar16 = 0;
              }
LAB_00f401e0:
              uVar51 = (ulonglong)uVar31;
              uVar31 = 0;
              if (uVar16 != 0) {
                pmVar25 = (mbstate_t *)(ulonglong)uVar16;
                puVar33 = (uint *)local_308;
                goto LAB_00f413e8;
              }
            }
            if (uVar16 != 0) {
LAB_00f41880:
              pmVar25 = (mbstate_t *)(ulonglong)uVar16;
              break;
            }
          }
          pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.cputype + 3);
          pmVar22 = *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x28);
        } while (local_328 != pmVar22);
      }
LAB_00f413e8:
      *(mbstate_t **)pmVar1 = pmVar22;
      local_308 = (mbstate_t *)0x0;
      goto LAB_00f413fb;
    case 0x5c:
      param_3 = (uint *)(pmVar23->__mbstate8 + 4);
      if ((((uVar16 & 1) == 0) && (param_3 < pmVar22)) &&
         (((undefined1  [128])*(mbstate_t *)param_3 & (undefined1  [128])0xfffffffe) ==
          (undefined1  [128])0x28)) {
        *(uint **)pmVar1 = param_3;
        goto LAB_00f3f802;
      }
      local_178 = 0;
      if (param_3 < pmVar22) {
        lVar27 = 0;
        switch(*param_3) {
        case 0x44:
          lVar27 = 0xb;
          break;
        default:
          goto switchD_00f40dda_caseD_45;
        case 0x53:
          lVar27 = 9;
          break;
        case 0x57:
          lVar27 = 7;
          break;
        case 0x61:
          lVar27 = 4;
          break;
        case 100:
          lVar27 = 10;
          break;
        case 0x65:
          lVar27 = 5;
          break;
        case 0x66:
          lVar27 = 3;
          break;
        case 0x6e:
          lVar27 = 1;
          break;
        case 0x72:
          lVar27 = 2;
          break;
        case 0x73:
          lVar27 = 8;
          break;
        case 0x74:
          break;
        case 0x77:
          lVar27 = 6;
        }
        pwVar42 = (wchar_t *)(&DAT_02593c68)[lVar27 * 2];
        param_2 = (mbstate_t *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)*pwVar42);
        if ((char)*pwVar42 != '\0') {
          uVar50 = 0;
          do {
            uVar51 = uVar50;
            local_174[uVar51 - 1] = (int)(char)param_2;
            bVar2 = *(byte *)((longlong)pwVar42 + uVar51 + 1);
            param_2 = (mbstate_t *)(ulonglong)bVar2;
            if (bVar2 == 0) break;
            uVar50 = uVar51 + 1;
          } while (uVar51 < 0x3f);
          local_174[uVar51] = 0;
          if (local_178 != 0) {
            local_2f8 = unaff_RDI->_mbstateL;
            uStack_2f0 = *(ulonglong *)(unaff_RDI->__mbstate8 + 8);
            local_2e8 = *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x10);
            local_2d8 = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x20);
            uStack_2d0 = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x28);
            local_2c8 = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x30);
            uStack_2c0 = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x38);
            local_298 = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x60);
            uStack_290 = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x68);
            local_2a8 = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x50);
            uStack_2a0 = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x58);
            local_2b8 = *(ulonglong *)(unaff_RDI->__mbstate8 + 0x40);
            uStack_2b0._0_4_ = ((segment_command *)(unaff_RDI->__mbstate8 + 0x48))->cmd;
            uStack_2b0._4_4_ = ((segment_command *)(unaff_RDI->__mbstate8 + 0x48))->cmdsize;
            puStack_2e0 = &local_178;
            sVar17 = _wcslen(pwVar42);
            local_2c8 = CONCAT44(local_2c8._4_4_,sVar17);
            uStack_2b0 = CONCAT44(uStack_2b0._4_4_,1);
            uVar12 = FUN_00f3f590();
            if (uVar12 == 0) {
              *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) =
                   *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) + 8;
              *(dword *)(unaff_RDI->__mbstate8 + 0x38) = (dword)uStack_2c0;
              local_308 = local_2e8;
              goto switchD_00f3f6a1_default;
            }
            pmVar25 = (mbstate_t *)(ulonglong)uVar12;
            goto LAB_00f4200f;
          }
        }
switchD_00f40dda_caseD_45:
        uVar12 = *param_3;
        if (uVar12 == 0x51) {
          *(uint *)(unaff_RDI->__mbstate8 + 0x44) = uVar16 | 0x10;
          local_33c = 0x10;
          *(char **)(unaff_RDI->__mbstate8 + 0x18) = pmVar23->__mbstate8 + 8;
          goto LAB_00f3f802;
        }
        *(uint **)pmVar1 = param_3;
        local_308 = (mbstate_t *)(ulonglong)uVar12;
        switch(uVar12) {
        case 0x3c:
          local_308 = (mbstate_t *)&MACH_HEADER.ncmds;
          break;
        case 0x3d:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
          goto switchD_00f4172f_caseD_3d;
        case 0x3e:
          local_308 = (mbstate_t *)&segment_command_00000020;
          break;
        case 0x42:
          local_308 = (mbstate_t *)(section_00000068.segname + 8);
          break;
        case 0x62:
          local_308 = (mbstate_t *)&segment_command_00000020.vmsize;
          break;
        default:
          if (uVar12 == 0x78) {
            pmVar25 = (mbstate_t *)(pmVar23->__mbstate8 + 8);
            *(mbstate_t **)pmVar1 = pmVar25;
            uVar12 = *(uint *)(pmVar23->__mbstate8 + 8);
            local_308 = (mbstate_t *)(ulonglong)uVar12;
            if ((local_308 != (mbstate_t *)(section_00000068.segname + 3)) && (pmVar25 < pmVar22)) {
              local_178 = local_178 & 0xff000000;
              pmVar34 = pmVar1;
              if (uVar12 < 0x100) {
                if ((PTR___DefaultRuneLocale_0249c238[(longlong)local_308 * 4 + 0x3e] & 1) != 0) {
                  local_178 = CONCAT31(local_178._1_3_,(char)uVar12);
                  pmVar25 = (mbstate_t *)(pmVar23->__mbstate8 + 0xc);
                  pmVar1->_mbstateL = (longlong)pmVar25;
                  local_308 = (mbstate_t *)(ulonglong)*(uint *)(pmVar23->__mbstate8 + 0xc);
                  if (0xff < *(uint *)(pmVar23->__mbstate8 + 0xc)) goto LAB_00f417ee;
                }
                pmVar34 = local_308;
                if (((PTR___DefaultRuneLocale_0249c238[(longlong)local_308 * 4 + 0x3e] & 1) != 0) &&
                   (pmVar25 < pmVar22)) {
                  local_178._0_2_ = CONCAT11((char)local_308,(undefined1)local_178);
                  pmVar1->_mbstateL = (longlong)(pmVar25->__mbstate8 + 4);
                  pmVar34 = pmVar1;
                }
              }
LAB_00f417ee:
              uVar12 = _strtol(pmVar34->__mbstate8,(char **)&MACH_HEADER.ncmds,(int)param_3);
              local_308 = (mbstate_t *)(ulonglong)uVar12;
              pmVar22 = (mbstate_t *)FUN_00f33800(*(dword *)(unaff_RDI->__mbstate8 + 0x38));
              *(dword *)(unaff_RDI->__mbstate8 + 0x38) =
                   *(dword *)(unaff_RDI->__mbstate8 + 0x38) + 1;
              goto LAB_00f40fcb;
            }
            if (pmVar25 < pmVar22) {
              pmVar23 = (mbstate_t *)(pmVar23->__mbstate8 + 0xc);
              if (((longlong)pmVar22 - (longlong)pmVar23 < 0) ||
                 (uVar12 = *(uint *)pmVar23, uVar12 == 0x7d)) {
                pcVar39 = (char *)0x0;
              }
              else {
                pcVar54 = (char *)((ulonglong)((longlong)pmVar22 - (longlong)pmVar23) >> 2);
                pcVar38 = (char *)0x0;
                do {
                  pmVar25 = pmVar23;
                  if ((0xff < uVar12) ||
                     ((PTR___DefaultRuneLocale_0249c238[(ulonglong)uVar12 * 4 + 0x3e] & 1) == 0)) {
                    pmVar1->_mbstateL = (longlong)pmVar25;
                    pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.cpusubtype + 1);
                    goto LAB_00f4200f;
                  }
                  *(char *)((longlong)&local_178 + (longlong)pcVar38) = (char)uVar12;
                  pcVar39 = pcVar54 + 1;
                  if (pcVar54 == pcVar38) break;
                  uVar12 = *(uint *)(pmVar25->__mbstate8 + 4);
                  pcVar39 = pcVar38 + 1;
                  pcVar38 = pcVar39;
                  pmVar23 = (mbstate_t *)(pmVar25->__mbstate8 + 4);
                } while (uVar12 != 0x7d);
              }
              *(char **)(unaff_RDI->__mbstate8 + 0x18) = pmVar25->__mbstate8 + 8;
              *(undefined1 *)((longlong)local_174 + (((ulonglong)pcVar39 & 0xffffffff) - 4)) = 0;
              uVar12 = _strtol(pcVar39,(char **)&MACH_HEADER.ncmds,(int)param_3);
              local_308 = (mbstate_t *)(ulonglong)uVar12;
              pmVar22 = (mbstate_t *)FUN_00f33800(*(dword *)(unaff_RDI->__mbstate8 + 0x38));
              *(dword *)(unaff_RDI->__mbstate8 + 0x38) =
                   *(dword *)(unaff_RDI->__mbstate8 + 0x38) + 1;
              goto LAB_00f40fcb;
            }
          }
switchD_00f4172f_caseD_3d:
          if (((uint)local_308 < 0x100) &&
             ((PTR___DefaultRuneLocale_0249c238[(longlong)local_308 * 4 + 0x3d] & 4) != 0)) {
            uVar12 = (uint)local_308 - 0x30;
            param_2 = (mbstate_t *)(ulonglong)uVar12;
            local_308 = (mbstate_t *)FUN_00f33800(*(dword *)(unaff_RDI->__mbstate8 + 0x38));
            if (local_308 != (mbstate_t *)0x0) {
              *(dword *)(unaff_RDI->__mbstate8 + 0x38) =
                   *(dword *)(unaff_RDI->__mbstate8 + 0x38) + 1;
              if ((int)uVar12 < (int)*(dword *)(unaff_RDI->__mbstate8 + 0x3c)) {
                uVar12 = *(dword *)(unaff_RDI->__mbstate8 + 0x3c);
              }
              *(uint *)(unaff_RDI->__mbstate8 + 0x3c) = uVar12;
              *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) =
                   *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) + 4;
              goto switchD_00f3f6a1_default;
            }
            goto LAB_00f4200a;
          }
          pmVar22 = (mbstate_t *)FUN_00f33800(*(dword *)(unaff_RDI->__mbstate8 + 0x38));
          *(dword *)(unaff_RDI->__mbstate8 + 0x38) = *(dword *)(unaff_RDI->__mbstate8 + 0x38) + 1;
          goto LAB_00f41af0;
        }
        pmVar22 = (mbstate_t *)FUN_00f33800(0xffffffff);
LAB_00f41af0:
        *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) =
             *(ulonglong *)(unaff_RDI->__mbstate8 + 0x18) + 4;
        goto LAB_00f40fcb;
      }
      pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.cputype + 1);
      goto LAB_00f4200f;
    case 0x5e:
      if ((uVar16 & 1) == 0) {
        if (((((mbstate_t *)((longlong)pmVar23 + -8) < *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x20)
              ) || (*(dword *)((longlong)pmVar23 + -8) != 0x5c)) ||
            (*(dword *)((longlong)pmVar23 + -4) != 0x28)) &&
           (pmVar23 != *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x20)))
        goto switchD_00f3f70c_caseD_25;
      }
      param_2 = (mbstate_t *)((longlong)&MACH_HEADER.magic + 1);
      local_308 = (mbstate_t *)FUN_00f33800(0xffffffff);
      if (local_308 != (mbstate_t *)0x0) goto LAB_00f408cc;
    }
    goto LAB_00f4200a;
  case 2:
    uVar14 = FUN_00f42760();
    if (*(int *)(local_308->__mbstate8 + 0x14) < 0) {
      dVar15 = (dword)*(qword *)(local_308->__mbstate8 + 0x18);
    }
    else {
      lVar27 = FUN_00f33800(0xffffffff,0xffffffff);
      if (lVar27 == 0) goto LAB_00f4200a;
      param_2 = local_308;
      pmVar23 = (mbstate_t *)FUN_00f339e0();
      pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
      if (pmVar23 == (mbstate_t *)0x0) goto LAB_00f4200f;
      dVar15 = (dword)*(qword *)(local_308->__mbstate8 + 0x18);
      *(dword *)(pmVar23->__mbstate8 + 0x18) = dVar15;
      local_308 = pmVar23;
    }
    *(undefined4 *)(local_308->__mbstate8 + 0x14) = uVar14;
    *(dword *)(local_308->__mbstate8 + 0x18) = dVar15 + 1;
    break;
  case 3:
    uVar12 = FUN_00f425c0();
joined_r0x00f3f7f8:
    if (uVar12 == 0) goto LAB_00f3f802;
    goto LAB_00f3f807;
  case 4:
    if ((*(dword *)(unaff_RDI->__mbstate8 + 0x44) & 0x10) == 0) {
      uVar12 = FUN_00f425c0();
      goto joined_r0x00f3f7f8;
    }
LAB_00f3f802:
    uVar12 = FUN_00f425c0();
    goto LAB_00f3f807;
  case 5:
    puVar33 = *(uint **)(unaff_RDI->__mbstate8 + 0x18);
    if (*(uint **)(unaff_RDI->__mbstate8 + 0x28) <= puVar33) break;
    uVar12 = *(uint *)(unaff_RDI->__mbstate8 + 0x44);
    if ((uVar12 & 0x10) != 0) {
LAB_00f3fa68:
      if ((uVar12 & 0x20) == 0) {
        uVar12 = FUN_00f425c0();
        if ((uVar12 == 0) && (uVar12 = FUN_00f42690(), uVar12 == 0)) {
          uVar12 = FUN_00f425c0();
joined_r0x00f3fae8:
          if ((uVar12 == 0) && (uVar12 = FUN_00f425c0(), uVar12 == 0)) break;
        }
      }
      else {
        uVar12 = FUN_00f42690();
        if ((uVar12 == 0) && (uVar12 = FUN_00f425c0(), uVar12 == 0)) {
          uVar12 = FUN_00f425c0();
          goto joined_r0x00f3fae8;
        }
      }
      goto LAB_00f3f807;
    }
    uVar16 = *puVar33;
    param_2 = (mbstate_t *)(ulonglong)uVar16;
    if (((uVar12 & 1) != 0) && (uVar16 == 0x7c)) break;
    if (((uVar12 & 1) != 0) && ((uVar16 == 0x29 && (0 < local_334)))) {
      local_334 = local_334 + -1;
      break;
    }
    if ((((uVar12 & 1) != 0) || (uVar16 != 0x5c)) || (puVar33[1] != 0x29)) goto LAB_00f3fa68;
    pmVar23 = (mbstate_t *)((ulonglong)(local_334 == 0) << 3);
    local_334 = local_334 + -1;
    pmVar1->_mbstateL = (longlong)(puVar33 + 2);
    goto LAB_00f41113;
  case 6:
    FUN_00f42780();
    pmVar22 = (mbstate_t *)FUN_00f339e0();
    goto LAB_00f40fcb;
  case 7:
    piVar28 = *(int **)(unaff_RDI->__mbstate8 + 0x18);
    if ((piVar28 < *(int **)(unaff_RDI->__mbstate8 + 0x28)) &&
       ((*(dword *)(unaff_RDI->__mbstate8 + 0x44) & 0x10) == 0)) {
      if (*piVar28 == 0x29) {
        pmVar1->_mbstateL = (longlong)(piVar28 + 1);
      }
      else if (*piVar28 == 0x7c) {
        uVar12 = FUN_00f425c0();
        if ((((uVar12 == 0) && (uVar12 = FUN_00f42690(), uVar12 == 0)) &&
            (uVar12 = FUN_00f425c0(), uVar12 == 0)) && (uVar12 = FUN_00f425c0(), uVar12 == 0))
        goto LAB_00f408cc;
        goto LAB_00f3f807;
      }
    }
    break;
  case 8:
    FUN_00f42780();
    pmVar22 = (mbstate_t *)FUN_00f33950();
LAB_00f40fcb:
    pmVar23 = (mbstate_t *)0x0;
    param_2 = local_308;
    local_308 = pmVar22;
    if (pmVar22 != (mbstate_t *)0x0) goto LAB_00f41113;
LAB_00f4200a:
    pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
    goto LAB_00f4200f;
  case 9:
    pmVar23 = *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x18);
    pmVar22 = *(mbstate_t **)(unaff_RDI->__mbstate8 + 0x28);
    if (pmVar23 < pmVar22) {
      uVar12 = *(uint *)(unaff_RDI->__mbstate8 + 0x44);
      param_3 = (uint *)(ulonglong)uVar12;
      if ((uVar12 & 0x10) == 0) {
        dVar15 = *(dword *)pmVar23;
        if ((int)dVar15 < 0x3f) {
          if (dVar15 == 0x2a) {
LAB_00f3f9c6:
            uVar12 = uVar12 >> 6 & 1;
            param_3 = (uint *)(ulonglong)uVar12;
            param_4 = (mbstate_t *)CONCAT71((int7)((ulonglong)param_4 >> 8),dVar15 == 0x2b);
            pmVar25 = (mbstate_t *)(pmVar23->__mbstate8 + 4);
            if (pmVar25 < pmVar22) {
              if (*(dword *)pmVar25 == 0x3f) {
                param_3 = (uint *)(ulonglong)(uVar12 ^ 1);
                pmVar23 = pmVar25;
              }
              else if (*(dword *)pmVar25 - 0x2a < 2) {
LAB_00f4204b:
                pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.filetype + 1);
                goto LAB_00f4200f;
              }
            }
            param_2 = (mbstate_t *)(ulonglong)(dVar15 == 0x2b);
            *(char **)(unaff_RDI->__mbstate8 + 0x18) = pmVar23->__mbstate8 + 4;
            local_308 = (mbstate_t *)FUN_00f338a0((uint)(dVar15 == 0x3f) * 2 + -1);
            if (local_308 == (mbstate_t *)0x0) goto LAB_00f4200a;
            goto LAB_00f3f802;
          }
          if (dVar15 == 0x2b) {
LAB_00f3f9bc:
            if ((uVar12 & 1) != 0) goto LAB_00f3f9c6;
          }
        }
        else if (dVar15 == 0x7b) {
          if ((uVar12 & 1) != 0) {
LAB_00f3fb39:
            param_3 = (uint *)pmVar23;
            pmVar23 = (mbstate_t *)((longlong)param_3 + 4);
            *(mbstate_t **)pmVar1 = pmVar23;
            param_2 = (mbstate_t *)0xffffffff;
            pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.magic + 1);
            if ((pmVar23 < pmVar22) && (uVar16 = *(dword *)pmVar23 - 0x30, uVar16 < 10)) {
              pmVar34 = (mbstate_t *)((longlong)param_3 + 8);
              param_2 = (mbstate_t *)0xffffffff;
              pmVar26 = (mbstate_t *)((longlong)&MACH_HEADER.magic + 2);
              do {
                pmVar25 = pmVar26;
                iVar13 = (int)param_2;
                if (iVar13 < 0) {
                  iVar13 = 0;
                }
                param_2 = (mbstate_t *)(ulonglong)(uVar16 + iVar13 * 10);
                if (pmVar22 <= pmVar34) break;
                uVar16 = *(dword *)pmVar34 - 0x30;
                pmVar34 = (mbstate_t *)(pmVar34->__mbstate8 + 4);
                pmVar26 = (mbstate_t *)(pmVar25->__mbstate8 + 1);
              } while (uVar16 < 10);
            }
            pmVar26 = (mbstate_t *)((longlong)param_3 + (longlong)pmVar25 * 4);
            uVar16 = (uint)param_2;
            pmVar34 = pmVar25;
            pmVar48 = param_2;
            if ((pmVar26 < pmVar22) && (*(dword *)pmVar26 == 0x2c)) {
              pmVar34 = (mbstate_t *)(pmVar25->__mbstate8 + 1);
              pmVar48 = (mbstate_t *)0xffffffff;
              if ((mbstate_t *)((longlong)param_3 + (longlong)pmVar25 * 4 + 4) < pmVar22) {
                pmVar48 = (mbstate_t *)0xffffffff;
                lVar27 = (longlong)pmVar25 * 4;
                do {
                  iVar13 = (int)pmVar48;
                  uVar31 = *(dword *)((longlong)param_3 + (longlong)pmVar34 * 4) - 0x30;
                  if (9 < uVar31) break;
                  if (iVar13 < 0) {
                    iVar13 = 0;
                  }
                  pmVar48 = (mbstate_t *)(ulonglong)(uVar31 + iVar13 * 10);
                  pmVar34 = (mbstate_t *)((longlong)pmVar34 + 1);
                  lVar30 = lVar27 + 8;
                  lVar27 = lVar27 + 4;
                } while ((mbstate_t *)((longlong)param_3 + lVar30) < pmVar22);
              }
            }
            uVar31 = (uint)pmVar48;
            if ((0xff < (int)uVar31) || (-1 < (int)uVar31 && (int)uVar31 < (int)uVar16)) {
LAB_00f42033:
              pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.cpusubtype + 2);
              goto LAB_00f4200f;
            }
            local_36c = uVar12 >> 6 & 1;
            bVar56 = false;
            local_360 = -1;
            local_338 = -1;
            local_35c = -1;
            local_358 = (mbstate_t *)0xffffffff;
            uVar52 = 0xffffffff;
            uVar53 = 0xffffffff;
            uVar18 = 0xffffffff;
            uVar19 = 0xffffffff;
            bVar46 = false;
            bVar55 = false;
            do {
              pmVar25 = pmVar34;
              uVar47 = 0;
              param_4 = pmVar25;
              if (bVar55) {
                bVar55 = true;
              }
              else if ((mbstate_t *)((longlong)param_3 + (longlong)pmVar25 * 4 + 4) < pmVar22) {
                bVar55 = false;
                do {
                  pmVar34 = (mbstate_t *)(param_4->__mbstate8 + 1);
                  dVar15 = *(dword *)((longlong)param_3 + (longlong)param_4 * 4);
                  uVar44 = 0x7fffffff;
                  switch(dVar15) {
                  case 0x20:
                  case 0x2c:
                    goto switchD_00f40a4d_caseD_20;
                  case 0x21:
                  case 0x22:
                  case 0x24:
                  case 0x25:
                  case 0x26:
                  case 0x27:
                  case 0x28:
                  case 0x29:
                  case 0x2a:
                    goto switchD_00f40a4d_caseD_21;
                  case 0x23:
                    pmVar26 = (mbstate_t *)((longlong)param_3 + (longlong)pmVar34 * 4);
                    uVar18 = 0xffffffff;
                    do {
                      if (9 < *(dword *)pmVar26 - 0x30) break;
                      if ((int)uVar18 < 0) {
                        uVar18 = uVar47;
                      }
                      uVar18 = (*(dword *)pmVar26 - 0x30) + uVar18 * 10;
                      pmVar34 = (mbstate_t *)(pmVar34->__mbstate8 + 1);
                      pmVar26 = (mbstate_t *)(pmVar26->__mbstate8 + 4);
                    } while (pmVar26 < pmVar22);
                    if (0x7ffffffe < uVar18) {
                      uVar18 = 0x7fffffff;
                    }
                    break;
                  case 0x2b:
                    pmVar26 = (mbstate_t *)((longlong)param_3 + (longlong)pmVar34 * 4);
                    uVar52 = 0xffffffff;
                    do {
                      if (9 < *(dword *)pmVar26 - 0x30) break;
                      if ((int)uVar52 < 0) {
                        uVar52 = uVar47;
                      }
                      uVar52 = (*(dword *)pmVar26 - 0x30) + uVar52 * 10;
                      pmVar34 = (mbstate_t *)(pmVar34->__mbstate8 + 1);
                      pmVar26 = (mbstate_t *)(pmVar26->__mbstate8 + 4);
                    } while (pmVar26 < pmVar22);
                    if (0x7ffffffe < uVar52) {
                      uVar52 = uVar44;
                    }
                    break;
                  case 0x2d:
                    pmVar26 = (mbstate_t *)((longlong)param_3 + (longlong)pmVar34 * 4);
                    uVar53 = 0xffffffff;
                    do {
                      if (9 < *(dword *)pmVar26 - 0x30) break;
                      if ((int)uVar53 < 0) {
                        uVar53 = uVar47;
                      }
                      uVar53 = (*(dword *)pmVar26 - 0x30) + uVar53 * 10;
                      pmVar34 = (mbstate_t *)(pmVar34->__mbstate8 + 1);
                      pmVar26 = (mbstate_t *)(pmVar26->__mbstate8 + 4);
                    } while (pmVar26 < pmVar22);
                    if (0x7ffffffe < uVar53) {
                      uVar53 = uVar44;
                    }
                    break;
                  default:
                    if (dVar15 == 0x7e) {
                      pmVar26 = (mbstate_t *)((longlong)param_3 + (longlong)pmVar34 * 4);
                      uVar19 = 0xffffffff;
                      do {
                        if (9 < *(dword *)pmVar26 - 0x30) break;
                        if ((int)uVar19 < 0) {
                          uVar19 = uVar47;
                        }
                        uVar19 = (*(dword *)pmVar26 - 0x30) + uVar19 * 10;
                        pmVar34 = (mbstate_t *)((longlong)pmVar34 + 1);
                        pmVar26 = (mbstate_t *)(pmVar26->__mbstate8 + 4);
                      } while (pmVar26 < pmVar22);
                      if (0x7ffffffe < uVar19) {
                        uVar19 = uVar44;
                      }
                      bVar56 = true;
                      goto switchD_00f40a4d_caseD_20;
                    }
                    goto switchD_00f40a4d_caseD_21;
                  }
                  bVar55 = true;
switchD_00f40a4d_caseD_20:
                  param_4 = pmVar34;
                } while ((mbstate_t *)((longlong)param_3 + (longlong)param_4 * 4 + 4) < pmVar22);
              }
              else {
                bVar55 = false;
              }
switchD_00f40a4d_caseD_21:
              pmVar34 = param_4;
              if (bVar46) {
                bVar46 = true;
              }
              else if ((mbstate_t *)((longlong)param_3 + (longlong)param_4 * 4 + 4) < pmVar22) {
                bVar46 = false;
                do {
                  pmVar34 = (mbstate_t *)((longlong)param_4 + 1);
                  pmVar26 = (mbstate_t *)((longlong)param_3 + (longlong)param_4 * 4);
                  dVar15 = *(dword *)((longlong)param_3 + (longlong)param_4 * 4);
                  switch(dVar15) {
                  case 0x20:
                  case 0x2b:
                    break;
                  default:
                    uVar47 = dVar15 - 0x30;
                    pmVar34 = param_4;
                    if (9 < uVar47) goto switchD_00f40c0d_caseD_2c;
                    iVar13 = -1;
                    if (pmVar26 < pmVar22) {
                      lVar27 = (longlong)param_4 * 4;
                      iVar13 = -1;
                      do {
                        if (iVar13 < 0) {
                          iVar13 = 0;
                        }
                        iVar13 = uVar47 + iVar13 * 10;
                        dVar15 = *(dword *)((longlong)pmVar23 + (longlong)param_4 * 4);
                        param_4 = (mbstate_t *)(param_4->__mbstate8 + 1);
                        if (pmVar22 <= (mbstate_t *)(pmVar23->__mbstate8 + lVar27)) break;
                        uVar47 = dVar15 - 0x30;
                        lVar27 = lVar27 + 4;
                      } while (uVar47 < 10);
                    }
                    if (dVar15 == 100) {
                      pmVar34 = (mbstate_t *)(param_4->__mbstate8 + 1);
                      bVar46 = true;
                      local_338 = iVar13;
                    }
                    else if (dVar15 == 0x73) {
                      pmVar34 = (mbstate_t *)(param_4->__mbstate8 + 1);
                      bVar46 = true;
                      local_35c = iVar13;
                    }
                    else {
                      if (dVar15 != 0x69) goto LAB_00f42033;
                      pmVar34 = (mbstate_t *)(param_4->__mbstate8 + 1);
                      bVar46 = true;
                      local_360 = iVar13;
                    }
                    break;
                  case 0x2c:
                    goto switchD_00f40c0d_caseD_2c;
                  case 0x3c:
                    pmVar8 = (mbstate_t *)((longlong)param_3 + (longlong)param_4 * 4 + 8);
                    pmVar9 = (mbstate_t *)(param_4->__mbstate8 + 2);
                    pmVar34 = param_4;
                    do {
                      pmVar45 = pmVar9;
                      pmVar43 = pmVar8;
                      pmVar34 = (mbstate_t *)(pmVar34->__mbstate8 + 1);
                      pdVar36 = (dword *)(pmVar26->__mbstate8 + 4);
                      pmVar26 = (mbstate_t *)(pmVar26->__mbstate8 + 4);
                      pmVar8 = (mbstate_t *)(pmVar43->__mbstate8 + 4);
                      pmVar9 = (mbstate_t *)(pmVar45->__mbstate8 + 1);
                    } while (*pdVar36 == 0x20);
                    if ((pmVar26 < pmVar22) && (uVar47 = *pdVar36 - 0x30, uVar47 < 10)) {
                      iVar13 = -1;
                      do {
                        pmVar34 = pmVar45;
                        if (iVar13 < 0) {
                          iVar13 = 0;
                        }
                        iVar13 = uVar47 + iVar13 * 10;
                        if (pmVar22 <= pmVar43) break;
                        uVar47 = *(int *)pmVar43 - 0x30;
                        pmVar43 = (mbstate_t *)(pmVar43->__mbstate8 + 4);
                        pmVar45 = (mbstate_t *)(pmVar34->__mbstate8 + 1);
                      } while (uVar47 < 10);
                      if (iVar13 < 0) goto LAB_00f40d6e;
                      local_358 = (mbstate_t *)(ulonglong)(iVar13 - 1);
                    }
                    else {
LAB_00f40d6e:
                      local_358 = (mbstate_t *)0x7fffffff;
                    }
                    bVar56 = true;
                  }
                  param_4 = pmVar34;
                } while ((mbstate_t *)((longlong)param_3 + (longlong)pmVar34 * 4 + 4) < pmVar22);
              }
              else {
                bVar46 = false;
              }
switchD_00f40c0d_caseD_2c:
            } while (pmVar25 != pmVar34);
            pmVar23 = (mbstate_t *)((longlong)param_3 + (longlong)pmVar25 * 4);
            if (pmVar22 <= pmVar23) {
              pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.cpusubtype + 1);
              goto LAB_00f4200f;
            }
            if (pmVar25 == (mbstate_t *)((longlong)&MACH_HEADER.magic + 1U)) goto LAB_00f42033;
            pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.cpusubtype + 2);
            if ((uVar12 & 1) == 0) {
              if ((pmVar22 <= (mbstate_t *)(pmVar23->__mbstate8 + 4)) || (*(dword *)pmVar23 != 0x5c)
                 ) goto LAB_00f4200f;
              lVar27 = 2;
              dVar15 = *(dword *)(pmVar23->__mbstate8 + 4);
            }
            else {
              lVar27 = 1;
              dVar15 = *(dword *)pmVar23;
            }
            if (dVar15 != 0x7d) goto LAB_00f4200f;
            pmVar23 = (mbstate_t *)((longlong)pmVar23 + lVar27 * 4);
            if (pmVar23 < pmVar22) {
              if (*(dword *)pmVar23 == 0x3f) {
                local_36c = local_36c ^ 1;
                pmVar23 = (mbstate_t *)(pmVar23->__mbstate8 + 4);
              }
              else if (*(dword *)pmVar23 - 0x2a < 2) goto LAB_00f4204b;
            }
            if (uVar16 == 0 && uVar31 == 0) {
              param_2 = (mbstate_t *)0xffffffff;
              local_308 = (mbstate_t *)FUN_00f33800(0xffffffff);
              if (local_308 == (mbstate_t *)0x0) goto LAB_00f4200a;
            }
            else {
              if ((int)(uVar16 & uVar31) < 0) {
                pmVar48 = (mbstate_t *)((longlong)&MACH_HEADER.magic + 1);
                param_2 = (mbstate_t *)((longlong)&MACH_HEADER.magic + 1);
              }
              param_3 = (uint *)(ulonglong)local_36c;
              local_308 = (mbstate_t *)FUN_00f338a0(pmVar48);
              if (local_308 == (mbstate_t *)0x0) goto LAB_00f4200a;
              if (((!bVar56) && (!bVar46)) && (!bVar55)) goto LAB_00f414ba;
              uVar12 = uVar52;
              if (bVar46 || bVar55) {
                uVar12 = 0x7fffffff;
                if (local_360 == -1) {
                  uVar12 = 0;
                }
                if (uVar52 != 0xffffffff) {
                  uVar12 = uVar52;
                }
                uVar16 = 0x7fffffff;
                if (local_338 == -1) {
                  uVar16 = 0;
                }
                if (uVar53 != 0xffffffff) {
                  uVar16 = uVar53;
                }
                uVar53 = uVar16;
                if ((uVar18 == 0xffffffff) && (uVar18 = 0x7fffffff, local_35c == -1)) {
                  uVar18 = 0;
                }
              }
              uVar50 = *(ulonglong *)(local_308->__mbstate8 + 8);
              *(dword *)(unaff_RDI->__mbstate8 + 0x40) = 1;
              param_3 = &segment_command_00000020.cmdsize;
              piVar28 = (int *)FUN_00f3f480(0,0);
              pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
              if (piVar28 == (int *)0x0) goto LAB_00f4200f;
              if (uVar19 == 0xffffffff) {
                uVar19 = 0x7fffffff;
              }
              if ((int)local_358 == -1) {
                local_358 = (mbstate_t *)0x7fffffff;
              }
              piVar28[8] = -1;
              *piVar28 = local_360;
              piVar28[1] = local_338;
              piVar28[2] = local_35c;
              piVar28[3] = (int)local_358;
              piVar28[4] = uVar12;
              piVar28[5] = uVar53;
              piVar28[6] = uVar18;
              piVar28[7] = uVar19;
              *(int **)(uVar50 + 0x18) = piVar28;
              param_2 = local_358;
            }
LAB_00f414ba:
            *(mbstate_t **)pmVar1 = pmVar23;
            goto LAB_00f3f802;
          }
        }
        else if (dVar15 == 0x5c) {
          if ((((uVar12 & 1) == 0) &&
              (pmVar23 = (mbstate_t *)(pmVar23->__mbstate8 + 4), pmVar23 < pmVar22)) &&
             (*(dword *)pmVar23 == 0x7b)) goto LAB_00f3fb39;
        }
        else if (dVar15 == 0x3f) goto LAB_00f3f9bc;
      }
    }
    break;
  case 10:
    dVar15 = FUN_00f42760();
    *(dword *)(unaff_RDI->__mbstate8 + 0x44) = dVar15;
  }
switchD_00f3f6a1_default:
  pmVar23 = (mbstate_t *)0x0;
  goto LAB_00f41113;
  while ((uVar51 < uVar50 && (uVar51 = uVar51 + 1, (int)pmVar25 == 0))) {
LAB_00f4191b:
    puVar5 = *(ulonglong **)(*(longlong *)((longlong)pmVar34 + uVar51 * 8 + -8) + 8);
    puVar33 = (uint *)*puVar5;
    iVar4 = (int)puVar5[1];
    if ((int)puVar33 < iVar13) {
      if (iVar13 <= iVar4 + 1) {
        iVar13 = iVar4 + 1;
      }
      pmVar25 = (mbstate_t *)0x0;
    }
    else if (iVar20 < (int)puVar33) {
      *puVar5 = (longlong)iVar20;
      puVar5[1] = ((longlong)puVar33 << 0x20) + -0x100000000 >> 0x20;
      *(dword *)(puVar5 + 2) = *(dword *)(unaff_RDI->__mbstate8 + 0x38);
      param_2 = (mbstate_t *)0x0;
      puVar33 = (uint *)0x0;
      param_3 = (uint *)local_310;
      uVar29 = FUN_00f3f480();
      puVar5[4] = uVar29;
      if (uVar29 == 0) {
        pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
        goto LAB_00f413fb;
      }
      iVar20 = iVar4 + 1;
      param_2 = (mbstate_t *)(local_350 * 4);
      _memcpy(puVar33,(mbstate_t *)(local_350 * 4),(size_t)param_3);
      *(undefined4 *)(puVar5[4] + local_350 * 4) = 0;
      iVar13 = iVar20;
      if (local_308 == (mbstate_t *)0x0) {
        local_308 = *(mbstate_t **)((longlong)pmVar34 + uVar51 * 8 + -8);
        pmVar25 = (mbstate_t *)0x0;
      }
      else {
        param_2 = *(mbstate_t **)((longlong)pmVar34 + uVar51 * 8 + -8);
        puVar33 = (uint *)FUN_00f33950();
        pmVar25 = (mbstate_t *)0x0;
        local_308 = (mbstate_t *)puVar33;
        if ((mbstate_t *)puVar33 == (mbstate_t *)0x0) {
          pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
        }
      }
    }
    else {
      iVar20 = iVar4 + 1;
      pmVar25 = (mbstate_t *)0x0;
      iVar13 = iVar20;
    }
  }
  goto LAB_00f41c53;
  while( true ) {
    bVar55 = false;
    if ((uVar50 <= uVar51) || (uVar51 = uVar51 + 1, bVar55 = false, (int)pmVar25 != 0)) break;
LAB_00f41cd4:
    puVar33 = *(uint **)(*(longlong *)((longlong)pmVar34 + uVar51 * 8 + -8) + 8);
    param_2 = *(mbstate_t **)puVar33;
    dVar3 = (dword)*(qword *)((longlong)puVar33 + 8);
    if ((int)param_2 < iVar13) {
      if (iVar13 <= (int)(dVar3 + 1)) {
        iVar13 = dVar3 + 1;
      }
LAB_00f41d75:
      pmVar25 = (mbstate_t *)0x0;
    }
    else {
      if ((int)param_2 <= iVar20) {
LAB_00f41d71:
        iVar20 = dVar3 + 1;
        iVar13 = iVar20;
        goto LAB_00f41d75;
      }
      *(longlong *)puVar33 = (longlong)iVar20;
      *(longlong *)((longlong)puVar33 + 8) = ((longlong)param_2 << 0x20) + -0x100000000 >> 0x20;
      iVar20 = dVar3 + 1;
      *(dword *)((longlong)puVar33 + 0x10) = *(dword *)(unaff_RDI->__mbstate8 + 0x38);
      *(ulonglong *)((longlong)puVar33 + 0x20) = 0;
      if (local_308 == (mbstate_t *)0x0) {
        local_308 = *(mbstate_t **)((longlong)pmVar34 + uVar51 * 8 + -8);
        param_2 = unaff_RDI;
        goto LAB_00f41d71;
      }
      param_2 = *(mbstate_t **)((longlong)pmVar34 + uVar51 * 8 + -8);
      local_308 = (mbstate_t *)FUN_00f33950();
      puVar33 = (uint *)0x0;
      pmVar25 = (mbstate_t *)puVar33;
      iVar13 = iVar20;
      if (local_308 == (mbstate_t *)0x0) {
        puVar33 = &MACH_HEADER.filetype;
        pmVar25 = (mbstate_t *)puVar33;
      }
    }
  }
  goto LAB_00f41df3;
  while( true ) {
    param_2 = (mbstate_t *)(local_350 * 4);
    _memcpy(puVar33,(mbstate_t *)(local_350 * 4),(size_t)param_3);
    *(undefined4 *)(*(longlong *)(lVar27 + 0x20) + local_350 * 4) = 0;
    if (local_308 == (mbstate_t *)0x0) {
      local_308 = *(mbstate_t **)((longlong)pmVar34 + uVar51 * 8 + -8);
      pmVar25 = (mbstate_t *)0x0;
    }
    else {
      param_2 = *(mbstate_t **)((longlong)pmVar34 + uVar51 * 8 + -8);
      puVar33 = (uint *)FUN_00f33950();
      pmVar25 = (mbstate_t *)0x0;
      local_308 = (mbstate_t *)puVar33;
      if ((mbstate_t *)puVar33 == (mbstate_t *)0x0) {
        pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
      }
    }
    if ((uVar50 <= uVar51) || (uVar51 = uVar51 + 1, (int)pmVar25 != 0)) break;
LAB_00f41b9b:
    lVar27 = *(longlong *)(*(longlong *)((longlong)pmVar34 + uVar51 * 8 + -8) + 8);
    *(dword *)(lVar27 + 0x10) = *(dword *)(unaff_RDI->__mbstate8 + 0x38);
    param_2 = (mbstate_t *)0x0;
    puVar33 = (uint *)0x0;
    param_3 = (uint *)local_310;
    lVar30 = FUN_00f3f480();
    *(longlong *)(lVar27 + 0x20) = lVar30;
    if (lVar30 == 0) {
      pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
      goto LAB_00f413fb;
    }
  }
LAB_00f41c53:
  bVar55 = true;
  goto LAB_00f41df3;
  while ((bVar55 = false, uVar51 < uVar50 && (uVar51 = uVar51 + 1, (int)pmVar25 == 0))) {
LAB_00f41d95:
    lVar27 = *(longlong *)(*(longlong *)((longlong)pmVar34 + uVar51 * 8 + -8) + 8);
    puVar33 = (uint *)(ulonglong)*(uint *)(unaff_RDI->__mbstate8 + 0x38);
    *(uint *)(lVar27 + 0x10) = *(uint *)(unaff_RDI->__mbstate8 + 0x38);
    *(undefined8 *)(lVar27 + 0x20) = 0;
    if (local_308 == (mbstate_t *)0x0) {
      local_308 = *(mbstate_t **)((longlong)pmVar34 + uVar51 * 8 + -8);
      param_2 = unaff_RDI;
LAB_00f41ddc:
      pmVar25 = (mbstate_t *)0x0;
    }
    else {
      param_2 = *(mbstate_t **)((longlong)pmVar34 + uVar51 * 8 + -8);
      local_308 = (mbstate_t *)FUN_00f33950();
      pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
      if (local_308 != (mbstate_t *)0x0) goto LAB_00f41ddc;
    }
  }
LAB_00f41df3:
  if (((int)pmVar25 == 0) && (dVar15 == 0x5e)) {
    puVar33 = (uint *)(ulonglong)*(uint *)(unaff_RDI->__mbstate8 + 0x38);
    param_2 = (mbstate_t *)0x7fffffff;
    pmVar23 = (mbstate_t *)FUN_00f33800();
    pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
    if (pmVar23 != (mbstate_t *)0x0) {
      uVar50 = *(ulonglong *)(pmVar23->__mbstate8 + 8);
      if (bVar55) {
        param_2 = (mbstate_t *)0x0;
        puVar33 = (uint *)0x0;
        lVar27 = FUN_00f3f480();
        *(longlong *)(uVar50 + 0x20) = lVar27;
        if (lVar27 == 0) {
          pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
          param_3 = (uint *)local_310;
          goto LAB_00f413fb;
        }
        param_2 = (mbstate_t *)(local_350 * 4);
        _memcpy(puVar33,param_2,(size_t)local_310);
        *(undefined4 *)(*(longlong *)(uVar50 + 0x20) + local_350 * 4) = 0;
        param_3 = (uint *)local_310;
      }
      else {
        *(undefined8 *)(uVar50 + 0x20) = 0;
      }
      if (local_308 == (mbstate_t *)0x0) {
        pmVar25 = (mbstate_t *)0x0;
        local_308 = pmVar23;
      }
      else {
        puVar33 = (uint *)FUN_00f33950();
        pmVar25 = (mbstate_t *)0x0;
        param_2 = pmVar23;
        local_308 = (mbstate_t *)puVar33;
        if ((mbstate_t *)puVar33 == (mbstate_t *)0x0) {
          pmVar25 = (mbstate_t *)&MACH_HEADER.filetype;
        }
      }
    }
  }
LAB_00f413fb:
  _free(puVar33);
  *(dword *)(unaff_RDI->__mbstate8 + 0x38) = *(dword *)(unaff_RDI->__mbstate8 + 0x38) + 1;
  pmVar23 = (mbstate_t *)0x0;
  if ((int)pmVar25 != 0) goto LAB_00f4200f;
LAB_00f41113:
  iVar13 = FUN_00f425b0();
  bVar55 = (int)pmVar23 == 0;
  if ((iVar13 <= iVar11) || ((int)pmVar23 != 0)) goto LAB_00f41fbf;
  goto LAB_00f3f680;
switchD_00f40ed2_caseD_23:
  pmVar1->_mbstateL = (longlong)pcVar39;
  do {
    pmVar34 = pmVar23;
    if (pmVar22 <= (mbstate_t *)((longlong)pmVar34 + -4)) goto LAB_00f42044;
    *(mbstate_t **)pmVar1 = pmVar34;
    pmVar23 = (mbstate_t *)(pmVar34->__mbstate8 + 4);
  } while (*(int *)pmVar34 != 0x29);
  pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.magic + 2);
  if (pmVar22 <= pmVar34) goto LAB_00f4200f;
  *(mbstate_t **)pmVar1 = (mbstate_t *)(pmVar34->__mbstate8 + 4);
LAB_00f4154e:
  uVar12 = FUN_00f425c0();
  if (((uVar12 != 0) || (uVar12 = FUN_00f425c0(), uVar12 != 0)) ||
     (uVar12 = FUN_00f425c0(), uVar12 != 0)) {
LAB_00f3f807:
    pmVar23 = (mbstate_t *)(ulonglong)uVar12;
    goto LAB_00f41113;
  }
  *(uint *)(unaff_RDI->__mbstate8 + 0x44) = uVar16;
  goto switchD_00f3f6a1_default;
LAB_00f42044:
  pmVar25 = (mbstate_t *)((longlong)&MACH_HEADER.magic + 2);
  goto LAB_00f4200f;
}


