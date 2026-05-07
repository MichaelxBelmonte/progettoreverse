// Function: FUN_00459eb0
// Address: 00459eb0
// Size: 8414 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00459eb0(int64_t *param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  char cVar2;
  uint8_t uVar3;
  byte bVar4;
  uint64_t uVar5;
  void *pvVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  void* pVar11;
  int unaff_ESI;
  int iVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  bool bVar14;
  float fVar15;
  double dVar16;
  int64_t *local_198;
  char local_190;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  float local_134;
  int64_t *local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  uint64_t local_d8;
  int64_t *local_d0;
  int local_c8;
  float local_c4;
  int64_t *local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  uint32_t local_9c;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  int local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  plVar13 = param_1;
  local_c8 = unaff_ESI;
  if (((int)this_ptr[0xe] == unaff_ESI) && ((unaff_ESI != 1 || (*param_1 == this_ptr[0xd])))) {
LAB_0045a060:
    local_9c = 0;
  }
  else {
    (**(code **)(*this_ptr + 0x4b0))();
    FUN_00453e00();
    lVar8 = this_ptr[0xc];
    if ((lVar8 != 0) || (lVar8 = this_ptr[6], lVar8 != 0)) {
      FUN_00d50b00();
    }
    if (lVar8 == 0) goto LAB_0045a060;
    if ((*(int64_t *)(lVar8 + 0x308) == 0) || (cVar2 = FUN_00324720(), cVar2 == '\0')) {
      local_9c = 0;
    }
    else {
      FUN_005174e0();
      FUN_00cafd20();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_005174e0();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_003243b0();
      FUN_005174e0();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_005174e0();
      uVar5 = (**(code **)(*local_58 + 0x3c8))();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
      local_9c = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    }
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0xe) = local_c8;
  if (this_ptr[0xc] != 0) {
    this_ptr[0xc] = 0;
    FUN_00d50b20();
  }
  local_98 = this_ptr + 0xc;
  FUN_00324f60();
  uVar3 = FUN_0078cda0();
  local_c0 = (int64_t *)CONCAT71(local_c0._1_7_,uVar3);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)plVar13;
  if (local_c8 != 0) {
    if (local_c8 != 1) {
      if (local_c8 != 2) goto LAB_0045beab;
      cVar2 = (**(code **)(*this_ptr + 0x4a0))();
      if (((cVar2 != '\0') && (*param_3 != 0)) && (cVar2 = FUN_0053ac00(), cVar2 == '\0')) {
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f51f0();
        local_c0 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0045b220;
          }
        }
        else if (local_58 != (int64_t *)0x0) {
LAB_0045b220:
          FUN_01f27fe0();
          FUN_00324f60();
          local_e8 = local_68;
          local_e0 = 0;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_e0 = '\x01';
          FUN_000c4290();
          plVar13 = local_58;
          if (local_50 == '\0') {
            if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
               (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = '\0';
          }
          if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            local_50 = '\0';
            local_58 = (int64_t *)0x0;
            local_a8 = plVar13;
            local_48 = plVar13;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            do {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar12 = -local_40._4_4_;
                }
                else {
                  iVar12 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar12);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar12 = 0;
                }
                local_40 = CONCAT44(iVar12,(int)local_40);
              }
              lVar8 = (int64_t)(int)local_40;
              iVar12 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar12);
              if (*(int *)((int64_t)local_48 + 0xc) <= iVar12) goto LAB_0045bdb5;
              local_58 = *(int64_t **)(local_48[2] + 8 + lVar8 * 8);
              cVar2 = FUN_00518a70();
              if (cVar2 != '\0') {
                FUN_00537d80();
                local_90 = local_c0;
                local_88 = '\0';
                cVar2 = FUN_00d24090();
                if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar2 != '\0') goto LAB_0045b8fd;
              }
            } while( true );
          }
          goto LAB_0045bdd1;
        }
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4d60();
        plVar13 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_0045b86a;
          }
        }
        else if (local_58 != (int64_t *)0x0) {
LAB_0045b86a:
          FUN_0051be00();
          plVar10 = local_58;
          plVar9 = local_98;
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 != plVar13) {
            uVar5 = FUN_01f27fe0();
            local_148 = plVar13;
            local_140 = '\0';
            FUN_000e2220(uVar5,&local_148);
            plVar13 = (int64_t *)*plVar9;
            plVar10 = plVar13;
            if (plVar13 != local_58) {
              if (local_50 == '\0') {
                if (local_58 == (int64_t *)0x0) {
                  plVar10 = (int64_t *)0x0;
                }
                else {
                  FUN_00d50b00();
                  plVar13 = (int64_t *)*plVar9;
                  plVar10 = local_58;
                }
              }
              else {
                local_50 = '\0';
                plVar10 = local_58;
              }
              *plVar9 = (int64_t)plVar10;
              if (plVar13 != (int64_t *)0x0) {
                FUN_00d50b20();
                plVar10 = local_58;
              }
            }
            if ((local_50 != '\0') && (plVar10 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
LAB_0045bdd9:
      if (this_ptr[0xd] != 0) {
        this_ptr[0xd] = 0;
        FUN_00d50b20();
      }
      FUN_00459a90();
      goto LAB_0045beab;
    }
    cVar2 = (**(code **)(*this_ptr + 0x4a0))();
    pVar11 = (void*)plVar13;
    if ((cVar2 != '\0') && (*param_1 != 0)) {
      cVar2 = FUN_00518a70();
      if (cVar2 != '\0') {
        FUN_00537d80();
        local_58 = (int64_t *)*param_1;
        local_50 = '\0';
        cVar2 = FUN_00d24090();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = 1;
        if (cVar2 != '\0') {
          cVar2 = FUN_00bd22a0();
          if (cVar2 == '\0') {
            bVar4 = 0;
          }
          else {
            bVar4 = (**(code **)(*(int64_t *)this_ptr[6] + 0x390))();
            bVar4 = bVar4 ^ 1;
          }
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pVar11 = (void*)plVar13;
        if (bVar4 == 0) goto LAB_0045b3b9;
      }
      uVar5 = FUN_01f27fe0();
      local_158 = *param_1;
      local_150 = '\0';
      FUN_000e2470(uVar5,&local_158);
      plVar9 = (int64_t *)*local_98;
      if (plVar9 != local_58) {
        plVar13 = plVar9;
        if (local_50 == '\0') {
          if (local_58 == (int64_t *)0x0) {
            plVar9 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar9 = local_58;
            plVar13 = (int64_t *)*local_98;
          }
        }
        else {
          local_50 = '\0';
          plVar9 = local_58;
        }
        *local_98 = (int64_t)plVar9;
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar9 = local_58;
        }
      }
      pVar11 = (void*)plVar13;
      if ((local_50 != '\0') && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_0045b3b9:
    lVar8 = *local_98;
    if ((lVar8 != 0) || (lVar8 = this_ptr[6], lVar8 != 0)) {
      FUN_00d50b00();
    }
    FUN_00537d80();
    local_58 = (int64_t *)*param_1;
    local_50 = '\0';
    cVar2 = FUN_00d24090();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      if (*param_1 != 0) {
        *param_1 = 0;
        if ((char)param_1[1] != '\0') {
          FUN_00d50b20();
        }
        *(void*)(param_1 + 1) = 0;
        goto LAB_0045b463;
      }
      if (this_ptr[0xd] != 0) {
        this_ptr[0xd] = 0;
LAB_0045b498:
        FUN_00d50b20();
      }
    }
    else {
LAB_0045b463:
      lVar8 = *param_1;
      lVar1 = this_ptr[0xd];
      if (lVar1 != lVar8) {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        this_ptr[0xd] = lVar8;
        if (lVar1 != 0) goto LAB_0045b498;
      }
    }
    if (*param_1 == 0) {
      plVar13 = (int64_t *)0x0;
      bVar14 = false;
    }
    else {
      pvVar6 = _pthread_getspecific(pVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      plVar9 = local_58;
      if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_c0 == '\0') {
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01650210();
      }
      else {
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01650620();
        pvVar6 = _pthread_getspecific(pVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01665000();
      }
      plVar13 = local_58;
      if (local_58 == (int64_t *)0x0) {
        bVar14 = false;
      }
      else if (local_50 == '\0') {
        FUN_00d50b00();
        bVar14 = true;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
        bVar14 = true;
      }
      if ((((char)local_c0 != '\0') && (local_88 != '\0')) && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00459a90();
    if ((bVar14) && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_0045beab;
  }
  cVar2 = (**(code **)(*this_ptr + 0x4a0))();
  if (cVar2 != '\0') {
    FUN_00453670();
    plVar13 = local_58;
    if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
        ) && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_d0 = plVar13;
    FUN_00324f60();
    FUN_00756eb0();
    if (local_58 == this_ptr) {
      FUN_0051b5d0();
      bVar14 = local_68 != (int64_t *)0x0;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar14 = false;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar13 = local_d0;
    if (bVar14) {
      FUN_0051b5d0();
      FUN_00324f60();
      uVar5 = (**(code **)(*local_198 + 0x628))();
      local_128 = local_b8;
      local_120 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != (int64_t *)0x0) {
          uVar5 = FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_120 = '\x01';
      FUN_00642e80(uVar5,&local_128);
      FUN_004405c0();
      plVar13 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_130 = plVar13;
      local_c4 = (float)FUN_004b8660();
      plVar13 = g_026f6fd0;
      if (g_026f6fd0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      dVar16 = (double)FUN_00e7d6f0();
      uVar7 = (uint64_t)(dVar16 * g_023907c0);
      dVar16 = dVar16 * g_023907c0 - g_023907c8;
      FUN_0071a120();
      if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar4 = (byte)(((int64_t)dVar16 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
      local_90 = plVar13;
      local_88 = '\0';
      FUN_000175c0();
      plVar9 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        local_50 = '\0';
        local_58 = plVar9;
        bVar4 = FUN_00c70bc0();
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((plVar9 != (int64_t *)0x0 & bVar4) == 0) {
        local_c4 = g_02390d00;
      }
      plVar13 = local_d0;
      if (local_d0 != (int64_t *)0x0) {
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = local_d0;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_134 = g_02390124 + local_c4;
        local_40._4_4_ = 0;
        while( true ) {
          plVar13 = local_d0;
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar12 = -local_40._4_4_;
            }
            else {
              iVar12 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar12);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar12 = 0;
            }
            local_40 = CONCAT44(iVar12,(int)local_40);
          }
          lVar8 = (int64_t)(int)local_40;
          iVar12 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar12);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar12) break;
          local_58 = *(int64_t **)(local_48[2] + 8 + lVar8 * 8);
          if (local_58[0x61] == 0) {
            FUN_0051b4f0();
            plVar13 = local_90;
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar13 != (int64_t *)0x0) {
              FUN_0051b4f0();
              plVar13 = local_68;
              local_110 = 0;
              if (local_60 == '\0') {
                if (local_68 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              local_110 = '\x01';
              local_118 = plVar13;
              uVar5 = FUN_000ba510();
              plVar13 = local_90;
              if (local_90 == (int64_t *)0x0) {
                plVar13 = (int64_t *)0x0;
                local_d8 = 0;
              }
              else if (local_88 == '\0') {
                uVar5 = FUN_00d50b00();
                local_d8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
                if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_88 = '\0';
                local_d8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
              }
              if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0045ae00;
            }
LAB_0045ad32:
            plVar13 = (int64_t *)0x0;
            bVar14 = true;
            local_d8 = 0;
            fVar15 = g_02390124;
          }
          else {
            FUN_00537d80();
            iVar12 = *(int *)((int64_t)local_90 + 0xc);
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (iVar12 == 0) goto LAB_0045ad32;
            uVar5 = FUN_00323290();
            plVar13 = local_90;
            if (local_90 == (int64_t *)0x0) {
              plVar13 = (int64_t *)0x0;
              local_d8 = 0;
            }
            else {
              local_d8 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
              if (((local_88 == '\0') && (FUN_00d50b00(), local_88 != '\0')) &&
                 (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00537d80();
            plVar9 = local_90;
            if (local_88 == '\0') {
              if (local_90 != (int64_t *)0x0) {
                FUN_00d50b00();
                if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0045ab68;
              }
            }
            else if (local_90 != (int64_t *)0x0) {
LAB_0045ab68:
              local_88 = '\0';
              local_90 = (int64_t *)0x0;
              local_a8 = plVar9;
              local_80 = plVar9;
              local_78 = 0xffffffff;
              local_70 = 0;
              local_78._4_4_ = 0;
              while( true ) {
                if (local_78._4_4_ != 0) {
                  if (local_78._4_4_ < 1) {
                    iVar12 = -local_78._4_4_;
                  }
                  else {
                    iVar12 = (int)local_78 - local_78._4_4_;
                    local_78 = CONCAT44(local_78._4_4_,iVar12);
                    FUN_00d23690();
                    local_70 = local_70 + local_78._4_4_;
                    iVar12 = 0;
                  }
                  local_78 = CONCAT44(iVar12,(int)local_78);
                }
                lVar8 = (int64_t)(int)local_78;
                iVar12 = (int)local_78 + 1;
                local_78 = CONCAT44(local_78._4_4_,iVar12);
                if (*(int *)((int64_t)local_80 + 0xc) <= iVar12) break;
                local_90 = *(int64_t **)(local_80[2] + 8 + lVar8 * 8);
                pVar11 = (void*)local_80[2];
                if ((char)local_c0 == '\0') {
                  pvVar6 = _pthread_getspecific(pVar11);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0165a070();
                }
                else {
                  pvVar6 = _pthread_getspecific(pVar11);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0165a0b0();
                }
                plVar9 = local_b8;
                if (local_b0 == '\0') {
                  if (local_b8 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_b0 = '\0';
                }
                local_68 = plVar9;
                local_60 = '\0';
                FUN_00d21140();
                if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar9 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00277f20();
              FUN_00d50b20();
            }
LAB_0045ae00:
            if (plVar13 == (int64_t *)0x0) {
              bVar14 = true;
              plVar13 = (int64_t *)0x0;
              fVar15 = g_02390124;
            }
            else {
              local_88 = '\0';
              local_90 = (int64_t *)0x0;
              local_78 = 0xffffffff;
              local_70 = 0;
              local_a8 = (int64_t *)CONCAT44(local_a8._4_4_,g_02390124);
              local_80 = plVar13;
              while( true ) {
                lVar8 = (int64_t)(int)local_78;
                iVar12 = (int)local_78 + 1;
                local_78 = CONCAT44(local_78._4_4_,iVar12);
                if (*(int *)((int64_t)local_80 + 0xc) <= iVar12) break;
                local_90 = *(int64_t **)(local_80[2] + 8 + lVar8 * 8);
                pvVar6 = _pthread_getspecific((void*)local_80[2]);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar5 = FUN_012f4d60();
                local_108 = local_b8;
                local_100 = 0;
                if (local_b0 == '\0') {
                  if (local_b8 != (int64_t *)0x0) {
                    uVar5 = FUN_00d50b00();
                  }
                }
                else {
                  local_b0 = '\0';
                }
                local_100 = '\x01';
                FUN_004b8020(uVar5,&local_108);
                plVar9 = local_68;
                if (local_60 == '\0') {
                  if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
                     (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_60 = '\0';
                }
                if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar9 != (int64_t *)0x0) {
                  cVar2 = FUN_003b7710();
                  if (cVar2 == '\0') {
                    if (local_c4 <= 0.0) {
                      cVar2 = FUN_003b7780();
                      local_a8 = (int64_t *)CONCAT44(local_a8._4_4_,local_134);
                      if (cVar2 == '\0') {
                        fVar15 = 0.0;
                        goto LAB_0045b04f;
                      }
                    }
                    else {
                      cVar2 = FUN_003b7780();
                      local_a8 = (int64_t *)CONCAT44(local_a8._4_4_,g_02390124);
                      fVar15 = local_c4;
                      if (cVar2 == '\0') {
LAB_0045b04f:
                        local_a8 = (int64_t *)CONCAT44(local_a8._4_4_,fVar15);
                      }
                    }
                  }
                  FUN_00d50b20();
                  break;
                }
                local_a8 = (int64_t *)((uint64_t)local_a8 & 0xffffffff00000000);
                if (local_78._4_4_ != 0) {
                  if (local_78._4_4_ < 1) {
                    iVar12 = -local_78._4_4_;
                  }
                  else {
                    local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                    FUN_00d23690();
                    local_70 = local_70 + local_78._4_4_;
                    iVar12 = 0;
                  }
                  local_78 = CONCAT44(iVar12,(int)local_78);
                }
              }
              FUN_000be170();
              bVar14 = false;
              fVar15 = local_a8._0_4_;
            }
          }
          local_170 = '\0';
          local_178 = plVar13;
          FUN_0051d3f0(fVar15,&local_178);
          if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)local_d8 != '\0' && !bVar14) {
            FUN_00d50b20();
          }
        }
        FUN_0015ee90();
      }
      if (local_130 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    cVar2 = FUN_0053ac00();
    if (cVar2 == '\0') {
      if ((*(int64_t *)(this_ptr[6] + 0x308) != 0) && (plVar13 != (int64_t *)0x0)) {
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_48 = plVar13;
        while( true ) {
          lVar8 = (int64_t)(int)local_40;
          iVar12 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar12);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar12) break;
          local_58 = *(int64_t **)(local_48[2] + 8 + lVar8 * 8);
          cVar2 = FUN_0053ac00();
          if (cVar2 != '\0') {
            plVar9 = (int64_t *)*local_98;
            if (plVar9 != local_58) {
              if (local_50 == '\0') {
                if (local_58 == (int64_t *)0x0) {
                  plVar10 = (int64_t *)0x0;
                }
                else {
                  FUN_00d50b00();
                  plVar9 = (int64_t *)*local_98;
                  plVar10 = local_58;
                }
              }
              else {
                local_50 = '\0';
                plVar10 = local_58;
              }
              *local_98 = (int64_t)plVar10;
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            break;
          }
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar12 = -local_40._4_4_;
            }
            else {
              local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar12 = 0;
            }
            local_40 = CONCAT44(iVar12,(int)local_40);
          }
        }
        FUN_0015ee90();
      }
      if ((*local_98 == 0) && (cVar2 = FUN_00518a70(), cVar2 == '\0')) {
        cVar2 = FUN_0051c200();
        if ((cVar2 != '\0') && (*(int64_t **)(this_ptr[6] + 0x310) != (int64_t *)0x0)) {
          local_50 = '\0';
          local_58 = (int64_t *)0x0;
          local_40 = 0xffffffff;
          local_38 = 0;
          local_48 = *(int64_t **)(this_ptr[6] + 0x310);
          while( true ) {
            lVar8 = (int64_t)(int)local_40;
            iVar12 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar12);
            if (*(int *)((int64_t)local_48 + 0xc) <= iVar12) break;
            local_58 = *(int64_t **)(local_48[2] + 8 + lVar8 * 8);
            uVar5 = FUN_01f27fe0();
            local_168 = local_58;
            local_160 = '\0';
            FUN_000e2470(uVar5,&local_168);
            plVar9 = (int64_t *)*local_98;
            plVar13 = plVar9;
            if (plVar9 != local_90) {
              plVar10 = plVar9;
              if (local_88 == '\0') {
                if (local_90 == (int64_t *)0x0) {
                  plVar9 = (int64_t *)0x0;
                }
                else {
                  FUN_00d50b00();
                  plVar10 = (int64_t *)*local_98;
                  plVar9 = local_90;
                }
              }
              else {
                local_88 = '\0';
                plVar9 = local_90;
              }
              *local_98 = (int64_t)plVar9;
              plVar13 = plVar9;
              if (plVar10 != (int64_t *)0x0) {
                FUN_00d50b20();
                plVar9 = (int64_t *)*local_98;
                plVar13 = local_90;
              }
            }
            if ((local_88 != '\0') && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar13 = local_d0;
            if (plVar9 != (int64_t *)0x0) break;
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar12 = -local_40._4_4_;
              }
              else {
                local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar12 = 0;
              }
              local_40 = CONCAT44(iVar12,(int)local_40);
            }
          }
          FUN_00277f20();
        }
        if (*local_98 == 0) {
          FUN_01f27fe0();
          FUN_00324f60();
          local_f8 = local_68;
          local_f0 = 0;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          plVar13 = local_d0;
          local_f0 = '\x01';
          FUN_000c4290();
          plVar9 = local_58;
          if (local_50 == '\0') {
            if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
               (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_50 = '\0';
          }
          if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar9 != (int64_t *)0x0) {
            local_50 = '\0';
            local_58 = (int64_t *)0x0;
            local_48 = plVar9;
            local_40 = 0xffffffff;
            local_38 = 0;
            local_40._4_4_ = 0;
            do {
              if (local_40._4_4_ != 0) {
                if (local_40._4_4_ < 1) {
                  iVar12 = -local_40._4_4_;
                }
                else {
                  iVar12 = (int)local_40 - local_40._4_4_;
                  local_40 = CONCAT44(local_40._4_4_,iVar12);
                  FUN_00d23690();
                  local_38 = local_38 + local_40._4_4_;
                  iVar12 = 0;
                }
                local_40 = CONCAT44(iVar12,(int)local_40);
              }
              lVar8 = (int64_t)(int)local_40;
              iVar12 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,iVar12);
              if (*(int *)((int64_t)local_48 + 0xc) <= iVar12) goto LAB_0045be77;
              local_58 = *(int64_t **)(local_48[2] + 8 + lVar8 * 8);
              cVar2 = FUN_00518a70();
              if (cVar2 != '\0') {
                FUN_00537d80();
                iVar12 = *(int *)((int64_t)local_90 + 0xc);
                if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                plVar13 = local_d0;
                if (iVar12 != 0) goto LAB_0045be17;
              }
            } while( true );
          }
        }
      }
    }
    goto LAB_0045be88;
  }
  FUN_00324f60();
  (**(code **)(*local_68 + 0x628))();
  pvVar6 = _pthread_getspecific(pVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a11a0();
  plVar13 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_c0 == '\0') {
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01713990();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    plVar9 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00459a90();
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017139d0();
    pvVar6 = _pthread_getspecific(pVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    plVar9 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00459a90();
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  goto LAB_0045be95;
LAB_0045b8fd:
  plVar13 = (int64_t *)*local_98;
  if (plVar13 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        plVar13 = (int64_t *)*local_98;
        plVar9 = local_58;
      }
    }
    else {
      local_50 = '\0';
      plVar9 = local_58;
    }
    *local_98 = (int64_t)plVar9;
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_0045bdb5:
  FUN_0015ee90();
  FUN_00d50b20();
LAB_0045bdd1:
  FUN_00d50b20();
  goto LAB_0045bdd9;
LAB_0045be17:
  plVar9 = (int64_t *)*local_98;
  if (plVar9 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) {
        plVar10 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        plVar9 = (int64_t *)*local_98;
        plVar10 = local_58;
      }
    }
    else {
      local_50 = '\0';
      plVar10 = local_58;
    }
    *local_98 = (int64_t)plVar10;
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_0045be77:
  FUN_0015ee90();
  FUN_00d50b20();
LAB_0045be88:
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0045be95:
  if (this_ptr[0xd] != 0) {
    this_ptr[0xd] = 0;
    FUN_00d50b20();
  }
LAB_0045beab:
  if (((byte)local_9c & local_c8 != 0) == 1) {
    lVar8 = *local_98;
    if ((lVar8 != 0) || (lVar8 = this_ptr[6], lVar8 != 0)) {
      FUN_00d50b00();
    }
    FUN_005174e0();
    FUN_00cafd20();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_005174e0();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_003243b0();
    FUN_005174e0();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_005174e0();
    (**(code **)(*local_58 + 0x3c8))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

