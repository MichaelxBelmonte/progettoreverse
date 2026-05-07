// Function: FUN_00f33a70
// Address: 00f33a70
// Size: 6170 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00f33bba) */
/* WARNING: Removing unreachable block (ram,0x00f33bc3) */
/* WARNING: Removing unreachable block (ram,0x00f33c97) */
/* WARNING: Removing unreachable block (ram,0x00f33c9d) */

int FUN_00f33a70(ulonglong *param_1,undefined8 param_2,size_t param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [12];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined4 *puVar24;
  void *pvVar25;
  int *piVar26;
  void *pvVar27;
  undefined8 *puVar28;
  uint *puVar29;
  ulonglong *puVar30;
  size_t sVar31;
  ulonglong uVar32;
  ulonglong *unaff_RDI;
  uint *puVar33;
  uint uVar34;
  bool bVar35;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar36;
  undefined8 extraout_XMM0_Qa_04;
  ulonglong local_168;
  undefined1 local_148 [8];
  uint uStack_140;
  int local_fc;
  undefined4 *local_e8;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong *local_b8;
  void *local_b0;
  ulonglong local_a8;
  uint local_9c;
  ulonglong *local_98;
  uint local_8c;
  longlong local_88;
  ulonglong *local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  sVar31 = 0x80;
  puVar30 = param_1;
  lVar18 = FUN_00f42520();
  iVar13 = 0xc;
  if (lVar18 != 0) {
    local_88 = lVar18;
    lVar18 = FUN_00f3f400();
    if (lVar18 == 0) {
      FUN_00f42590();
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
        return 0xc;
      }
      goto LAB_00f33b88;
    }
    local_168 = 0;
    uVar20 = local_168;
    stack0xfffffffffffffebc = SUB1612((undefined1  [16])0x0,4);
    _local_148 = stack0xfffffffffffffebc << 0x20;
    iVar13 = FUN_00f3f590();
    if (iVar13 == 0) {
      *unaff_RDI = 0xffffffffffffffff;
      local_168 = 0;
      puVar30 = unaff_RDI;
      local_70 = lVar18;
      puVar19 = _calloc((size_t)unaff_RDI,sVar31);
      if (puVar19 == (ulonglong *)0x0) {
        iVar13 = 0xc;
        goto LAB_00f33ca6;
      }
      *(uint *)((longlong)puVar19 + 0x5c) = 0;
      puVar30 = (ulonglong *)0x0;
      *(uint *)(puVar19 + 0xc) = 0;
      *(uint *)((longlong)puVar19 + 0x34) = 0;
      local_78 = puVar19;
      if (((ulonglong)param_1 & 8) == 0) {
        puVar30 = puVar19;
        uVar32 = local_168;
        iVar13 = FUN_00f352c0();
        sVar31 = (size_t)uVar32;
        if (iVar13 == 0) {
          if ((int)(uint)puVar19[9] < 1) {
            puVar30 = (ulonglong *)0x0;
            local_80 = (ulonglong *)0x0;
            puVar19 = local_78;
LAB_00f3452b:
            pvVar25 = _calloc((size_t)puVar30,sVar31);
            puVar19[8] = (ulonglong)pvVar25;
            if ((pvVar25 == (void *)0x0) ||
               (pvVar25 = _calloc((size_t)puVar30,sVar31), pvVar25 == (void *)0x0))
            goto LAB_00f3458f;
            local_78[4] = (ulonglong)pvVar25;
            puVar30 = local_78;
            iVar13 = FUN_00f352c0(local_78,0);
            puVar19 = local_80;
            if (iVar13 == 0) goto LAB_00f33c26;
            goto LAB_00f33c88;
          }
          sVar31 = (uint)puVar19[9] * 4 + 4;
          puVar21 = _malloc((size_t)puVar30);
          puVar19 = local_78;
          if (puVar21 != (ulonglong *)0x0) {
            local_78[7] = (ulonglong)puVar21;
            local_80 = puVar21;
            _memset(puVar30,sVar31,param_3);
            goto LAB_00f3452b;
          }
LAB_00f3521c:
          pvVar25 = (void *)0x0;
LAB_00f35221:
          iVar13 = 0xc;
          goto LAB_00f33c8d;
        }
        pvVar25 = (void *)0x0;
        puVar21 = (ulonglong *)0x0;
      }
      else {
        puVar19 = (ulonglong *)0x0;
LAB_00f33c26:
        iVar14 = FUN_00f425b0();
        local_9c = 0;
        _memset_pattern16(puVar30,&segment_command_00000020.cmdsize,param_3);
        iVar13 = FUN_00f42690();
        uVar32 = local_168;
        if (iVar13 == 0) {
          local_a8 = 0;
          iVar13 = FUN_00f425c0();
          uVar32 = uVar20;
          if (iVar13 == 0) {
            local_98 = (ulonglong *)((ulonglong)local_98 & 0xffffffff00000000);
            local_b0 = (void *)((ulonglong)local_b0 & 0xffffffff00000000);
            local_b8 = (ulonglong *)0x0;
            local_fc = 0;
            local_c0 = 0;
            uVar32 = local_168;
            local_80 = puVar19;
            while (iVar13 = FUN_00f425b0(), iVar14 < iVar13) {
              iVar16 = FUN_00f42760();
              puVar22 = (undefined8 *)FUN_00f42780();
              iVar13 = 0;
              if (iVar16 == 1) {
                puVar21 = (ulonglong *)puVar22[1];
                uVar17 = FUN_00f42760();
                uVar34 = (uint)puVar21[1];
                local_98 = puVar21;
                local_8c = uVar17;
                if ((int)uVar34 < 2) {
                  if (1 < (int)*(uint *)((longlong)puVar21 + 0xc)) {
                    local_c8 = 0;
                    puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 2);
                    if (0 < (int)uVar34) goto LAB_00f33f50;
                    if ((int)uVar34 < (int)*(uint *)((longlong)puVar21 + 0xc)) {
                      local_e8 = (undefined4 *)0x0;
                      puVar24 = (undefined4 *)0x0;
LAB_00f3417a:
                      do {
                        local_a8 = (ulonglong)local_8c;
                        puVar30 = (ulonglong *)0x0;
                        iVar13 = FUN_00f36490(0,*local_98,&local_8c,0);
                        uVar32 = local_c0;
                        if (iVar13 != 0) goto LAB_00f33c7f;
                        lVar18 = CONCAT44(uStack_dc,local_e0);
                        if (puVar24 != (undefined4 *)0x0) {
                          lVar18 = FUN_00f339e0(extraout_XMM0_Qa_00,puVar24);
                        }
                        iVar13 = 0xc;
                        uVar32 = local_c0;
                        if (lVar18 == 0) goto LAB_00f33c7f;
                        puVar30 = (ulonglong *)0xffffffff;
                        lVar23 = FUN_00f33800(0xffffffff,0xffffffff);
                        uVar32 = local_c0;
                        if (lVar23 == 0) goto LAB_00f33c7f;
                        puVar24 = (undefined4 *)FUN_00f33950(extraout_XMM0_Qa_01,lVar18);
                        uVar32 = local_c0;
                        if (puVar24 == (undefined4 *)0x0) {
                          iVar13 = 0xc;
                          goto LAB_00f33c7f;
                        }
                        uVar34 = uVar34 + 1;
                      } while ((int)uVar34 < (int)*(uint *)((longlong)local_98 + 0xc));
                      puVar19 = local_80;
                      uVar20 = local_a8;
                      uVar36 = extraout_XMM0_Qa_02;
                      uVar12 = (uint)local_a8;
                      uVar2 = (uint)local_a8;
                      if (local_e8 != (undefined4 *)0x0) goto LAB_00f342ef;
                      goto LAB_00f3431a;
                    }
                    iVar13 = 0xc;
                    goto LAB_00f33c7f;
                  }
                  uVar20 = (ulonglong)uVar17;
                }
                else {
                  puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 1);
LAB_00f33f50:
                  local_c8 = 0;
                  iVar13 = FUN_00f36490(puVar30,*puVar21,&local_8c,puVar19);
                  if (iVar13 != 0) goto LAB_00f33c7f;
                  iVar16 = 2;
                  puVar24 = (undefined4 *)0x0;
                  uVar2 = uVar17;
                  while( true ) {
                    local_e8 = (undefined4 *)CONCAT44(uStack_dc,local_e0);
                    if (puVar24 != (undefined4 *)0x0) {
                      local_e8 = (undefined4 *)FUN_00f339e0();
                    }
                    uVar12 = local_8c;
                    iVar13 = 0xc;
                    if (local_e8 == (undefined4 *)0x0) goto LAB_00f33c7f;
                    uVar34 = (uint)local_98[1];
                    if ((int)uVar34 <= iVar16 + -1) break;
                    puVar30 = (ulonglong *)(ulonglong)(2 - (iVar16 < (int)uVar34));
                    iVar13 = FUN_00f36490(puVar30,*local_98,&local_8c,local_80);
                    iVar16 = iVar16 + 1;
                    puVar24 = local_e8;
                    uVar2 = uVar12;
                    if (iVar13 != 0) goto LAB_00f33c7f;
                  }
                  if (*(uint *)((longlong)local_98 + 0xc) == 0xffffffff) {
                    uVar20 = (ulonglong)local_8c;
                    puVar30 = (ulonglong *)0x0;
                    iVar13 = FUN_00f36490(0,*local_98,&local_8c,0);
                    if (iVar13 != 0) goto LAB_00f33c7f;
                    puVar30 = (ulonglong *)0xffffffff;
                    puVar24 = (undefined4 *)FUN_00f338a0(0xffffffff,0,0);
                    uVar36 = extraout_XMM0_Qa_03;
                    iVar13 = 0xc;
                    if (puVar24 == (undefined4 *)0x0) goto LAB_00f33c7f;
LAB_00f342ef:
                    local_8c = uVar12;
                    puVar19 = local_80;
                    puVar24 = (undefined4 *)FUN_00f339e0(uVar36,puVar24);
                    uVar2 = local_8c;
                    if (puVar24 == (undefined4 *)0x0) {
                      iVar13 = 0xc;
                      goto LAB_00f33c7f;
                    }
                  }
                  else {
                    puVar24 = local_e8;
                    puVar19 = local_80;
                    uVar20 = (ulonglong)uVar2;
                    if ((int)uVar34 < (int)*(uint *)((longlong)local_98 + 0xc)) {
                      puVar24 = (undefined4 *)0x0;
                      goto LAB_00f3417a;
                    }
                  }
LAB_00f3431a:
                  local_8c = uVar2;
                  puVar22[1] = *(undefined8 *)(puVar24 + 2);
                  *(undefined4 *)puVar22 = *puVar24;
                }
                uVar34 = (uint)local_b0 + ((int)uVar20 - uVar17);
                local_fc = local_fc + -1;
                if (local_fc == 0) {
                  uVar20 = (ulonglong)uVar34;
                  local_8c = uVar34;
                }
                local_b0 = (void *)CONCAT44(local_b0._4_4_,uVar34);
                local_a8 = uVar20;
                if (local_98[3] == 0) {
                  local_98 = (ulonglong *)CONCAT44(local_98._4_4_,(int)uVar20);
                  iVar13 = 0;
                }
                else {
                  puVar30 = (ulonglong *)0xffffffff;
                  lVar18 = FUN_00f33800(0xffffffff,0);
                  iVar13 = 0xc;
                  if (lVar18 == 0) goto LAB_00f33c7f;
                  *(ulonglong *)(*(longlong *)(lVar18 + 8) + 0x18) = local_98[3];
                  uVar34 = (int)local_b8 + 1;
                  *(uint *)(local_98[3] + 0x20) = uVar34;
                  puVar30 = (ulonglong *)0xffffffff;
                  lVar18 = FUN_00f33800(0xffffffff,0);
                  if (lVar18 == 0) goto LAB_00f33c7f;
                  puVar30 = (ulonglong *)0x0;
                  puVar28 = (undefined8 *)FUN_00f3f480(0,0,0x24);
                  if (puVar28 == (undefined8 *)0x0) goto LAB_00f33c7f;
                  *(undefined4 *)(puVar28 + 4) = local_48;
                  *(undefined4 *)(puVar28 + 2) = local_58;
                  *(undefined4 *)((longlong)puVar28 + 0x14) = uStack_54;
                  *(undefined4 *)(puVar28 + 3) = uStack_50;
                  *(undefined4 *)((longlong)puVar28 + 0x1c) = uStack_4c;
                  *puVar28 = local_68;
                  puVar28[1] = uStack_60;
                  *(undefined8 **)(*(longlong *)(lVar18 + 8) + 0x18) = puVar28;
                  *(int *)(puVar28 + 4) = (int)local_b8;
                  puVar30 = local_b8;
                  lVar23 = FUN_00f33780(local_b8,0x20);
                  if (lVar23 == 0) goto LAB_00f33c7f;
                  puVar30 = (ulonglong *)puVar22[1];
                  *(ulonglong **)(lVar23 + 8) = puVar30;
                  lVar23 = FUN_00f339e0(puVar30,lVar23);
                  if ((lVar23 == 0) ||
                     (puVar28 = (undefined8 *)FUN_00f339e0(extraout_XMM0_Qa_04,lVar18),
                     puVar28 == (undefined8 *)0x0)) goto LAB_00f33c7f;
                  uVar36 = *puVar28;
                  uVar4 = puVar28[1];
                  uVar5 = puVar28[2];
                  uVar6 = puVar28[3];
                  uVar7 = puVar28[5];
                  puVar22[4] = puVar28[4];
                  puVar22[5] = uVar7;
                  puVar22[2] = uVar5;
                  puVar22[3] = uVar6;
                  *puVar22 = uVar36;
                  puVar22[1] = uVar4;
                  puVar22[1] = puVar28[1];
                  *(undefined4 *)puVar22 = *(undefined4 *)puVar28;
                  if ((int)*(uint *)((longlong)local_78 + 100) <= (int)local_b8) {
                    *(uint *)((longlong)local_78 + 100) = uVar34;
                  }
                  local_98 = (ulonglong *)CONCAT44(local_98._4_4_,(int)local_a8);
                  local_b8 = (ulonglong *)(ulonglong)uVar34;
                  puVar19 = local_80;
                  iVar13 = 0;
                }
              }
              else if (iVar16 == 0) {
                switch(*(undefined4 *)puVar22) {
                case 0:
                  plVar3 = (longlong *)puVar22[1];
                  if ((-1 < *plVar3) || (*plVar3 == -4)) {
                    uVar34 = (int)plVar3[2] + (int)local_a8;
                    *(uint *)(plVar3 + 2) = uVar34;
                    if ((int)local_9c < (int)uVar34) {
                      local_9c = uVar34;
                    }
                    local_98 = (ulonglong *)CONCAT44(local_98._4_4_,(int)local_a8);
                    iVar13 = 0;
                  }
                  break;
                case 1:
                case 3:
                  iVar13 = FUN_00f42690();
                  if (((iVar13 != 0) || (iVar13 = FUN_00f425c0(), iVar13 != 0)) ||
                     (iVar13 = FUN_00f42690(), iVar13 != 0)) goto LAB_00f34d0d;
                  iVar13 = FUN_00f425c0();
                  break;
                case 2:
                  lVar18 = puVar22[1];
                  iVar13 = FUN_00f425c0();
                  if ((((iVar13 != 0) || (iVar13 = FUN_00f42690(), iVar13 != 0)) ||
                      (iVar13 = FUN_00f425c0(), iVar13 != 0)) ||
                     ((iVar13 = FUN_00f42690(), iVar13 != 0 ||
                      (iVar13 = FUN_00f425c0(), iVar13 != 0)))) goto LAB_00f34d0d;
                  iVar13 = 0;
                  if ((1 < *(int *)(lVar18 + 8)) || (1 < *(int *)(lVar18 + 0xc))) {
                    local_8c = 0;
                    local_a8 = 0;
                    local_98 = (ulonglong *)((ulonglong)local_98 & 0xffffffff00000000);
                  }
                  local_fc = local_fc + 1;
                }
              }
              if (iVar13 != 0) goto LAB_00f34d0d;
            }
            iVar13 = 0;
LAB_00f34d0d:
            uVar34 = (uint)local_b0;
            if ((int)(uint)local_b0 < (int)local_9c) {
              uVar34 = local_9c;
            }
            puVar30 = (ulonglong *)(ulonglong)uVar34;
            auVar8._4_8_ = 0;
            auVar8._0_4_ = uVar34;
            _local_148 = auVar8 << 0x40;
          }
        }
LAB_00f33c7f:
        if (iVar13 == 0) {
          puVar30 = (ulonglong *)(ulonglong)uStack_140;
          uStack_140 = uStack_140 + 1;
          lVar18 = FUN_00f33800(puVar30,0);
          if ((lVar18 == 0) || (uVar20 = FUN_00f339e0(extraout_XMM0_Qa,lVar18), uVar20 == 0)) {
LAB_00f3458f:
            pvVar25 = (void *)0x0;
            iVar13 = 0xc;
            puVar21 = (ulonglong *)0x0;
            puVar19 = local_78;
          }
          else {
            uVar15 = FUN_00f425b0();
            local_80 = (ulonglong *)CONCAT44(local_80._4_4_,uVar15);
            iVar13 = FUN_00f42690();
            if (iVar13 == 0) {
              iVar13 = FUN_00f425c0();
              if (iVar13 == 0) {
                iVar13 = FUN_00f425b0();
                puVar30 = (ulonglong *)((ulonglong)local_80 & 0xffffffff);
                iVar14 = (int)local_80;
                local_a8 = uVar20;
                if ((int)local_80 < iVar13) {
                  do {
                    uVar15 = FUN_00f42760();
                    puVar19 = (ulonglong *)FUN_00f42780();
                    switch(uVar15) {
                    case 0:
                      puVar29 = &switchD_00f34669::switchdataD_00f352ac;
                      puVar30 = (ulonglong *)&switchD_00f3464f::switchdataD_00f3529c;
                      switch((uint)*puVar19) {
                      case 0:
                        plVar3 = (longlong *)puVar19[1];
                        lVar18 = *plVar3;
                        if (lVar18 != -4) {
                          if (lVar18 < 0) {
                            *(uint *)(puVar19 + 2) = 1;
                            puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 1);
                            puVar22 = (undefined8 *)FUN_00f3f480(1,0,0x38);
                            if (puVar22 == (undefined8 *)0x0) goto LAB_00f3520a;
                            *puVar22 = 0xffffffffffffffff;
                            *(undefined4 *)(puVar22 + 1) = 0xffffffff;
                            puVar19[4] = (ulonglong)puVar22;
                            puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 1);
                            puVar22 = (undefined8 *)FUN_00f3f480();
                            if (puVar22 != (undefined8 *)0x0) {
                              *puVar22 = 0xffffffffffffffff;
                              *(undefined4 *)(puVar22 + 1) = 0xffffffff;
                              goto LAB_00f34bff;
                            }
                          }
                          else {
                            *(uint *)(puVar19 + 2) = 0;
                            lVar9 = plVar3[2];
                            lVar23 = plVar3[1];
                            puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 1);
                            puVar24 = (undefined4 *)FUN_00f3f480(1,0,0x70);
                            if (puVar24 == (undefined4 *)0x0) {
LAB_00f3520a:
                              puVar19[4] = 0;
                              goto LAB_00f3521c;
                            }
                            *puVar24 = (int)lVar9;
                            puVar24[1] = (int)lVar18;
                            puVar24[2] = (int)lVar23;
                            puVar24[7] = 0;
                            *(undefined8 *)(puVar24 + 8) = 0;
                            puVar24[10] = 0xffffffff;
                            *(undefined8 *)(puVar24 + 0xe) = 0xffffffffffffffff;
                            puVar24[0x10] = 0xffffffff;
                            puVar19[4] = (ulonglong)puVar24;
                            lVar10 = plVar3[2];
                            lVar23 = *plVar3;
                            lVar9 = plVar3[1];
                            lVar11 = plVar3[3];
                            lVar18 = plVar3[4];
                            puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 1);
                            puVar22 = (undefined8 *)FUN_00f3f480();
                            if (puVar22 != (undefined8 *)0x0) {
                              local_d8 = (undefined4)lVar23;
                              uStack_d0 = (undefined4)lVar9;
                              *(int *)puVar22 = (int)lVar10;
                              *(ulonglong *)((longlong)puVar22 + 4) = CONCAT44(uStack_d0,local_d8);
                              *(int *)((longlong)puVar22 + 0x1c) = (int)lVar11;
                              puVar22[4] = lVar18;
                              *(undefined4 *)(puVar22 + 5) = 0xffffffff;
                              goto LAB_00f34bf0;
                            }
                          }
LAB_00f35214:
                          puVar19[5] = 0;
                          goto LAB_00f3521c;
                        }
                        *(uint *)(puVar19 + 2) = 0;
                        lVar18 = plVar3[2];
                        puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 1);
                        puVar24 = (undefined4 *)FUN_00f3f480(1,0,0x70);
                        if (puVar24 == (undefined4 *)0x0) goto LAB_00f3520a;
                        *puVar24 = (int)lVar18;
                        *(undefined8 *)(puVar24 + 1) = 0x7fffffff00000000;
                        puVar24[7] = 0;
                        *(undefined8 *)(puVar24 + 8) = 0;
                        puVar24[10] = 0xffffffff;
                        *(undefined8 *)(puVar24 + 0xe) = 0xffffffffffffffff;
                        puVar24[0x10] = 0xffffffff;
                        puVar19[4] = (ulonglong)puVar24;
                        lVar23 = plVar3[2];
                        lVar18 = plVar3[1];
                        puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 1);
                        puVar22 = (undefined8 *)FUN_00f3f480();
                        if (puVar22 == (undefined8 *)0x0) goto LAB_00f35214;
                        *(int *)puVar22 = (int)lVar23;
                        puVar30 = (ulonglong *)0x7fffffff00000000;
                        *(undefined8 *)((longlong)puVar22 + 4) = 0x7fffffff00000000;
                        *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
                        puVar22[4] = 0;
                        *(int *)(puVar22 + 5) = (int)lVar18;
LAB_00f34bf0:
                        puVar22[7] = 0xffffffffffffffff;
                        *(undefined4 *)(puVar22 + 8) = 0xffffffff;
LAB_00f34bff:
                        puVar19[5] = (ulonglong)puVar22;
                        iVar14 = (int)local_80;
                        break;
                      case 1:
                        iVar13 = FUN_00f42690();
                        puVar30 = (ulonglong *)puVar29;
                        if (iVar13 == 0) goto LAB_00f34aac;
                        goto LAB_00f345b5;
                      case 2:
                        iVar13 = FUN_00f42690();
                        puVar30 = (ulonglong *)puVar29;
                        if (iVar13 == 0) goto LAB_00f34ad8;
                        goto LAB_00f345b5;
                      case 3:
                        iVar13 = FUN_00f42690();
                        puVar30 = (ulonglong *)puVar29;
                        if (iVar13 != 0) goto LAB_00f345b5;
LAB_00f34aac:
                        iVar13 = FUN_00f425c0();
                        if ((iVar13 != 0) || (iVar13 = FUN_00f42690(), iVar13 != 0))
                        goto LAB_00f345b5;
LAB_00f34ad8:
                        iVar13 = FUN_00f425c0();
                        if ((iVar13 != 0) || (iVar13 = FUN_00f42690(), iVar13 != 0))
                        goto LAB_00f345b5;
                        iVar13 = FUN_00f425c0();
                        iVar14 = (int)local_80;
                        if (iVar13 != 0) goto LAB_00f345b5;
                      }
                      break;
                    case 1:
                      plVar3 = (longlong *)puVar19[1];
                      lVar18 = plVar3[1];
                      bVar35 = true;
                      if (*(int *)(*plVar3 + 0x10) == 0) {
                        bVar35 = *(int *)(lVar18 + 0x10) != 0;
                      }
                      *(uint *)(puVar19 + 2) = (uint)bVar35;
                      puVar30 = (ulonglong *)0x0;
                      uVar20 = FUN_00f36780(0,*(undefined8 *)(lVar18 + 0x20),0,0);
                      puVar19[4] = uVar20;
                      if (uVar20 == 0) {
                        iVar13 = 0xc;
                        goto LAB_00f345b5;
                      }
                      puVar30 = (ulonglong *)0x0;
                      uVar20 = FUN_00f36780(0,*(undefined8 *)(plVar3[1] + 0x28),0,0);
                      puVar19[5] = uVar20;
                      iVar14 = (int)local_80;
                      if (uVar20 == 0) {
                        iVar13 = 0xc;
                        goto LAB_00f345b5;
                      }
                      break;
                    case 2:
                      plVar3 = (longlong *)puVar19[1];
                      lVar18 = *plVar3;
                      if (*(int *)(lVar18 + 0x10) == 0) {
                        bVar35 = false;
                      }
                      else {
                        bVar35 = *(int *)(plVar3[1] + 0x10) != 0;
                      }
                      *(uint *)(puVar19 + 2) = (uint)bVar35;
                      local_98 = puVar19;
                      if (*(int *)(lVar18 + 0x10) != 0) {
                        puVar30 = (ulonglong *)0x0;
                        iVar13 = FUN_00f370f0(0,0,0,&local_68);
                        if (iVar13 == 0) {
                          puVar19 = _malloc((size_t)puVar30);
                          iVar13 = 0xc;
                          if (puVar19 != (ulonglong *)0x0) {
                            *(uint *)puVar19 = 0xffffffff;
                            local_c8 = local_c8 & 0xffffffff00000000;
                            if (local_e0 == 0) {
                              lVar18 = 0;
LAB_00f3488d:
                              puVar30 = &local_c8;
                              iVar14 = FUN_00f370f0(puVar30,puVar19,lVar18,0);
                              if (iVar14 == 0) {
                                uVar20 = FUN_00f36780(puVar19,*(undefined8 *)(*plVar3 + 0x20),
                                                      local_c8 & 0xffffffff,lVar18);
                                puVar21 = local_98;
                                local_98[4] = uVar20;
                                _free(puVar19);
                                puVar30 = puVar19;
                                iVar14 = (int)local_80;
                                if (puVar21[4] != 0) goto LAB_00f3490e;
                              }
                              else {
LAB_00f34e97:
                                _free(puVar30);
                                iVar13 = iVar14;
                              }
                            }
                            else {
                              puVar30 = (ulonglong *)0x0;
                              lVar18 = FUN_00f3f480(0,0,0x24);
                              if (lVar18 != 0) goto LAB_00f3488d;
LAB_00f34ee1:
                              _free(puVar30);
                              iVar13 = 0xc;
                            }
                          }
                        }
                        goto LAB_00f33c88;
                      }
                      puVar19[4] = *(ulonglong *)(lVar18 + 0x20);
LAB_00f3490e:
                      if (*(int *)(plVar3[1] + 0x10) == 0) {
                        local_98[5] = *(ulonglong *)(plVar3[1] + 0x28);
                        puVar30 = local_98;
                      }
                      else {
                        puVar30 = (ulonglong *)0x0;
                        iVar13 = FUN_00f370f0(0,0,0,&local_68);
                        if (iVar13 != 0) goto LAB_00f33c88;
                        puVar19 = _malloc((size_t)puVar30);
                        iVar13 = 0xc;
                        if (puVar19 == (ulonglong *)0x0) goto LAB_00f33c88;
                        *(uint *)puVar19 = 0xffffffff;
                        local_c8 = local_c8 & 0xffffffff00000000;
                        if (local_e0 == 0) {
                          uVar20 = 0;
                        }
                        else {
                          puVar30 = (ulonglong *)0x0;
                          uVar20 = FUN_00f3f480(0,0,0x24);
                          if (uVar20 == 0) goto LAB_00f34ee1;
                        }
                        puVar30 = &local_c8;
                        local_c0 = uVar20;
                        iVar14 = FUN_00f370f0(puVar30,puVar19,uVar20,0);
                        if (iVar14 != 0) goto LAB_00f34e97;
                        uVar20 = FUN_00f36780(puVar19,*(undefined8 *)(plVar3[1] + 0x28),
                                              local_c8 & 0xffffffff,local_c0);
                        puVar21 = local_98;
                        local_98[5] = uVar20;
                        _free(puVar19);
                        puVar30 = puVar19;
                        iVar14 = (int)local_80;
                        if (puVar21[5] == 0) goto LAB_00f33c88;
                      }
                      break;
                    case 3:
                      lVar18 = *(longlong *)puVar19[1];
                      if ((int)((longlong *)puVar19[1])[1] == 0) {
                        puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 1);
                      }
                      else {
                        puVar30 = (ulonglong *)(ulonglong)(*(int *)(lVar18 + 0x10) != 0);
                      }
                      *(uint *)(puVar19 + 2) = (uint)puVar30;
                      uVar20 = *(ulonglong *)(lVar18 + 0x28);
                      puVar19[4] = *(ulonglong *)(lVar18 + 0x20);
                      puVar19[5] = uVar20;
                    }
                    iVar13 = FUN_00f425b0();
                  } while (iVar14 < iVar13);
                }
                pvVar25 = _malloc((size_t)puVar30);
                if (pvVar25 == (void *)0x0) goto LAB_00f3521c;
                puVar19 = _malloc((size_t)puVar30);
                if (puVar19 == (ulonglong *)0x0) goto LAB_00f35221;
                local_c0 = uVar32;
                local_80 = puVar19;
                if (0 < (int)uStack_140) {
                  ___bzero();
                }
                uVar34 = 0;
                puVar30 = (ulonglong *)0x0;
                pvVar27 = pvVar25;
                FUN_00f36240();
                sVar31 = (size_t)pvVar27;
                puVar29 = (uint *)(ulonglong)uStack_140;
                if (0 < (int)uStack_140) {
                  if (uStack_140 == 1) {
                    puVar30 = (ulonglong *)0x0;
                    uVar34 = 0;
                  }
                  else {
                    sVar31 = uStack_140 & 0xfffffffe;
                    puVar30 = (ulonglong *)0x0;
                    uVar34 = 0;
                    do {
                      *(uint *)((longlong)local_80 + (longlong)puVar30 * 4) = uVar34;
                      iVar13 = *(int *)((longlong)pvVar25 + (longlong)puVar30 * 4);
                      *(undefined4 *)((longlong)pvVar25 + (longlong)puVar30 * 4) = 0;
                      *(uint *)((longlong)local_80 + (longlong)puVar30 * 4 + 4) =
                           uVar34 + iVar13 + 1;
                      uVar34 = *(int *)((longlong)pvVar25 + (longlong)puVar30 * 4 + 4) +
                               uVar34 + iVar13 + 2;
                      *(undefined4 *)((longlong)pvVar25 + (longlong)puVar30 * 4 + 4) = 0;
                      puVar30 = (ulonglong *)((longlong)puVar30 + 2);
                    } while ((ulonglong *)(ulonglong)sVar31 != puVar30);
                  }
                  if ((uStack_140 & 1) != 0) {
                    *(uint *)((longlong)local_80 + (longlong)puVar30 * 4) = uVar34;
                    iVar13 = *(int *)((longlong)pvVar25 + (longlong)puVar30 * 4);
                    *(undefined4 *)((longlong)pvVar25 + (longlong)puVar30 * 4) = 0;
                    uVar34 = uVar34 + iVar13 + 1;
                  }
                }
                puVar19 = _calloc((size_t)puVar30,sVar31);
                if (puVar19 != (ulonglong *)0x0) {
                  *local_78 = (ulonglong)puVar19;
                  *(uint *)(local_78 + 1) = uVar34;
                  puVar30 = local_80;
                  pvVar27 = pvVar25;
                  local_98 = puVar19;
                  iVar13 = FUN_00f36240();
                  uVar17 = (uint)pvVar27;
                  puVar21 = local_80;
                  puVar19 = local_78;
                  if (iVar13 != 0) goto LAB_00f33ca9;
                  *(uint *)(local_78 + 6) = 0xffffffff;
                  if ((*(int *)PTR____mb_cur_max_024a9890 == 1) && (*(int *)(local_c0 + 0x10) == 0))
                  {
                    pvVar27 = _calloc((size_t)puVar30,uVar17);
                    local_78[5] = (ulonglong)pvVar27;
                    puVar30 = local_78;
                    if (pvVar27 == (void *)0x0) goto LAB_00f35155;
                    puVar29 = *(uint **)(local_a8 + 0x20);
                    uVar17 = *puVar29;
                    if (-1 < (int)uVar17) {
                      puVar19 = local_78 + 5;
                      puVar30 = (ulonglong *)0x0;
                      do {
                        lVar18 = (longlong)
                                 (int)*(uint *)((longlong)local_80 + (ulonglong)uVar17 * 4);
                        if (local_98[lVar18 * 7 + 1] != 0) {
                          puVar21 = local_98 + lVar18 * 7;
                          do {
                            uVar17 = (uint)*puVar21;
                            if (((longlong)(int)uVar17 < 0x100) &&
                               (lVar18 = (longlong)(int)uVar17,
                               (int)uVar17 <= (int)*(uint *)((longlong)puVar21 + 4))) {
                              do {
                                *(undefined1 *)(*puVar19 + lVar18) = 1;
                                puVar30 = (ulonglong *)(ulonglong)((int)puVar30 + 1);
                                if (0xfe < lVar18) break;
                                bVar35 = lVar18 < (int)*(uint *)((longlong)puVar21 + 4);
                                lVar18 = lVar18 + 1;
                              } while (bVar35);
                            }
                            puVar1 = puVar21 + 8;
                            puVar21 = puVar21 + 7;
                          } while (*puVar1 != 0);
                        }
                        uVar17 = puVar29[0xe];
                        puVar29 = puVar29 + 0xe;
                      } while (-1 < (int)uVar17);
                      if ((int)puVar30 == 1) {
                        uVar20 = *puVar19;
                        lVar18 = 3;
                        do {
                          if (*(char *)((uVar20 - 3) + lVar18) != '\0') {
                            lVar18 = lVar18 + -3;
LAB_00f35279:
                            *(uint *)(local_78 + 6) = (uint)lVar18;
                            puVar30 = local_78;
                            _free(local_78);
                            goto LAB_00f34e62;
                          }
                          if (*(char *)((uVar20 - 2) + lVar18) != '\0') {
                            lVar18 = lVar18 + -2;
                            goto LAB_00f35279;
                          }
                          if (*(char *)((uVar20 - 1) + lVar18) != '\0') {
                            lVar18 = lVar18 + -1;
                            goto LAB_00f35279;
                          }
                          if (*(char *)(uVar20 + lVar18) != '\0') goto LAB_00f35279;
                          lVar18 = lVar18 + 4;
                        } while (lVar18 != 0x103);
                      }
                    }
                  }
                  else {
                    puVar19 = local_78 + 5;
LAB_00f34e62:
                    *puVar19 = 0;
                  }
                  piVar26 = *(int **)(local_a8 + 0x20);
                  if (-1 < *piVar26) {
                    puVar30 = (ulonglong *)((longlong)&MACH_HEADER.magic + 1);
                    do {
                      piVar26 = piVar26 + 0xe;
                      puVar30 = (ulonglong *)(ulonglong)((int)puVar30 + 1);
                    } while (-1 < *piVar26);
                  }
                  pvVar27 = _calloc((size_t)puVar30,uVar17);
                  local_b0 = pvVar27;
                  if (pvVar27 != (void *)0x0) {
                    local_78[2] = (ulonglong)pvVar27;
                    puVar33 = *(uint **)(local_a8 + 0x20);
                    uVar17 = *puVar33;
                    if ((int)uVar17 < 0) {
                      uVar20 = 0;
                    }
                    else {
                      uVar20 = 0;
                      do {
                        puVar30 = local_98 +
                                  (longlong)
                                  (int)*(uint *)((longlong)local_80 + (ulonglong)uVar17 * 4) * 7;
                        lVar18 = uVar20 * 0x38;
                        *(ulonglong **)((longlong)pvVar27 + lVar18 + 8) = puVar30;
                        *(uint *)((longlong)pvVar27 + lVar18 + 0x10) = uVar17;
                        *(undefined8 *)((longlong)pvVar27 + lVar18 + 0x18) = 0;
                        local_c0 = uVar20;
                        if (*(longlong *)(puVar33 + 4) != 0) {
                          local_b8 = (ulonglong *)((longlong)pvVar27 + lVar18 + 0x18);
                          uVar20 = 0;
                          do {
                            piVar26 = (int *)(*(longlong *)(puVar33 + 4) + uVar20);
                            uVar20 = uVar20 + 4;
                          } while (-1 < *piVar26);
                          pvVar27 = _malloc((size_t)puVar30);
                          *local_b8 = (ulonglong)pvVar27;
                          puVar30 = local_b8;
                          if (pvVar27 == (void *)0x0) goto LAB_00f35155;
                          _memcpy(local_b8,(void *)(uVar20 & 0x3fffffffc),(size_t)puVar29);
                          pvVar27 = local_b0;
                        }
                        *(undefined8 *)((longlong)pvVar27 + lVar18 + 0x20) = 0;
                        puVar22 = *(undefined8 **)(puVar33 + 0xc);
                        if (puVar22 != (undefined8 *)0x0) {
                          local_b8 = (ulonglong *)((longlong)pvVar27 + lVar18 + 0x20);
                          puVar28 = _malloc((size_t)puVar30);
                          *local_b8 = (ulonglong)puVar28;
                          puVar30 = local_b8;
                          if (puVar28 == (undefined8 *)0x0) goto LAB_00f35155;
                          *(undefined4 *)(puVar28 + 4) = *(undefined4 *)(puVar22 + 4);
                          uVar36 = *puVar22;
                          uVar4 = puVar22[1];
                          uVar5 = puVar22[3];
                          puVar28[2] = puVar22[2];
                          puVar28[3] = uVar5;
                          *puVar28 = uVar36;
                          puVar28[1] = uVar4;
                          pvVar27 = local_b0;
                        }
                        *(uint *)((longlong)pvVar27 + lVar18 + 0x28) = puVar33[6];
                        uVar20 = local_c0 + 1;
                        uVar17 = puVar33[0xe];
                        puVar33 = puVar33 + 0xe;
                      } while (-1 < (int)uVar17);
                      uVar20 = uVar20 & 0xffffffff;
                    }
                    puVar30 = local_78;
                    *(undefined8 *)((longlong)local_b0 + uVar20 * 0x38 + 8) = 0;
                    *(uint *)(local_78 + 1) = uVar34;
                    local_78[3] = (ulonglong)
                                  (local_98 +
                                  (longlong)
                                  (int)*(uint *)((longlong)local_80 +
                                                (longlong)**(int **)(local_a8 + 0x28) * 4) * 7);
                    *(uint *)((longlong)local_78 + 0x54) = uStack_140;
                    *(uint *)(local_78 + 0xb) = (uint)param_1;
                    pvVar25 = local_b0;
                    FUN_00f3f430();
                    FUN_00f42590();
                    _free(pvVar25);
                    _free(pvVar25);
                    unaff_RDI[1] = (ulonglong)puVar30;
                    if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
                      return 0;
                    }
                    goto LAB_00f33b88;
                  }
                }
LAB_00f35155:
                iVar13 = 0xc;
                puVar21 = local_80;
                puVar19 = local_78;
              }
              else {
LAB_00f345b5:
                pvVar25 = (void *)0x0;
                puVar21 = (ulonglong *)0x0;
                puVar19 = local_78;
              }
            }
            else {
              pvVar25 = (void *)0x0;
              puVar21 = (ulonglong *)0x0;
              puVar19 = local_78;
            }
          }
        }
        else {
LAB_00f33c88:
          pvVar25 = (void *)0x0;
LAB_00f33c8d:
          puVar21 = (ulonglong *)0x0;
          puVar19 = local_78;
        }
      }
    }
    else {
LAB_00f33ca6:
      pvVar25 = (void *)0x0;
      puVar21 = (ulonglong *)0x0;
      puVar19 = (ulonglong *)0x0;
    }
LAB_00f33ca9:
    FUN_00f3f430();
    FUN_00f42590();
    if (pvVar25 != (void *)0x0) {
      _free(puVar30);
    }
    if (puVar21 != (ulonglong *)0x0) {
      _free(puVar30);
    }
    unaff_RDI[1] = (ulonglong)puVar19;
    FUN_00f36300();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return iVar13;
  }
LAB_00f33b88:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


