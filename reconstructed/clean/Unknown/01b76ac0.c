// Function: FUN_01b76ac0
// Address: 01b76ac0
// Size: 2793 bytes
// Class: Unknown

uint64_t FUN_01b76ac0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  double dVar3;
  int64_t *plVar4;
  char cVar5;
  void*puVar6;
  void*puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  uint64_t uVar12;
  uint64_t *puVar13;
  void* pVar14;
  void*puVar15;
  int64_t *plVar16;
  uint64_t uVar17;
  int64_t *arg1;
  int64_t *this_ptr;
  byte bVar18;
  uint32_t extraout_XMM0_Da;
  float fVar19;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Db;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  double local_b0;
  int local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int64_t *local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint32_t local_60;
  int iStack_5c;
  uint64_t local_58;
  int64_t *local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  if ((*arg1 == 0) || (iVar9 = FUN_01d3a5a0(), iVar9 != 1)) {
    uVar17 = 0;
    goto LAB_01b775cd;
  }
  local_e8 = *arg1;
  local_e0 = 0;
  FUN_01b74680(extraout_XMM0_Da,&local_e8);
  local_50 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d3abf0();
  fVar19 = (float)FUN_01e466c0();
  local_88 = '\0';
  local_90 = (int64_t *)0x0;
  local_78 = '\0';
  local_80 = (int64_t *)0x0;
  puVar15 = &local_68;
  FUN_01b6e930(puVar15,&local_a8,&local_60);
  plVar2 = local_40;
  pVar14 = (void*)puVar15;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01b76ba7;
    }
LAB_01b76bf9:
    uVar17 = 0;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_01b76bf9;
LAB_01b76ba7:
    cVar5 = local_78;
    plVar4 = local_80;
    cVar8 = local_88;
    plVar16 = local_90;
    local_98 = plVar2;
    if (local_a8 == 2) {
      if (local_90 == plVar2) {
        if (local_88 == '\0') {
          FUN_00d50b00();
          goto LAB_01b76cef;
        }
      }
      else {
        FUN_00d50b00();
        local_90 = local_98;
        if ((cVar8 != '\0') && (plVar16 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01b76cef:
        local_88 = '\x01';
      }
      local_58 = (void*)CONCAT44(local_68._4_4_,(uint32_t)local_68);
      lVar1 = this_ptr[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar11 = _pthread_getspecific(pVar14);
      if (pvVar11 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar15 = &local_58;
      cVar8 = FUN_01253c10(puVar15,&local_80,&local_60,0);
      puVar6 = local_70;
      puVar7 = local_58;
      if (lVar1 != 0) {
        FUN_00d50b20();
        puVar6 = local_70;
        puVar7 = local_58;
      }
joined_r0x01b76d6b:
      local_70 = puVar7;
      if (cVar8 != '\0') {
        local_58 = local_70;
        uVar12 = FUN_00e7d6f0();
        local_b0 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da_00);
        local_9c = (uint)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        uVar12 = 0;
        do {
          local_a4 = (uint)uVar12;
          local_a0 = local_a4;
LAB_01b76da0:
          do {
            (**(code **)(*this_ptr + 0x658))();
            plVar16 = local_40;
            plVar2 = (int64_t *)*arg1;
            if (plVar2 == local_40) {
              if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01b76e0b;
              if (local_38 != '\0') goto LAB_01b76e02;
              FUN_00d50b00();
LAB_01b76e4d:
              *(void*)(arg1 + 1) = 1;
              if (*arg1 != 0) goto LAB_01b76e5f;
LAB_01b7752a:
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01b7753e:
              bVar18 = (byte)local_a4;
              if ((local_a4 & 1) != 0) {
                (**(code **)(*this_ptr + 0xa50))();
                FUN_01b80000();
              }
              *(void*)((int64_t)this_ptr + 0x1b2) = 0;
              dVar3 = (double)FUN_00e7d6f0();
              uVar17 = CONCAT71((int7)((uint64_t)plVar16 >> 8),
                                g_023b3498 <= dVar3 - local_b0 | bVar18);
              goto LAB_01b77588;
            }
            lVar1 = arg1[1];
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (int64_t)plVar16;
              if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01b76e4d;
            }
            *arg1 = (int64_t)local_40;
            if (((char)lVar1 != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01b76e02:
            *(void*)(arg1 + 1) = 1;
            local_38 = '\0';
LAB_01b76e0b:
            if (*arg1 == 0) goto LAB_01b7752a;
LAB_01b76e5f:
            uVar10 = FUN_01d3a5a0();
            plVar16 = (int64_t *)(uint64_t)uVar10;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (uVar10 == 6) goto LAB_01b7753e;
            iVar9 = FUN_01d3a5a0();
          } while (iVar9 != 5);
          local_d8 = *arg1;
          local_d0 = 0;
          FUN_01b74680(extraout_XMM0_Da_01,&local_d8);
          plVar2 = local_40;
          if (local_40 == local_50) {
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (local_50 == (int64_t *)0x0) goto LAB_01b76f30;
            FUN_00d50b20();
            local_50 = plVar2;
          }
          else if (local_50 == (int64_t *)0x0) {
LAB_01b76f30:
            local_50 = plVar2;
          }
          else {
            FUN_00d50b20();
            local_50 = plVar2;
          }
          FUN_01d3abf0();
          uVar12 = FUN_01e466c0();
          local_c8 = uVar12;
          if ((*(char *)((int64_t)this_ptr + 0x1b2) == '\0') &&
             (g_02390d2c < (float)((uint)((float)uVar12 - fVar19) & g_02390140))) {
            *(void*)((int64_t)this_ptr + 0x1b2) = 1;
            FUN_00e7bdb0();
            FUN_01b74770();
          }
          (**(code **)(*local_50 + 0x3c8))((uint32_t)local_c8);
          local_48 = (void*)FUN_01a8fc90();
          pVar14 = (void*)puVar15;
          if (((uint64_t)local_48 >> 0x20 != 0) && (local_70._4_4_ != 0)) {
            cVar8 = FUN_00e7c000();
            pVar14 = (void*)puVar15;
            if (cVar8 != '\0') goto LAB_01b76da0;
          }
          if ((local_a0 & 1) != 0) {
            lVar1 = this_ptr[0x2b];
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pvVar11 = _pthread_getspecific(pVar14);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar13 = (uint64_t *)FUN_00e8b990();
            puVar15 = (void*)*puVar13;
            cVar8 = (*puVar15[0x78])();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            pVar14 = (void*)puVar15;
            if (cVar8 != '\0') {
              lVar1 = this_ptr[0x2b];
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              pvVar11 = _pthread_getspecific(pVar14);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              puVar13 = (uint64_t *)FUN_00e8b990();
              puVar15 = (void*)*puVar13;
              (*puVar15[0x77])();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            pVar14 = (void*)puVar15;
            if ((local_48._4_4_ == 0) || (local_58._4_4_ == 0)) goto LAB_01b77105;
            cVar8 = FUN_00e7c000();
            pVar14 = (void*)puVar15;
            if (cVar8 == '\0') goto LAB_01b77105;
            local_70 = local_58;
            local_a0 = 0;
            goto LAB_01b76da0;
          }
LAB_01b77105:
          if ((local_9c & 1) != 0) {
            (**(code **)(*this_ptr + 0xa48))();
          }
          if ((local_68._4_4_ == 0) || (local_48._4_4_ == 0)) {
LAB_01b7713c:
            if (iStack_5c == 0) {
LAB_01b77161:
              if ((local_48._4_4_ != 0) && (local_70._4_4_ != 0)) {
                cVar8 = FUN_00e7c020();
                if (cVar8 != '\0') {
                  lVar1 = this_ptr[0x2b];
                  if (lVar1 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar11 = _pthread_getspecific(pVar14);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_40 = local_90;
                  local_38 = '\0';
                  puVar15 = local_48;
                  FUN_012502a0(local_48,CONCAT44(local_68._4_4_,(uint32_t)local_68),
                               (char)this_ptr[0x36]);
                  pVar14 = (void*)puVar15;
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (lVar1 != 0) {
                    FUN_00d50b20();
                  }
                  lVar1 = this_ptr[0x2b];
                  if (lVar1 != 0) {
                    FUN_00d50b00();
                  }
                  pvVar11 = _pthread_getspecific(pVar14);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  puVar15 = (void*)CONCAT44(iStack_5c,local_60);
                  local_40 = local_80;
                  local_38 = '\0';
                  FUN_012502a0(puVar15,local_48,(char)this_ptr[0x36]);
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (lVar1 != 0) {
                    FUN_00d50b20();
                  }
                  goto LAB_01b77511;
                }
              }
            }
            else if (local_48._4_4_ != 0) {
              cVar8 = FUN_00e7c020();
              if (cVar8 == '\0') {
                lVar1 = this_ptr[0x2b];
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                pvVar11 = _pthread_getspecific(pVar14);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_40 = local_90;
                local_38 = '\0';
                puVar15 = local_48;
                FUN_012502a0(local_48,CONCAT44(local_68._4_4_,(uint32_t)local_68),
                             (char)this_ptr[0x36]);
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar1 != 0) {
                  FUN_00d50b20();
                }
                goto LAB_01b77511;
              }
              goto LAB_01b77161;
            }
            lVar1 = this_ptr[0x2b];
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pvVar11 = _pthread_getspecific(pVar14);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = CONCAT44(iStack_5c,local_60);
            local_40 = local_80;
            local_38 = '\0';
            FUN_012502a0(uVar12,local_48,(char)this_ptr[0x36]);
            pVar14 = (void*)uVar12;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            lVar1 = this_ptr[0x2b];
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pvVar11 = _pthread_getspecific(pVar14);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = local_90;
            local_38 = '\0';
            puVar15 = local_48;
            FUN_012502a0(local_48,CONCAT44(local_68._4_4_,(uint32_t)local_68),
                         (char)this_ptr[0x36]);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            cVar8 = FUN_00e7c020();
            if (cVar8 != '\0') goto LAB_01b7713c;
            lVar1 = this_ptr[0x2b];
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            pvVar11 = _pthread_getspecific(pVar14);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar15 = (void*)CONCAT44(iStack_5c,local_60);
            local_40 = local_80;
            local_38 = '\0';
            FUN_012502a0(puVar15,local_48,(char)this_ptr[0x36]);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
LAB_01b77511:
          local_70 = local_48;
          uVar12 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
          local_9c = 0;
        } while( true );
      }
    }
    else {
      puVar6 = local_70;
      if (local_a8 == 0) {
        if (local_80 == plVar2) {
          if (local_78 == '\0') {
            FUN_00d50b00();
            goto LAB_01b76c56;
          }
        }
        else {
          FUN_00d50b00();
          local_80 = local_98;
          if ((cVar5 != '\0') && (plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b76c56:
          local_78 = '\x01';
        }
        local_58 = (void*)CONCAT44(iStack_5c,local_60);
        lVar1 = this_ptr[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar15 = &local_68;
        cVar8 = FUN_012535e0(puVar15,&local_90,&local_58,0);
        puVar6 = local_70;
        puVar7 = local_58;
        if (lVar1 != 0) {
          FUN_00d50b20();
          puVar6 = local_70;
          puVar7 = local_58;
        }
        goto joined_r0x01b76d6b;
      }
    }
    local_70 = puVar6;
    uVar17 = 0;
LAB_01b77588:
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01b775cd:
  return uVar17 & 0xffffff01;
}

