// Function: FUN_0022da80
// Address: 0022da80
// Size: 2979 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0022e2e0) */
/* WARNING: Removing unreachable block (ram,0x0022e2ec) */
/* WARNING: Removing unreachable block (ram,0x0022e058) */
/* WARNING: Removing unreachable block (ram,0x0022e064) */
/* WARNING: Removing unreachable block (ram,0x0022e363) */
/* WARNING: Removing unreachable block (ram,0x0022e36f) */
/* WARNING: Removing unreachable block (ram,0x0022e41a) */
/* WARNING: Removing unreachable block (ram,0x0022e426) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0022da80(void)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  byte bVar11;
  undefined8 unaff_RBX;
  undefined7 uVar13;
  ulonglong uVar12;
  int iVar14;
  longlong unaff_RDI;
  undefined8 uVar15;
  longlong *local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  char local_90;
  char local_81;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  
  cVar3 = DAT_02805cd9;
  uVar13 = (undefined7)((ulonglong)unaff_RBX >> 8);
  local_81 = cVar3;
  if (DAT_02805cd9 != '\0') goto LAB_0022e5f8;
  DAT_02805cd9 = 1;
  if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
    FUN_004405f0();
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0022daff;
      }
    }
    else if (local_60 != (longlong *)0x0) {
LAB_0022daff:
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      (**(code **)(&UNK_00001668 + *local_70))();
      plVar10 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = plVar10;
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      local_a8 = puVar5;
      FUN_004b5af0();
      plVar10 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0022dc0b;
        }
LAB_0022e1af:
        bVar1 = false;
        local_80 = (longlong *)0x0;
        local_a0 = 0;
        local_78 = (longlong *)0x0;
      }
      else {
        if (local_60 == (longlong *)0x0) goto LAB_0022e1af;
LAB_0022dc0b:
        local_58 = '\0';
        local_60 = (longlong *)0x0;
        local_50 = plVar10;
        local_48 = 0xffffffff;
        local_40 = 0;
        local_48._4_4_ = 0;
        bVar1 = false;
        local_80 = (longlong *)0x0;
        local_a0 = 0;
        local_78 = (longlong *)0x0;
        while( true ) {
          if (local_48._4_4_ != 0) {
            if (local_48._4_4_ < 1) {
              iVar14 = -local_48._4_4_;
            }
            else {
              iVar14 = (int)local_48 - local_48._4_4_;
              local_48 = CONCAT44(local_48._4_4_,iVar14);
              FUN_00d23690();
              local_40 = local_40 + local_48._4_4_;
              iVar14 = 0;
            }
            local_48 = CONCAT44(iVar14,(int)local_48);
          }
          lVar6 = (longlong)(int)local_48;
          iVar14 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar14);
          if (*(int *)((longlong)local_50 + 0xc) <= iVar14) break;
          local_60 = *(longlong **)(local_50[2] + 8 + lVar6 * 8);
          cVar3 = FUN_003b7710();
          if (cVar3 == '\0') {
LAB_0022dd30:
            cVar3 = FUN_003b7780();
            if (cVar3 != '\0') {
              FUN_003b79c0();
              plVar10 = local_70;
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 != (longlong *)0x0) {
                FUN_003b79c0();
                plVar10 = local_98;
                if (local_90 == '\0') {
                  if (local_98 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_90 = '\0';
                }
                local_70 = plVar10;
                local_68 = '\0';
                cVar3 = FUN_00d24090();
                if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar10 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar3 == '\0') {
                  FUN_003b79c0();
                  plVar10 = local_98;
                  if (local_90 == '\0') {
                    if (local_98 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_90 = '\0';
                  }
                  local_70 = plVar10;
                  local_68 = '\0';
                  FUN_00d21140();
                  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar10 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
          }
          else {
            FUN_003b79c0();
            plVar10 = local_70;
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar8 = local_60;
            if (plVar10 == (longlong *)0x0) goto LAB_0022dd30;
            if (local_80 == local_60) {
              if ((!bVar1) && (local_80 != (longlong *)0x0)) {
                plVar10 = local_80;
                if (local_58 != '\0') goto LAB_0022ddb8;
                bVar1 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar1) && (local_80 != (longlong *)0x0)) {
                  local_80 = plVar8;
                  FUN_00d50b20();
                  bVar1 = true;
                  goto LAB_0022df20;
                }
              }
              else {
                plVar10 = plVar8;
                if ((bVar1) && (local_80 != (longlong *)0x0)) {
                  local_80 = local_60;
                  FUN_00d50b20();
                }
LAB_0022ddb8:
                local_58 = '\0';
                plVar8 = plVar10;
              }
              local_80 = plVar8;
              bVar1 = true;
            }
LAB_0022df20:
            FUN_003b79c0();
            plVar10 = local_78;
            uVar13 = (undefined7)((ulonglong)plVar8 >> 8);
            if (local_70 == local_78) {
              if (((char)local_a0 == '\0') && (local_70 != (longlong *)0x0)) {
                uVar12 = CONCAT71(uVar13,1);
                if (local_68 != '\0') goto LAB_0022dfd0;
                uVar12 = CONCAT71(uVar13,1);
                FUN_00d50b00();
              }
              else {
                uVar12 = local_a0 & 0xffffffff;
              }
LAB_0022dfbc:
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              plVar10 = local_70;
              if (local_68 == '\0') {
                if (local_70 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                uVar12 = CONCAT71(uVar13,1);
                if (((char)local_a0 != '\0') && (local_78 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_0022dfbc;
              }
              uVar12 = CONCAT71(uVar13,1);
              if (((char)local_a0 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
LAB_0022dfd0:
            local_a0 = uVar12 & 0xffffffff;
            local_78 = plVar10;
          }
        }
        plVar10 = local_50;
        FUN_00274d30();
        pVar9 = (pthread_key_t)plVar10;
        FUN_00d50b20();
        if ((local_78 != (longlong *)0x0) && (local_b0 != local_78)) {
          (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
          (**(code **)(&DAT_00001680 + *local_60))();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01f27fe0();
          cVar3 = (**(code **)(*local_98 + 0x450))();
          plVar10 = DAT_026e1810;
          if (cVar3 == '\0') {
            bVar11 = 0;
          }
          else {
            if (DAT_026e1810 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00e7d6f0();
            pVar9 = 0xaaaaaaab;
            uVar15 = FUN_0071a120();
            plVar8 = local_60;
            if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
                (uVar15 = FUN_00d50b00(), local_58 != '\0')) && (local_60 != (longlong *)0x0)) {
              uVar15 = FUN_00d50b20();
            }
            local_70 = plVar10;
            local_68 = '\0';
            FUN_000175c0(uVar15,&local_70);
            plVar2 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar2 != (longlong *)0x0) {
              local_58 = '\0';
              local_60 = plVar2;
              uVar4 = FUN_00c70bc0();
              plVar8 = (longlong *)(ulonglong)uVar4;
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
            bVar11 = plVar2 != (longlong *)0x0 & (byte)plVar8;
            if (plVar10 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar11 != 0) {
            FUN_006f3f00();
            (**(code **)(*local_98 + 0x628))();
            pvVar7 = _pthread_getspecific(pVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_004a5340();
            plVar10 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 != (longlong *)0x0) {
              (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
              FUN_01953260();
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          plVar8 = (longlong *)FUN_00e8fc40();
          FUN_00022d50();
          uVar15 = (**(code **)(*plVar8 + 0x18))();
          plVar10 = DAT_026f6de8;
          if (DAT_026f6de8 != (longlong *)0x0) {
            uVar15 = FUN_00d50b00();
          }
          local_60 = plVar10;
          local_58 = '\0';
          FUN_00ca0840(uVar15,&local_60);
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d403d0();
          lVar6 = DAT_026f6d80;
          if (DAT_026f6d80 != 0) {
            FUN_00d50b00();
          }
          local_b8 = 0;
          FUN_00d50b00();
          local_b8 = '\x01';
          local_d8 = '\0';
          local_e0 = plVar8;
          local_c0 = unaff_RDI;
          FUN_00d40470(&local_e0,&local_c0,3,3);
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      local_d0 = local_a8;
      local_c8 = '\0';
      (**(code **)(&UNK_00001688 + *local_60))();
      if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar5 = local_a8;
      plVar10 = local_b0;
      if (((char)local_a0 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      DAT_02805cd9 = '\0';
      FUN_00d50b20();
      uVar13 = (undefined7)((ulonglong)puVar5 >> 8);
      goto LAB_0022e5f8;
    }
  }
  DAT_02805cd9 = '\0';
LAB_0022e5f8:
  return (CONCAT71(uVar13,local_81) ^ 1) & 0xffffffff;
}


