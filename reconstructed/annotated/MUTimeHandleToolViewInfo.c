// ===== MUTimeHandleToolViewInfo — Annotated small functions =====
// 4 readable functions

// ==================================================
// @01a77f70 (1802 bytes) — math_loop

{
  longlong *plVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong *puVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong local_118;
  ulonglong local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_90;
  char local_88;
  ulonglong local_80;
  undefined8 local_78;
  int local_70;
  uint local_64;
  longlong *local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  FUN_00c9fe20();
  puVar12 = &local_90;
  if ((char)local_110 != '\0') {
    puVar12 = &local_110;
  }
  local_90 = CONCAT71(local_90._1_7_,(char)local_110);
  *(undefined1 *)puVar12 = 0;
  if (((char)local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_90 == '\0') {
    if (local_118 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = local_90 & 0xffffffffffffff00;
  }
  FUN_00243390();
  plVar14 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if (local_118 != 0) {
    FUN_00d50b20();
  }
  if (plVar14 != (longlong *)0x0) {
    local_110._0_1_ = 0;
    local_108 = plVar14;
    local_f8 = 0;
    local_100 = 0;
    if (0 < *(int *)((longlong)plVar14 + 0xc)) {
      uVar13 = 0;
      local_38 = plVar14;
      do {
        plVar1 = *(longlong **)(plVar14[2] + (ulonglong)uVar13 * 8);
        uVar9 = uVar13;
        FUN_01a78a20();
        plVar4 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        pvVar6 = _pthread_getspecific(uVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126e7e0();
        plVar15 = local_60;
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar15 == (longlong *)0x0) {
          bVar3 = false;
          plVar15 = (longlong *)0x0;
        }
        else {
          pvVar6 = _pthread_getspecific(uVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126e7e0();
          pvVar6 = _pthread_getspecific(uVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013f2b00();
          plVar15 = local_60;
          if (local_60 == (longlong *)0x0) {
            plVar15 = (longlong *)0x0;
            bVar3 = false;
          }
          else if (local_58 == '\0') {
            FUN_00d50b00();
            bVar3 = true;
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
            bVar3 = true;
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar7 = plVar4[2];
        if (lVar7 != 0) {
          FUN_00d50b00();
          local_58 = '\0';
          local_60 = (longlong *)0x0;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_64 = 0;
          local_50 = lVar7;
          while( true ) {
            lVar7 = (longlong)(int)local_48;
            iVar11 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar11);
            if (*(int *)(local_50 + 0xc) <= iVar11) break;
            lVar10 = *(longlong *)(local_50 + 0x10);
            local_60 = *(longlong **)(lVar10 + 8 + lVar7 * 8);
            uVar8 = FUN_01e40eb0();
            uVar2 = local_90;
            if ((local_88 != '\0') && (local_90 != 0)) {
              uVar8 = FUN_00d50b20();
            }
            if (uVar2 == 0) {
              local_64 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              break;
            }
            FUN_01a87f10();
            uVar2 = local_90;
            if (local_88 == '\0') {
              if (local_90 != 0) {
                FUN_00d50b00();
                if ((local_88 != '\0') && (local_90 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a78430;
              }
            }
            else if (local_90 != 0) {
LAB_01a78430:
              local_88 = '\0';
              local_90 = 0;
              local_80 = uVar2;
              local_78 = 0xffffffff;
              local_70 = 0;
              if (plVar15 == (longlong *)0x0) {
                local_78 = 0;
                if (0 < *(int *)(uVar2 + 0xc)) {
                  local_90 = **(ulonglong **)(uVar2 + 0x10);
LAB_01a7859e:
                  local_64 = (uint)CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
                  (**(code **)(*local_60 + 0x620))();
                }
              }
              else {
                while( true ) {
                  lVar7 = (longlong)(int)local_78;
                  iVar11 = (int)local_78 + 1;
                  local_78 = CONCAT44(local_78._4_4_,iVar11);
                  if (*(int *)(local_80 + 0xc) <= iVar11) break;
                  lVar10 = *(longlong *)(local_80 + 0x10);
                  uVar2 = *(ulonglong *)(lVar10 + 8 + lVar7 * 8);
                  local_90 = uVar2;
                  cVar5 = FUN_00d23d70();
                  if ((cVar5 == '\0') || (FUN_01a83c00(), uVar2 == 0)) goto LAB_01a7859e;
                  if (local_78._4_4_ != 0) {
                    if (local_78._4_4_ < 1) {
                      iVar11 = -local_78._4_4_;
                    }
                    else {
                      local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                      FUN_00d23690();
                      local_70 = local_70 + local_78._4_4_;
                      iVar11 = 0;
                    }
                    local_78 = CONCAT44(iVar11,(int)local_78);
                  }
                }
              }
              FUN_01a81420();
              FUN_00d50b20();
            }
            if ((local_64 & 1) != 0) break;
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar11 = -local_48._4_4_;
              }
              else {
                local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar11 = 0;
              }
              local_48 = CONCAT44(iVar11,(int)local_48);
            }
          }
          FUN_01a80d20();
          FUN_00d50b20();
          plVar14 = local_38;
          if ((local_64 & 1) != 0) {
            local_58 = '\0';
            local_60 = plVar1;
            FUN_00ca13a0();
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if ((bVar3) && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
        local_100 = CONCAT44(local_100._4_4_,uVar13);
      } while ((int)uVar13 < *(int *)((longlong)plVar14 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a779a0 (652 bytes) — math_loop

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong *arg1;
  longlong *this;
  longlong lVar6;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f5210();
  lVar1 = *param_2;
  cVar4 = FUN_00d23d70();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (lVar1 != 0) {
      FUN_00d50b00();
      lVar6 = 0;
      while ((int)lVar6 < *(int *)(lVar1 + 0xc)) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        lVar3 = *arg1;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        if (local_68 == lVar3) {
          *(undefined1 *)(this + 1) = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          *this = lVar2;
          *(undefined1 *)(this + 1) = 1;
          FUN_001159b0();
          FUN_00d50b20();
          return this;
        }
      }
      FUN_001159b0();
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  return this;
}




// ==================================================
// @01a77500 (568 bytes) — calculation

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b3008 == 0) || (DAT_028b3011 == '\0')) {
    FUN_00e8cb50();
    lVar5 = DAT_027e2888;
    if (DAT_028b3008 == 0) {
      if (DAT_027e2888 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_0241f3f0);
      lVar4 = DAT_028b3008;
      if (DAT_028b3008 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar4 = local_48;
        }
        bVar2 = DAT_028b3008 != 0;
        DAT_028b3008 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_48;
        }
      }
      if ((lVar4 != 0) && (DAT_028b3010 == '\0')) {
        DAT_028b3010 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_48;
      }
      if ((local_40 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      DAT_028b3011 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b3011 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b3008 == 0) {
      lVar5 = 0;
      goto LAB_01a776b9;
    }
  }
  lVar5 = DAT_028b3008;
  FUN_00d50b00();
LAB_01a776b9:
  (**(code **)(*this + 0x390))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = (longlong *)this[9];
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    this[9] = (longlong)plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01a771f0 (523 bytes) — calculation

{
  int iVar1;
  undefined4 uVar2;
  longlong local_48;
  longlong local_40;
  undefined8 *local_28;
  
  if ((DAT_027e2958 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027e28a8 = FUN_00d4fe50();
    _DAT_027e2890 = "MUTimeHandleToolViewInfo";
    _DAT_027e2898 = 0x20;
    _DAT_027e28a0 = FUN_01a80ad0;
    _DAT_027e28b0 = 0;
    uRam00000000027e28b8 = 0;
    _DAT_027e28c0 = 0;
    _DAT_027e2938 = 0;
    uRam00000000027e2940 = 0;
    _DAT_027e2948 = 0;
    DAT_027e294a = 1;
    _DAT_027e28c8 = 0;
    uRam00000000027e28d0 = 0;
    _DAT_027e28d8 = 0;
    uRam00000000027e28e0 = 0;
    _DAT_027e28e8 = 0;
    uRam00000000027e28f0 = 0;
    _DAT_027e28f8 = 0;
    uRam00000000027e2900 = 0;
    _DAT_027e2908 = 0;
    uRam00000000027e2910 = 0;
    _DAT_027e2918 = 0;
    uRam00000000027e2920 = 0;
    _DAT_027e2928 = 0;
    uRam00000000027e2930 = 0;
    DAT_027e2953 = 0;
    _DAT_027e294b = 0;
    ___cxa_guard_release();
  }
  if (DAT_027e294b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_28 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_28 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_00d4ff80();
    FUN_01a80dc0();
    FUN_01a810f0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_28 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}



