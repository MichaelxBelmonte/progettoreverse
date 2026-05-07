// Function: FUN_01662bd0
// Address: 01662bd0
// Size: 5221 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"


/* WARNING: Removing unreachable block (ram,0x01663c56) */
/* WARNING: Removing unreachable block (ram,0x01663c66) */
/* WARNING: Removing unreachable block (ram,0x01663217) */
/* WARNING: Removing unreachable block (ram,0x01663223) */
/* WARNING: Removing unreachable block (ram,0x016634b6) */
/* WARNING: Removing unreachable block (ram,0x016634c2) */
/* WARNING: Removing unreachable block (ram,0x01662fd6) */
/* WARNING: Removing unreachable block (ram,0x01662fe6) */
/* WARNING: Removing unreachable block (ram,0x016635d6) */
/* WARNING: Removing unreachable block (ram,0x016635e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01662bd0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  void *pvVar6;
  int iVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong local_1a8;
  char local_1a0;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_00d3ed20();
  if (local_58 == (longlong *)0x0) {
    cVar4 = '\0';
  }
  else {
    FUN_00d3ecc0();
    lVar9 = DAT_027c8268;
    if (DAT_027c8268 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00d90870();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
LAB_01662d8b:
    cVar4 = '\0';
  }
  else {
    FUN_00d3ed20();
    lVar9 = DAT_027c8270;
    if (DAT_027c8270 != 0) {
      FUN_00d50b00();
    }
    pplVar8 = &local_58;
    FUN_000175c0();
    plVar1 = local_58;
    FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_01662d0a:
      pplVar8 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01662d0a;
    }
    plVar1 = *pplVar8;
    if (*(char *)(pplVar8 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar8 + 1) = 0;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (longlong *)0x0) goto LAB_01662d8b;
    cVar4 = FUN_00d45ad0();
    FUN_00d50b20();
  }
  FUN_00d3ecc0();
  plVar1 = local_58;
  lVar9 = DAT_027ebe30;
  if (DAT_027ebe30 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_00d3ecf0();
    plVar1 = local_58;
    if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
        ) && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    plVar2 = local_58;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == plVar2) {
      FUN_01664ba0();
      plVar2 = *(longlong **)(unaff_RDI + 0xa8);
      if (plVar2 != (longlong *)0x0) {
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_38 = 0;
        local_40 = 0;
        local_48 = plVar2;
        if (0 < *(int *)((longlong)plVar2 + 0xc)) {
          lVar9 = 0;
          do {
            local_58 = *(longlong **)(plVar2[2] + lVar9 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01651d80();
            lVar9 = lVar9 + 1;
            local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
          } while ((int)lVar9 < *(int *)((longlong)plVar2 + 0xc));
        }
        FUN_0049cc10();
      }
      if (cVar4 == '\0') {
        cVar4 = FUN_01733c10();
        if (cVar4 == '\0') {
          FUN_0184a0f0();
        }
        *(undefined1 *)(unaff_RDI + 0x107) = 0;
        if (*(longlong *)(unaff_RDI + 0x108) != 0) {
          *(undefined8 *)(unaff_RDI + 0x108) = 0;
          FUN_00d50b20();
        }
        if (*(longlong *)(unaff_RDI + 0x110) != 0) {
          *(undefined8 *)(unaff_RDI + 0x110) = 0;
          FUN_00d50b20();
        }
      }
      else {
        *(char *)(unaff_RDI + 0x107) = cVar4;
      }
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01663e2d;
  }
  FUN_00d3ecc0();
  plVar1 = local_58;
  lVar9 = DAT_027c8278;
  if (DAT_027c8278 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_00d3ecf0();
    plVar1 = local_58;
    if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
        ) && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    plVar2 = local_58;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == plVar2) {
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_01512830();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        FUN_01665000();
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7210();
        plVar2 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_012879b0();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
      }
      if (*(longlong **)(unaff_RDI + 0xa8) != (longlong *)0x0) {
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        local_48 = *(longlong **)(unaff_RDI + 0xa8);
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar7 = -local_40._4_4_;
            }
            else {
              iVar7 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar7);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar7 = 0;
            }
            local_40 = CONCAT44(iVar7,(int)local_40);
          }
          lVar9 = (longlong)(int)local_40;
          iVar7 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar7) break;
          local_58 = *(longlong **)(local_48[2] + 8 + lVar9 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)local_48[2]);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01652170();
        }
        param_1 = local_48;
        FUN_0049cc10();
      }
      FUN_0167ab60();
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537ab0();
      plVar2 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar2;
        local_38 = 0;
        local_40 = 0;
        if (0 < *(int *)((longlong)plVar2 + 0xc)) {
          lVar9 = 0;
          do {
            local_58 = *(longlong **)(plVar2[2] + lVar9 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c0 = 0;
            FUN_00d50b00();
            local_c0 = '\x01';
            param_1 = (longlong *)0x0;
            local_c8 = unaff_RDI;
            FUN_01710690(0,1);
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            lVar9 = lVar9 + 1;
            local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
          } while ((int)lVar9 < *(int *)((longlong)plVar2 + 0xc));
        }
        FUN_0166fd40();
        FUN_00d50b20();
      }
      if ((cVar4 == '\0') && (cVar4 = FUN_01733c10(), cVar4 == '\0')) {
        FUN_0184a130();
      }
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01663e2d;
  }
  FUN_00d3ecc0();
  plVar1 = local_58;
  lVar9 = DAT_027c8280;
  if (DAT_027c8280 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_00d3ecf0();
    plVar1 = local_58;
    if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
        ) && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d900();
    plVar2 = local_58;
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == plVar2) {
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01512890();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (*(longlong **)(unaff_RDI + 0xa8) != (longlong *)0x0) {
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        local_48 = *(longlong **)(unaff_RDI + 0xa8);
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar7 = -local_40._4_4_;
            }
            else {
              iVar7 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar7);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar7 = 0;
            }
            local_40 = CONCAT44(iVar7,(int)local_40);
          }
          lVar9 = (longlong)(int)local_40;
          iVar7 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar7);
          if (*(int *)((longlong)local_48 + 0xc) <= iVar7) break;
          local_58 = *(longlong **)(local_48[2] + 8 + lVar9 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)local_48[2]);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016526e0();
        }
        param_1 = local_48;
        FUN_0049cc10();
      }
      FUN_0167ab60();
      pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537ab0();
      plVar2 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        local_50 = '\0';
        local_58 = (longlong *)0x0;
        local_48 = plVar2;
        local_38 = 0;
        local_40 = 0;
        if (0 < *(int *)((longlong)plVar2 + 0xc)) {
          lVar9 = 0;
          do {
            local_58 = *(longlong **)(plVar2[2] + lVar9 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_b0 = 0;
            FUN_00d50b00();
            local_b0 = '\x01';
            param_1 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
            local_b8 = unaff_RDI;
            FUN_01710690(1,0);
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            lVar9 = lVar9 + 1;
            local_40 = CONCAT44(local_40._4_4_,(int)lVar9);
          } while ((int)lVar9 < *(int *)((longlong)plVar2 + 0xc));
        }
        FUN_0166fd40();
        FUN_00d50b20();
      }
      if ((cVar4 == '\0') && (cVar4 = FUN_01733c10(), cVar4 == '\0')) {
        FUN_0184a170();
      }
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01663e2d;
  }
  pplVar8 = &local_58;
  FUN_00d3ecf0();
  plVar1 = local_58;
  if ((DAT_026e0c38 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_026e0b88 = FUN_000fddb0();
    _DAT_026e0b70 = "MUElementAnalyzer";
    _DAT_026e0b78 = 0x180;
    _DAT_026e0b80 = FUN_000fdd80;
    _DAT_026e0b90 = 0;
    uRam00000000026e0b98 = 0;
    _DAT_026e0ba0 = 0;
    _DAT_026e0c18 = 0;
    uRam00000000026e0c20 = 0;
    _DAT_026e0c28 = 0;
    DAT_026e0c2a = 1;
    _DAT_026e0ba8 = 0;
    uRam00000000026e0bb0 = 0;
    _DAT_026e0bb8 = 0;
    uRam00000000026e0bc0 = 0;
    _DAT_026e0bc8 = 0;
    uRam00000000026e0bd0 = 0;
    _DAT_026e0bd8 = 0;
    uRam00000000026e0be0 = 0;
    _DAT_026e0be8 = 0;
    uRam00000000026e0bf0 = 0;
    _DAT_026e0bf8 = 0;
    uRam00000000026e0c00 = 0;
    _DAT_026e0c08 = 0;
    uRam00000000026e0c10 = 0;
    DAT_026e0c33 = 0;
    _DAT_026e0c2b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01663636:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01663636;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_01663e2d;
  FUN_013fb320();
  plVar3 = local_58;
  plVar2 = *(longlong **)(unaff_RDI + 0xf0);
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == plVar3) {
    FUN_00d3ecc0();
    plVar2 = local_58;
    local_d8 = DAT_027ebc70;
    if (DAT_027ebc70 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    cVar4 = (**(code **)(*plVar2 + 0x50))();
    if (cVar4 == '\0') {
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar4 = FUN_00e34240();
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        FUN_0167ab30();
        cVar4 = FUN_01660660();
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          FUN_01665120();
        }
        else {
          plVar2 = *(longlong **)(unaff_RDI + 0x128);
          if (plVar1 == plVar2) {
            if (plVar2 == (longlong *)0x0) goto LAB_01663ed7;
          }
          else {
            FUN_00d50b00();
            *(longlong **)(unaff_RDI + 0x128) = plVar1;
            if (plVar2 == (longlong *)0x0) {
LAB_01663ed7:
              FUN_01f27fe0();
              local_a0 = 0;
              (**(code **)(*(longlong *)(unaff_RDI + 0x98) + 0x10))();
              uVar10 = FUN_00d50b00();
              local_a0 = '\x01';
              local_f8 = 0;
              local_f0 = '\0';
              local_a8 = (longlong *)(unaff_RDI + 0x98);
              FUN_01f47190(uVar10,&local_f8);
              if ((local_f0 != '\0') && (local_f8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                (**(code **)(*local_a8 + 0x10))();
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
  FUN_00d50b20();
LAB_01663e2d:
  local_e8 = *unaff_RSI;
  local_e0 = '\0';
  FUN_00d530a0();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  return;
}


