// Function: FUN_01a13ed0
// Address: 01a13ed0
// Size: 3011 bytes
// Class: MUAudioSourcePrincipalItem
// String references:
//   "MUAudioSourcePrincipalItem"

uint64_t FUN_01a13ed0(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  float fVar2;
  uint8_t auVar3 [16];
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  int64_t *plVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  int64_t *plVar13;
  int64_t lVar14;
  void* pVar15;
  int64_t lVar16;
  uint64_t uVar17;
  int64_t *arg1;
  int64_t **pplVar18;
  bool bVar19;
  uint32_t uVar20;
  float fVar21;
  uint64_t uVar22;
  uint64_t extraout_XMM0_Qa;
  double dVar23;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar24 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar25 [16];
  double dVar26;
  float local_108;
  float fStack_104;
  int64_t *local_f8;
  char local_f0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  double local_98;
  uint64_t uStack_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  uint32_t local_6c;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_40;
  char local_38;
  
  local_60 = param_1;
  FUN_01a58dc0();
  pVar15 = (void*)param_1;
  if (local_40 == (int64_t *)0x0) {
    bVar8 = 0;
  }
  else {
    FUN_01a58dc0();
    bVar8 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_88))();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar8 = bVar8 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8 != 0) {
    uVar17 = 0;
    goto LAB_01a142c5;
  }
  local_a8 = 0;
  if (*param_2 != 0) {
    FUN_01a58dc0();
    if ((local_40 == (int64_t *)0x0) || (iVar10 = FUN_01d3a5a0(), iVar10 != 1)) {
      bVar19 = false;
    }
    else {
      iVar10 = FUN_01d3b630();
      bVar19 = iVar10 == 1;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar19) {
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar22 = FUN_0125e7c0();
      local_78 = local_40;
      if (local_40 == (int64_t *)0x0) {
        local_60 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
        local_78 = (int64_t *)0x0;
        bVar19 = false;
LAB_01a14215:
        bVar5 = false;
        local_58 = (int64_t *)0x0;
        bVar4 = true;
LAB_01a14224:
        local_d8 = *param_2;
        local_d0 = '\0';
        uVar11 = FUN_01a58d30(uVar22,&local_d8);
        uVar17 = (uint64_t)uVar11;
        cVar9 = (char)local_60;
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (bVar19) goto LAB_01a142a3;
      }
      else {
        plVar13 = local_40;
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((void*)plVar13);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar22 = FUN_013dfcb0();
        local_58 = local_40;
        if (local_40 == (int64_t *)0x0) {
          bVar19 = true;
          local_60 = (int64_t *)0x0;
          goto LAB_01a14215;
        }
        plVar13 = local_40;
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((void*)plVar13);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        pplVar18 = &local_40;
        uVar22 = FUN_013dd6a0();
        plVar13 = local_40;
        if ((g_027c0170 == '\0') &&
           (iVar10 = ___cxa_guard_acquire(), uVar22 = extraout_XMM0_Qa_00, iVar10 != 0)) {
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
          uVar22 = ___cxa_guard_release();
        }
        if (plVar13 == (int64_t *)0x0) {
LAB_01a141dd:
          pplVar18 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar9 = FUN_00e85ea0();
          uVar22 = extraout_XMM0_Qa;
          if (cVar9 == '\0') goto LAB_01a141dd;
        }
        plVar13 = *pplVar18;
        if (plVar13 == (int64_t *)0x0) {
          local_6c = 1;
          local_68 = (int64_t *)0x0;
        }
        else {
          local_68 = plVar13;
          if (*(char *)(pplVar18 + 1) == '\0') {
            uVar22 = FUN_00d50b00();
          }
          else {
            *(void*)(pplVar18 + 1) = 0;
          }
          local_6c = 0;
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          uVar22 = FUN_00d50b20();
        }
        if (local_68 == (int64_t *)0x0) {
          bVar19 = true;
          local_60 = (int64_t *)0x0;
          bVar5 = true;
          bVar4 = false;
          goto LAB_01a14224;
        }
        FUN_01a58dc0();
        FUN_01d3abf0();
        uVar22 = FUN_01e466c0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar12 = _pthread_getspecific((void*)plVar13);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar23 = (double)FUN_012643f0();
        pvVar12 = _pthread_getspecific((void*)plVar13);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = (double)FUN_0125a280();
        FUN_01a58dc0();
        local_98 = (double)(**(code **)(*local_40 + 0x938))(dVar23 + local_98);
        uStack_90 = extraout_XMM0_Qb;
        FUN_01a58dc0();
        plVar1 = local_88;
        FUN_01a58dc0();
        local_c8 = *param_2;
        local_c0 = '\0';
        (**(code **)(*local_f8 + 0xc38))();
        uVar20 = (**(code **)(*plVar1 + 0xbf8))();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        auVar24._8_8_ = uStack_90;
        auVar24._0_8_ = local_98;
        fVar2 = SUB84(local_98,0);
        auVar24 = insertps(auVar24,uVar20,0x10);
        local_108 = (float)uVar22;
        fStack_104 = (float)((uint64_t)uVar22 >> 0x20);
        fVar21 = auVar24._0_4_ - local_108;
        fStack_104 = auVar24._4_4_ - fStack_104;
        if (SQRT(fStack_104 * fStack_104 + fVar21 * fVar21) < g_02390d2c) {
LAB_01a1453c:
          lVar16 = *local_60;
          cVar9 = (char)local_60[1];
          lVar14 = *arg1;
          if (lVar14 == lVar16) {
            if (cVar9 != '\0') {
              if (((char)arg1[1] == '\0') && (lVar16 != 0)) {
                cVar9 = '\x01';
                FUN_00d50b00();
                goto LAB_01a145a0;
              }
              goto LAB_01a145a4;
            }
          }
          else {
            lVar6 = arg1[1];
            if ((cVar9 != '\0') && (lVar16 != 0)) {
              FUN_00d50b00();
            }
            *arg1 = lVar16;
            if (((char)lVar6 != '\0') && (lVar14 != 0)) {
              FUN_00d50b20();
            }
LAB_01a145a0:
            *(char *)(arg1 + 1) = cVar9;
LAB_01a145a4:
            lVar16 = *arg1;
          }
          if (lVar16 == 0) {
            FUN_01a58dc0();
            (**(code **)(*local_88 + 0x658))();
            plVar7 = local_40;
            plVar1 = (int64_t *)*arg1;
            if (plVar1 == local_40) {
              if (((char)arg1[1] == '\0') && (local_40 != (int64_t *)0x0)) {
                if (local_38 == '\0') {
                  FUN_00d50b00();
                  goto LAB_01a14661;
                }
                goto LAB_01a14611;
              }
LAB_01a1461a:
              if (*arg1 != 0) goto LAB_01a14622;
LAB_01a1466e:
              bVar19 = false;
            }
            else {
              lVar14 = arg1[1];
              if (local_38 != '\0') {
                *arg1 = (int64_t)local_40;
                if (((char)lVar14 != '\0') && (plVar1 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01a14611:
                *(void*)(arg1 + 1) = 1;
                local_38 = '\0';
                goto LAB_01a1461a;
              }
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (int64_t)plVar7;
              if (((char)lVar14 != '\0') && (plVar1 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01a14661:
              *(void*)(arg1 + 1) = 1;
              if (*arg1 == 0) goto LAB_01a1466e;
LAB_01a14622:
              iVar10 = FUN_01d3a5a0();
              bVar19 = iVar10 != 6;
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (!bVar19) goto LAB_01a14991;
          }
          iVar10 = FUN_01d3a5a0();
          if (iVar10 == 5) {
            pvVar12 = _pthread_getspecific((void*)plVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            plVar13 = (int64_t *)FUN_00e8b990();
            plVar13 = (int64_t *)*plVar13;
            cVar9 = (*plVar13[0x78])();
            if (cVar9 != '\0') {
              pvVar12 = _pthread_getspecific((void*)plVar13);
              if (pvVar12 != (void *)0x0) {
                FUN_00e8b990();
              }
              plVar13 = (int64_t *)FUN_00e8b990();
              plVar13 = (int64_t *)*plVar13;
              (*plVar13[0x77])();
            }
            FUN_01a58dc0();
            FUN_01d3abf0();
            local_98 = (double)FUN_01e466c0();
            uStack_90 = extraout_XMM0_Qb_00;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01a58dc0();
            auVar3._8_8_ = uStack_90;
            auVar3._0_8_ = local_98;
            auVar25._4_12_ = auVar3._4_12_;
            auVar25._0_4_ = SUB84(local_98,0) - (local_108 - fVar2);
            local_98 = (double)(**(code **)(*local_40 + 0x930))(auVar25._0_8_);
            pvVar12 = _pthread_getspecific((void*)plVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_0125a280();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar12 = _pthread_getspecific((void*)plVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar26 = 0.0;
            if (0.0 <= local_98 - dVar23) {
              dVar26 = local_98 - dVar23;
            }
            dVar23 = g_0238fee8;
            if (dVar26 <= g_0238fee8) {
              dVar23 = dVar26;
            }
            local_98 = (double)FUN_012685b0(dVar23);
            pvVar12 = _pthread_getspecific((void*)plVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar12 = _pthread_getspecific((void*)plVar13);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar23 = (double)FUN_013de950();
            FUN_00e7d850(local_98 / dVar23);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar12 = _pthread_getspecific((void*)plVar13);
            if ((pvVar12 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              plVar13 = local_68;
            }
            FUN_014bd010();
          }
          goto LAB_01a1453c;
        }
LAB_01a14991:
        plVar13 = local_60;
        if (*local_60 != 0) {
          *local_60 = 0;
          if ((char)local_60[1] != '\0') {
            FUN_00d50b20();
          }
          *(void*)(plVar13 + 1) = 0;
        }
        if ((char)local_6c == '\0') {
          FUN_00d50b20();
        }
        uVar17 = CONCAT71((int7)((uint64_t)plVar13 >> 8),1);
        cVar9 = '\0';
        bVar4 = false;
        bVar5 = true;
LAB_01a142a3:
        if (cVar9 == '\0') {
          FUN_00d50b20();
        }
      }
      if (bVar5 && !bVar4) {
        FUN_00d50b20();
      }
      goto LAB_01a142c5;
    }
    local_a8 = *param_2;
  }
  local_b8 = *arg1;
  local_b0 = '\0';
  local_a0 = '\0';
  uVar11 = FUN_01a58d30(local_b8,&local_a8);
  uVar17 = (uint64_t)uVar11;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
LAB_01a142c5:
  return uVar17 & 0xffffffff;
}

