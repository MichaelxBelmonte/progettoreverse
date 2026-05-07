// Function: FUN_01a85710
// Address: 01a85710
// Size: 3211 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a861c8) */
/* WARNING: Removing unreachable block (ram,0x01a861d4) */
/* WARNING: Removing unreachable block (ram,0x01a85a49) */
/* WARNING: Removing unreachable block (ram,0x01a85a56) */
/* WARNING: Removing unreachable block (ram,0x01a857f2) */
/* WARNING: Removing unreachable block (ram,0x01a857fb) */
/* WARNING: Removing unreachable block (ram,0x01a857bb) */
/* WARNING: Removing unreachable block (ram,0x01a857c4) */
/* WARNING: Removing unreachable block (ram,0x01a8586a) */
/* WARNING: Removing unreachable block (ram,0x01a85873) */
/* WARNING: Removing unreachable block (ram,0x01a85a69) */

void FUN_01a85710(ulonglong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 local_138 [16];
  longlong local_128;
  char local_120;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  undefined1 local_e8 [12];
  undefined4 uStack_dc;
  longlong local_d8;
  char local_d0;
  double local_c0;
  double local_b8;
  char local_ac;
  longlong local_98;
  char local_90;
  longlong local_80;
  char local_78;
  longlong *local_68;
  char local_60;
  
  uVar6 = param_1;
  (**(code **)(*unaff_RDI + 0x4d8))();
  _local_e8 = in_XMM1;
  pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126e7e0();
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01989f80();
  if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (local_68 == (longlong *)0x0) {
LAB_01a8637e:
    if (local_68 == (longlong *)0x0) goto LAB_01a8638b;
  }
  else {
    pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_013f2b00();
    if ((local_60 == '\0') && (local_68 != (longlong *)0x0)) {
      uVar12 = FUN_00d50b00();
    }
    local_d0 = 0;
    lVar7 = unaff_RDI[0x2e];
    if (lVar7 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_d8 = lVar7;
    (**(code **)(*local_68 + 0xab0))(uVar12,&local_d8);
    if (local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != (longlong *)0x0) {
      if ((char)unaff_RDI[0x33] == '\0') {
LAB_01a85b99:
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = (double)FUN_01259520();
      }
      else {
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_68 == (longlong *)0x0) {
          bVar9 = false;
        }
        else {
          pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          bVar9 = local_98 != 0;
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar9) goto LAB_01a85b99;
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_01259520();
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = (double)FUN_012f9490();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (dVar13 <= local_c0) {
          local_c0 = dVar13;
        }
      }
      if ((char)unaff_RDI[0x33] == '\0') {
LAB_01a85e36:
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_b8 = (double)FUN_0125a280();
      }
      else {
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (local_68 == (longlong *)0x0) {
          bVar9 = false;
        }
        else {
          pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          bVar9 = local_98 != 0;
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar9) goto LAB_01a85e36;
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_0125a280();
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_b8 = (double)FUN_012f7cb0();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_b8 <= dVar13) {
          local_b8 = dVar13;
        }
      }
      iVar1 = *(int *)((longlong)local_68 + 0xc);
      pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_01264170();
      if (0 < *(int *)((longlong)local_68 + 0xc)) {
        auVar16._4_4_ = local_e8._4_4_;
        auVar16._0_4_ = local_e8._4_4_;
        auVar16._8_4_ = uStack_dc;
        auVar16._12_4_ = uStack_dc;
        auVar15._4_12_ = auVar16._4_12_;
        auVar15._0_4_ = (float)local_e8._4_4_ * DAT_0239011c;
        auVar16 = roundss(auVar15,auVar15,9);
        local_138 = insertps(auVar16,auVar16,0x1d);
        lVar7 = 0;
        iVar8 = 0;
        do {
          lVar2 = *(longlong *)(local_68[2] + lVar7 * 8);
          if ((iVar8 == 0) || (iVar8 == iVar1 + -1)) {
LAB_01a85f90:
            iVar8 = iVar8 + 1;
          }
          else {
            pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013faed0();
            dVar14 = (double)FUN_0128e5a0();
            if (dVar14 <= dVar13) {
              local_e8._0_8_ = dVar14;
              pvVar4 = _pthread_getspecific((pthread_key_t)uVar6);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar14 = (double)FUN_0125a280();
              pVar5 = (pthread_key_t)uVar6;
              auVar17._0_8_ = (double)local_e8._0_8_ + dVar14;
              auVar17._8_8_ = 0;
              if ((auVar17._0_8_ <= local_c0) && (local_b8 <= auVar17._0_8_)) {
                uVar10 = (**(code **)(*local_68 + 0x938))(auVar17._0_8_);
                local_e8._0_4_ = uVar10;
                pvVar4 = _pthread_getspecific(pVar5);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a280();
                uVar12 = (**(code **)(*local_68 + 0x938))();
                local_100 = '\0';
                local_108 = lVar2;
                FUN_01a82870(uVar12,&local_108);
                if (local_78 == '\0') {
                  if (local_80 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_78 = '\0';
                }
                cVar3 = FUN_00d23d70();
                if (local_80 != 0) {
                  FUN_00d50b20();
                }
                if ((local_100 != '\0') && (local_108 != 0)) {
                  FUN_00d50b20();
                }
                fVar11 = (float)local_e8._0_4_ - (float)uVar12;
                local_e8._0_4_ = fVar11;
                auVar16 = roundss(auVar17,ZEXT416((uint)fVar11),9);
                local_ac = (char)param_1;
                if (param_2 == '\0') {
                  if (local_ac == '\0') {
                    FUN_01a845d0();
                    FUN_01d488d0();
                    if ((local_120 != '\0') && (local_128 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    if (cVar3 == '\0') {
                      FUN_01a84310();
                    }
                    else {
                      FUN_01a843c0();
                    }
                    FUN_01d488d0();
                    if (cVar3 == '\0') {
                      if (local_f8 != 0 && local_f0 != '\0') {
                        FUN_00d50b20();
                      }
                    }
                    else if (local_f8 != 0 && local_f0 != '\0') {
                      FUN_00d50b20();
                    }
                  }
                  FUN_01d48b40();
                  (**(code **)(*local_68 + 0x990))();
                  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
                }
                local_138 = blendps(local_138,auVar16,1);
                uVar6 = param_1 & 0xff;
                FUN_01a84670(uVar6,param_2);
                goto LAB_01a85f90;
              }
            }
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < *(int *)((longlong)local_68 + 0xc));
      }
      FUN_01a81420();
      FUN_00d50b20();
      FUN_00d50b20();
      goto LAB_01a8637e;
    }
  }
  FUN_00d50b20();
LAB_01a8638b:
  if (local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


