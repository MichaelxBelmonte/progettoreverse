// Function: FUN_0051a2b0
// Address: 0051a2b0
// Size: 2662 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x0051ab5b) */
/* WARNING: Removing unreachable block (ram,0x0051ab67) */
/* WARNING: Removing unreachable block (ram,0x0051a4de) */
/* WARNING: Removing unreachable block (ram,0x0051a482) */
/* WARNING: Removing unreachable block (ram,0x0051a476) */
/* WARNING: Removing unreachable block (ram,0x0051a4d2) */
/* WARNING: Removing unreachable block (ram,0x0051a828) */
/* WARNING: Removing unreachable block (ram,0x0051a834) */
/* WARNING: Removing unreachable block (ram,0x0051abb3) */
/* WARNING: Removing unreachable block (ram,0x0051abbf) */

void FUN_0051a2b0(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  longlong *plVar9;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_b0;
  char local_a8;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x110) == *unaff_RSI) {
    return;
  }
  local_44 = (undefined4)CONCAT71((int7)((ulonglong)*(longlong *)(unaff_RDI + 0x110) >> 8),1);
  if (*(longlong **)(unaff_RDI + 0x108) == (longlong *)0x0) {
LAB_0051a39e:
    local_50 = (longlong *)0x0;
    local_60 = 0;
    if (*(longlong *)(unaff_RDI + 0x110) == 0) goto LAB_0051a386;
LAB_0051a3b6:
    local_58 = (longlong *)CONCAT44(local_58._4_4_,0xffffffff);
    if ((*(longlong *)(unaff_RDI + 0x308) == 0) && (*(longlong *)(unaff_RDI + 0x108) != 0)) {
      FUN_00757c60();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_0051b4f0();
      if (local_a8 == '\0') {
        if (local_b0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_40 = local_b0;
      local_38 = '\0';
      uVar3 = FUN_00d23d20();
      local_58 = (longlong *)CONCAT44(local_58._4_4_,uVar3);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_b0 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      lVar7 = *(longlong *)(unaff_RDI + 0x110);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0015a600();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x300) != 0) {
      FUN_00d50b00();
      lVar7 = *(longlong *)(unaff_RDI + 0x300);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_0063f230();
      plVar6 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar6 != (longlong *)0x0) {
        lVar7 = *(longlong *)(unaff_RDI + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0062a580();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(longlong *)(unaff_RDI + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0064e920();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if ((char)local_44 == '\0') {
      lVar7 = *(longlong *)(unaff_RDI + 0x110);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_50 + 0x3a8))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    lVar8 = *(longlong *)(unaff_RDI + 0x110);
    lVar7 = *unaff_RSI;
    if (lVar8 == lVar7) goto LAB_0051a5c2;
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x108) + 0x498))();
    local_50 = local_40;
    param_1 = 0;
    if (local_40 == (longlong *)0x0) goto LAB_0051a39e;
    plVar6 = local_40;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    param_1 = (pthread_key_t)plVar6;
    FUN_00cafd20();
    FUN_00cb1f10();
    uVar4 = FUN_00db3260();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
    local_60 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    local_44 = 0;
    if (*(longlong *)(unaff_RDI + 0x110) != 0) goto LAB_0051a3b6;
LAB_0051a386:
    lVar8 = 0;
    local_58 = (longlong *)CONCAT44(local_58._4_4_,0xffffffff);
    lVar7 = *unaff_RSI;
    if (lVar7 == 0) goto LAB_0051a5c2;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  *(longlong *)(unaff_RDI + 0x110) = lVar7;
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_0051a5c2:
  if (*unaff_RSI != 0) {
    if (*(longlong *)(unaff_RDI + 0x308) == 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = *(longlong *)(unaff_RDI + 0x108);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_00788660();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      cVar2 = FUN_00157780(&local_80,(ulonglong)local_58 & 0xffffffff);
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        FUN_00793130();
      }
      if (*(longlong *)(unaff_RDI + 0x308) == 0) {
        *(undefined4 *)(unaff_RDI + 0x2c0) = 0;
      }
      else {
        *(undefined1 *)(unaff_RDI + 0x370) = 1;
      }
    }
    FUN_00518a80();
    if ((char)local_44 == '\0') {
      (**(code **)(*local_50 + 0x3a0))();
    }
    FUN_0051b640();
    plVar6 = local_40;
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_0051ba20();
    plVar9 = local_40;
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_58 = plVar9;
    if (*(longlong *)(unaff_RDI + 0x308) == 0) {
      FUN_006e32b0();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 == (longlong *)0x0) {
        FUN_00752180();
        plVar1 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        cVar2 = FUN_00108e10();
        if (cVar2 == '\0') {
          FUN_0010bc60();
          FUN_0010a4f0();
          FUN_0010bc70();
        }
        FUN_00108380();
        local_70 = local_40;
        local_68 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_68 = '\x01';
        FUN_006e32e0();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (*(longlong *)(unaff_RDI + 0x300) != 0) {
      FUN_00d50b00();
      lVar7 = *(longlong *)(unaff_RDI + 0x300);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_0063f230();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar9 = local_58;
      if (plVar1 != (longlong *)0x0) {
        lVar7 = *(longlong *)(unaff_RDI + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0062a580();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(longlong *)(unaff_RDI + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0064e920();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(longlong *)(unaff_RDI + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_00631670();
        plVar1 = local_40;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        plVar9 = local_58;
        if (plVar1 != (longlong *)0x0) {
          lVar7 = *(longlong *)(unaff_RDI + 0x300);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          FUN_00631670();
          FUN_006f63e0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_44 == '\0') {
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x308) == 0) {
      FUN_00cb1f10();
      FUN_00db3760();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_50 + 0x3c8))();
    if ((char)local_44 == '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


