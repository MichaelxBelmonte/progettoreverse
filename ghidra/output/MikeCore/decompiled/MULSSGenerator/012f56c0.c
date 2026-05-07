// Function: FUN_012f56c0
// Address: 012f56c0
// Size: 5254 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012f6815) */
/* WARNING: Removing unreachable block (ram,0x012f6482) */
/* WARNING: Removing unreachable block (ram,0x012f648e) */
/* WARNING: Removing unreachable block (ram,0x012f5fe6) */
/* WARNING: Removing unreachable block (ram,0x012f5ff2) */
/* WARNING: Removing unreachable block (ram,0x012f5e45) */
/* WARNING: Removing unreachable block (ram,0x012f5e4e) */
/* WARNING: Removing unreachable block (ram,0x012f6121) */
/* WARNING: Removing unreachable block (ram,0x012f612d) */
/* WARNING: Removing unreachable block (ram,0x012f6534) */
/* WARNING: Removing unreachable block (ram,0x012f6540) */
/* WARNING: Removing unreachable block (ram,0x012f683c) */
/* WARNING: Removing unreachable block (ram,0x012f6848) */
/* WARNING: Removing unreachable block (ram,0x012f67a0) */
/* WARNING: Removing unreachable block (ram,0x012f60c6) */
/* WARNING: Removing unreachable block (ram,0x012f60d3) */
/* WARNING: Removing unreachable block (ram,0x012f6625) */
/* WARNING: Removing unreachable block (ram,0x012f6631) */
/* WARNING: Removing unreachable block (ram,0x012f6904) */
/* WARNING: Removing unreachable block (ram,0x012f6911) */
/* WARNING: Removing unreachable block (ram,0x012f6177) */
/* WARNING: Removing unreachable block (ram,0x012f61a0) */
/* WARNING: Removing unreachable block (ram,0x012f6179) */
/* WARNING: Removing unreachable block (ram,0x012f61a2) */
/* WARNING: Removing unreachable block (ram,0x012f5ec9) */
/* WARNING: Removing unreachable block (ram,0x012f5ba9) */
/* WARNING: Removing unreachable block (ram,0x012f57ff) */
/* WARNING: Removing unreachable block (ram,0x012f5820) */
/* WARNING: Removing unreachable block (ram,0x012f5801) */
/* WARNING: Removing unreachable block (ram,0x012f5822) */
/* WARNING: Removing unreachable block (ram,0x012f5ba7) */
/* WARNING: Removing unreachable block (ram,0x012f5bd0) */
/* WARNING: Removing unreachable block (ram,0x012f5bd2) */
/* WARNING: Removing unreachable block (ram,0x012f5ec7) */
/* WARNING: Removing unreachable block (ram,0x012f5ef0) */
/* WARNING: Removing unreachable block (ram,0x012f5ef2) */
/* WARNING: Removing unreachable block (ram,0x012f60f5) */
/* WARNING: Removing unreachable block (ram,0x012f676f) */

void FUN_012f56c0(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  void *pvVar9;
  longlong *plVar10;
  undefined7 uVar12;
  longlong lVar11;
  pthread_key_t pVar13;
  int iVar14;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined1 uVar15;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  undefined4 local_e0;
  int local_dc;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  longlong local_98;
  char local_90 [8];
  longlong local_88;
  undefined8 local_80;
  int local_78;
  longlong local_70;
  longlong local_68;
  longlong local_58;
  char local_50;
  int local_40;
  
  *(int *)((longlong)unaff_RDI + 0x6c) = *(int *)((longlong)unaff_RDI + 0x6c) + 1;
  local_e0 = unaff_ESI;
  lVar6 = FUN_00e8b990();
  if (lVar6 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  local_b8 = puVar7;
  (*DAT_02572370)();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar4)();
  local_a8 = puVar7;
  local_68 = FUN_012f75b0();
  local_a0 = FUN_012f7690();
  if (unaff_RDI[0xb] == 0) {
    local_58 = unaff_RDI[0x16];
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    FUN_00d243f0();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar6 = unaff_RDI[0x16];
    if (lVar6 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar8 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        lVar11 = *(longlong *)(lVar6 + 0x10);
        local_58 = *(longlong *)(lVar11 + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar11);
        pVar13 = (pthread_key_t)lVar11;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_90[0] == '\0') {
          if (local_98 == 0) goto LAB_012f5950;
          FUN_00d50b00();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
LAB_012f58d0:
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar5 = FUN_012754d0(local_68,local_a0);
          if (cVar5 == '\0') {
LAB_012f5a20:
            local_90[0] = '\0';
            local_98 = local_58;
            FUN_00d21140();
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar5 = FUN_0129b690(local_68,local_a0);
            if (cVar5 == '\0') goto LAB_012f5a20;
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            lVar11 = local_98;
            lVar8 = unaff_RDI[0xb];
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if (lVar11 != lVar8) goto LAB_012f5a20;
          }
          FUN_00d50b20();
        }
        else {
          if (local_98 != 0) goto LAB_012f58d0;
LAB_012f5950:
          local_90[0] = '\0';
          local_98 = local_58;
          FUN_00d21140();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_001159b0();
      param_1 = (pthread_key_t)lVar6;
    }
    lVar6 = local_58;
    pvVar9 = _pthread_getspecific(param_1);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e9900(local_68,local_a0);
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    local_d0 = 0;
    lVar8 = unaff_RDI[0x16];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_d8 = lVar8;
    FUN_012f7770();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = local_58;
    if (local_58 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_70 = lVar6;
      local_40 = -1;
LAB_012f5ba3:
      lVar8 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (local_40 < *(int *)(lVar6 + 0xc)) {
        lVar11 = *(longlong *)(lVar6 + 0x10);
        local_58 = *(longlong *)(lVar11 + 8 + lVar8 * 8);
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar11);
        pVar13 = (pthread_key_t)lVar11;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_0129b690(local_68,local_a0);
        if (cVar5 != '\0') {
          pvVar9 = _pthread_getspecific(pVar13);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01299fe0();
          lVar8 = local_98;
          if (local_90[0] == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
              if ((local_90[0] != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_012f5cd0;
            }
          }
          else if (local_98 != 0) {
LAB_012f5cd0:
            local_90[0] = '\0';
            local_98 = 0;
            local_88 = lVar8;
            local_80 = 0xffffffff;
            local_78 = 0;
            while( true ) {
              lVar8 = (longlong)(int)local_80;
              iVar14 = (int)local_80 + 1;
              local_80 = CONCAT44(local_80._4_4_,iVar14);
              if (*(int *)(local_88 + 0xc) <= iVar14) break;
              local_c8 = *(longlong *)(*(longlong *)(local_88 + 0x10) + 8 + lVar8 * 8);
              local_c0 = '\0';
              local_98 = local_c8;
              cVar5 = FUN_00d7a850();
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
              if (cVar5 != '\0') {
                FUN_001159b0();
                FUN_00d50b20();
                goto LAB_012f5ba3;
              }
              if (local_80._4_4_ != 0) {
                if (local_80._4_4_ < 1) {
                  iVar14 = -local_80._4_4_;
                }
                else {
                  local_80 = CONCAT44(local_80._4_4_,(int)local_80 - local_80._4_4_);
                  FUN_00d23690();
                  local_78 = local_78 + local_80._4_4_;
                  iVar14 = 0;
                }
                local_80 = CONCAT44(iVar14,(int)local_80);
              }
            }
            FUN_001159b0();
            FUN_00d50b20();
          }
          local_90[0] = '\0';
          local_98 = local_58;
          FUN_00d21140();
          if ((local_90[0] != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_012f5ba3;
      }
      FUN_001159b0();
      lVar8 = local_70;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  puVar7 = local_b8;
  local_dc = *(int *)((longlong)local_b8 + 0xc);
  pVar13 = 0;
  if (local_dc != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar6 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((longlong)puVar7 + 0xc) <= local_40) break;
      lVar8 = puVar7[2];
      local_58 = *(longlong *)(lVar8 + 8 + lVar6 * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar13 = (pthread_key_t)lVar8;
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      lVar6 = local_98;
      local_c8 = CONCAT71(local_c8._1_7_,local_90[0]);
      plVar10 = (longlong *)local_90;
      if (local_90[0] == '\0') {
        plVar10 = &local_c8;
      }
      *(undefined1 *)plVar10 = 0;
      if ((local_90[0] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0129a1f0();
      if (((char)local_c8 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_001159b0();
    pVar13 = (pthread_key_t)puVar7;
    FUN_012edae0();
  }
  if (*(int *)((longlong)local_a8 + 0xc) == 0) {
    local_b0 = 0;
    local_70 = 0;
  }
  else {
    FUN_00d51d20();
    local_70 = local_58;
    if (local_58 == 0) {
      local_b0 = 0;
      if (local_50 != '\0') {
        local_b0 = 0;
      }
    }
    else {
      uVar12 = (undefined7)((ulonglong)local_58 >> 8);
      local_b0 = CONCAT71(uVar12,1);
      if (local_50 == '\0') {
        local_b0 = CONCAT71(uVar12,1);
        FUN_00d50b00();
      }
    }
    FUN_01298e30();
    lVar6 = local_70;
    if (local_70 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar8 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar8 * 8);
        lVar8 = local_a8[2];
        lVar11 = *(longlong *)(lVar8 + (longlong)local_40 * 8);
        pvVar9 = _pthread_getspecific((pthread_key_t)lVar8);
        pVar13 = (pthread_key_t)lVar8;
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        lVar8 = local_98;
        local_68 = lVar11;
        if ((((local_90[0] == '\0') && (local_98 != 0)) && (FUN_00d50b00(), local_90[0] != '\0')) &&
           (local_98 != 0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(pVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        lVar11 = local_98;
        if (local_90[0] == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
            if ((local_90[0] != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_012f62f1;
          }
        }
        else if (local_98 != 0) {
LAB_012f62f1:
          local_90[0] = '\0';
          local_98 = 0;
          local_a0 = lVar11;
          local_88 = lVar11;
          local_80 = 0xffffffff;
          local_78 = 0;
          local_80._4_4_ = 0;
          while( true ) {
            if (local_80._4_4_ != 0) {
              if (local_80._4_4_ < 1) {
                iVar14 = -local_80._4_4_;
              }
              else {
                iVar14 = (int)local_80 - local_80._4_4_;
                local_80 = CONCAT44(local_80._4_4_,iVar14);
                FUN_00d23690();
                local_78 = local_78 + local_80._4_4_;
                iVar14 = 0;
              }
              local_80 = CONCAT44(iVar14,(int)local_80);
            }
            lVar11 = (longlong)(int)local_80;
            iVar14 = (int)local_80 + 1;
            local_80 = CONCAT44(local_80._4_4_,iVar14);
            if (*(int *)(local_88 + 0xc) <= iVar14) break;
            local_98 = *(longlong *)(*(longlong *)(local_88 + 0x10) + 8 + lVar11 * 8);
            lVar11 = *(longlong *)(lVar8 + 0x10);
            lVar2 = *(longlong *)(lVar11 + ((longlong)iVar14 + (longlong)local_78) * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            pVar13 = (pthread_key_t)lVar11;
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef460();
            lVar11 = local_c8;
            if (((local_c0 == '\0') && (local_c8 != 0)) &&
               ((FUN_00d50b00(), local_c0 != '\0' && (local_c8 != 0)))) {
              FUN_00d50b20();
            }
            pvVar9 = _pthread_getspecific(pVar13);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef3f0();
            if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          pVar13 = (pthread_key_t)lVar11;
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific(pVar13);
        if ((pvVar9 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          local_68 = *(longlong *)(local_68 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8)
          ;
        }
        FUN_0129a010();
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_001159b0();
    }
    lVar6 = local_70;
    FUN_012e6c30();
    pVar13 = (pthread_key_t)lVar6;
    FUN_012e7fb0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_012e7fb0();
      pvVar9 = _pthread_getspecific(pVar13);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150ddd0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar6 = local_70;
  if ((char)local_e0 == '\0') {
    local_68 = unaff_RDI[0x16];
    if (local_68 != 0) {
      uVar15 = 1;
      FUN_00d50b00();
      goto LAB_012f669d;
    }
    local_68 = 0;
    local_a0 = CONCAT71(local_a0._1_7_,1);
joined_r0x012f68e5:
    bVar3 = true;
joined_r0x012f68e5:
    if (local_dc == 0) goto LAB_012f6949;
  }
  else {
    if (((char)local_b0 == '\0') || (local_70 == 0)) {
      if (local_70 == 0) {
        local_a0 = CONCAT71(local_a0._1_7_,(char)local_b0);
        local_68 = local_70;
        goto joined_r0x012f68e5;
      }
      local_a0 = CONCAT71(local_a0._1_7_,(char)local_b0);
      iVar14 = *(int *)(local_70 + 0xc);
    }
    else {
      FUN_00d50b00();
      uVar15 = (undefined1)local_b0;
      local_68 = lVar6;
LAB_012f669d:
      local_a0 = CONCAT71(local_a0._1_7_,uVar15);
      iVar14 = *(int *)(local_68 + 0xc);
      lVar6 = local_68;
    }
    local_68 = lVar6;
    if (iVar14 == 0) {
      bVar3 = false;
      goto joined_r0x012f68e5;
    }
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar8 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar6 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar6 + 0x10));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0129b6c0();
    }
    FUN_001159b0();
    local_110 = 0;
    local_108 = '\0';
    plVar10 = &local_110;
    FUN_01271d60(plVar10,1);
    pVar13 = (pthread_key_t)plVar10;
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    local_100 = local_68;
    local_f8 = '\0';
    local_f0 = local_58;
    local_e8 = '\0';
    FUN_0127e4d0(DAT_023b67d8);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    bVar3 = false;
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x6b) = 0;
  (**(code **)(*unaff_RDI + 0x370))();
LAB_012f6949:
  lVar6 = unaff_RDI[0xb];
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    lVar6 = unaff_RDI[0xb];
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0xb8);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2240();
  iVar14 = *(int *)(local_58 + 0xc);
  lVar8 = unaff_RDI[0x17];
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar13);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2240();
  iVar1 = *(int *)(local_98 + 0xc);
  if (local_90[0] != '\0') {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar14 != iVar1) {
    pvVar9 = _pthread_getspecific(pVar13);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if (unaff_RDI[0x17] != local_58) {
      FUN_00d64850();
      lVar8 = unaff_RDI[0x17];
      if (lVar8 != local_58) {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        unaff_RDI[0x17] = local_58;
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar8 = FUN_00e8b990();
  if (lVar8 != 0) {
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *(int *)((longlong)unaff_RDI + 0x6c) = *(int *)((longlong)unaff_RDI + 0x6c) + -1;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_a0 != '\0' && !bVar3) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


