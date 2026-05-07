// Function: FUN_01da6520
// Address: 01da6520
// Size: 3392 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x01da698a) */
/* WARNING: Removing unreachable block (ram,0x01da6996) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01da6520(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar8;
  longlong **pplVar9;
  longlong **pplVar10;
  undefined4 uVar11;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong **local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_80;
  char local_78;
  undefined8 local_70;
  longlong *local_60;
  char local_58;
  longlong local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  local_40 = (longlong *)*unaff_RSI;
  local_38 = '\0';
  FUN_00c8e830();
  plVar8 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    FUN_00c92170();
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    FUN_00cac150();
    if (local_60 == local_40) {
      cVar3 = '\x01';
    }
    else {
      (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
      if (local_140 == 0) {
        cVar3 = '\0';
      }
      else {
        FUN_00cac150();
        if (local_130 == 0) {
          cVar3 = '\0';
        }
        else {
          (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
          FUN_00cac150();
          lVar1 = local_c8;
          if (local_c0 == '\0') {
            if (local_c8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          cVar3 = (**(code **)(*local_120 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_128 != '\0') && (local_130 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_0002cb50();
      uVar11 = (**(code **)(*plVar6 + 0x18))();
      local_f8 = plVar8;
      local_f0 = '\0';
      pplVar9 = &local_60;
      uVar5 = FUN_00e549d0(uVar11,&local_f8);
      plVar8 = local_60;
      uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_026fdd40);
      if ((DAT_026fdd40 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
        _DAT_026cd0e8 = FUN_00d4fe50();
        DAT_026cd0d0 = "GNDictionary";
        _DAT_026cd0d8 = 0x28;
        _DAT_026cd0e0 = FUN_00022d20;
        _DAT_026cd0f0 = 0;
        uRam00000000026cd0f8 = 0;
        _DAT_026cd100 = 0;
        _DAT_026cd178 = 0;
        uRam00000000026cd180 = 0;
        _DAT_026cd188 = 0;
        DAT_026cd18a = 6;
        _DAT_026cd108 = 0;
        uRam00000000026cd110 = 0;
        _DAT_026cd118 = 0;
        uRam00000000026cd120 = 0;
        _DAT_026cd128 = 0;
        uRam00000000026cd130 = 0;
        _DAT_026cd138 = 0;
        uRam00000000026cd140 = 0;
        _DAT_026cd148 = 0;
        uRam00000000026cd150 = 0;
        _DAT_026cd158 = 0;
        uRam00000000026cd160 = 0;
        _DAT_026cd168 = 0;
        uRam00000000026cd170 = 0;
        DAT_026cd193 = 0;
        _DAT_026cd18b = 0;
        uVar5 = ___cxa_guard_release();
      }
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        uVar5 = FUN_00e85ea0();
        if ((char)uVar5 != '\0') {
          if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            _DAT_026d5e58 = FUN_00d4fe50();
            DAT_026d5e40 = "GNString";
            _DAT_026d5e48 = 0x40;
            _DAT_026d5e50 = FUN_0005d920;
            _DAT_026d5e60 = 0;
            uRam00000000026d5e68 = 0;
            _DAT_026d5e70 = 0;
            uRam00000000026d5e78 = 0;
            _DAT_026d5e80 = 0;
            uRam00000000026d5e88 = 0;
            _DAT_026d5e90 = 0;
            uRam00000000026d5e98 = 0;
            _DAT_026d5ea0 = 0;
            uRam00000000026d5ea8 = 0;
            _DAT_026d5eb0 = 0;
            uRam00000000026d5eb8 = 0;
            _DAT_026d5ec0 = 0;
            uRam00000000026d5ec8 = 0;
            _DAT_026d5ed0 = 0;
            uRam00000000026d5ed8 = 0;
            _DAT_026d5ee0 = 0;
            uRam00000000026d5ee8 = 0;
            _DAT_026d5ef0 = 0;
            uRam00000000026d5ef8 = 0;
            _DAT_026d5f00 = 0;
            ___cxa_guard_release();
          }
          uVar5 = FUN_00e8db60();
          if ((char)uVar5 != '\0') {
            if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
              _DAT_026d5e58 = FUN_00d4fe50();
              DAT_026d5e40 = "GNString";
              _DAT_026d5e48 = 0x40;
              _DAT_026d5e50 = FUN_0005d920;
              _DAT_026d5e60 = 0;
              uRam00000000026d5e68 = 0;
              _DAT_026d5e70 = 0;
              uRam00000000026d5e78 = 0;
              _DAT_026d5e80 = 0;
              uRam00000000026d5e88 = 0;
              _DAT_026d5e90 = 0;
              uRam00000000026d5e98 = 0;
              _DAT_026d5ea0 = 0;
              uRam00000000026d5ea8 = 0;
              _DAT_026d5eb0 = 0;
              uRam00000000026d5eb8 = 0;
              _DAT_026d5ec0 = 0;
              uRam00000000026d5ec8 = 0;
              _DAT_026d5ed0 = 0;
              uRam00000000026d5ed8 = 0;
              _DAT_026d5ee0 = 0;
              uRam00000000026d5ee8 = 0;
              _DAT_026d5ef0 = 0;
              uRam00000000026d5ef8 = 0;
              _DAT_026d5f00 = 0;
              ___cxa_guard_release();
            }
            uVar5 = FUN_00e8dc10();
            pplVar10 = pplVar9;
            if ((char)uVar5 == '\0') {
              pplVar9 = (longlong **)&DAT_02802688;
              pplVar10 = pplVar9;
            }
          }
        }
      }
      plVar8 = *pplVar10;
      if (plVar8 == (longlong *)0x0) {
        local_70 = 0;
        plVar8 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar10 + 1) == '\0') {
          uVar5 = FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar10 + 1) = 0;
        }
        local_70 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      uVar5 = FUN_00ca9940();
      plVar8 = local_60;
      uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_026fdd40);
      if ((DAT_026fdd40 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
        _DAT_026cd0e8 = FUN_00d4fe50();
        DAT_026cd0d0 = "GNDictionary";
        _DAT_026cd0d8 = 0x28;
        _DAT_026cd0e0 = FUN_00022d20;
        _DAT_026cd0f0 = 0;
        uRam00000000026cd0f8 = 0;
        _DAT_026cd100 = 0;
        _DAT_026cd178 = 0;
        uRam00000000026cd180 = 0;
        _DAT_026cd188 = 0;
        DAT_026cd18a = 6;
        _DAT_026cd108 = 0;
        uRam00000000026cd110 = 0;
        _DAT_026cd118 = 0;
        uRam00000000026cd120 = 0;
        _DAT_026cd128 = 0;
        uRam00000000026cd130 = 0;
        _DAT_026cd138 = 0;
        uRam00000000026cd140 = 0;
        _DAT_026cd148 = 0;
        uRam00000000026cd150 = 0;
        _DAT_026cd158 = 0;
        uRam00000000026cd160 = 0;
        _DAT_026cd168 = 0;
        uRam00000000026cd170 = 0;
        DAT_026cd193 = 0;
        _DAT_026cd18b = 0;
        uVar5 = ___cxa_guard_release();
      }
      pplVar9 = (longlong **)&DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        uVar5 = FUN_00e85ea0();
        if ((char)uVar5 != '\0') {
          if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
            _DAT_026d5e58 = FUN_00d4fe50();
            DAT_026d5e40 = "GNString";
            _DAT_026d5e48 = 0x40;
            _DAT_026d5e50 = FUN_0005d920;
            _DAT_026d5e60 = 0;
            uRam00000000026d5e68 = 0;
            _DAT_026d5e70 = 0;
            uRam00000000026d5e78 = 0;
            _DAT_026d5e80 = 0;
            uRam00000000026d5e88 = 0;
            _DAT_026d5e90 = 0;
            uRam00000000026d5e98 = 0;
            _DAT_026d5ea0 = 0;
            uRam00000000026d5ea8 = 0;
            _DAT_026d5eb0 = 0;
            uRam00000000026d5eb8 = 0;
            _DAT_026d5ec0 = 0;
            uRam00000000026d5ec8 = 0;
            _DAT_026d5ed0 = 0;
            uRam00000000026d5ed8 = 0;
            _DAT_026d5ee0 = 0;
            uRam00000000026d5ee8 = 0;
            _DAT_026d5ef0 = 0;
            uRam00000000026d5ef8 = 0;
            _DAT_026d5f00 = 0;
            ___cxa_guard_release();
          }
          uVar5 = FUN_00e8db60();
          if ((char)uVar5 != '\0') {
            if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
              _DAT_026d5e58 = FUN_00d4fe50();
              DAT_026d5e40 = "GNString";
              _DAT_026d5e48 = 0x40;
              _DAT_026d5e50 = FUN_0005d920;
              _DAT_026d5e60 = 0;
              uRam00000000026d5e68 = 0;
              _DAT_026d5e70 = 0;
              uRam00000000026d5e78 = 0;
              _DAT_026d5e80 = 0;
              uRam00000000026d5e88 = 0;
              _DAT_026d5e90 = 0;
              uRam00000000026d5e98 = 0;
              _DAT_026d5ea0 = 0;
              uRam00000000026d5ea8 = 0;
              _DAT_026d5eb0 = 0;
              uRam00000000026d5eb8 = 0;
              _DAT_026d5ec0 = 0;
              uRam00000000026d5ec8 = 0;
              _DAT_026d5ed0 = 0;
              uRam00000000026d5ed8 = 0;
              _DAT_026d5ee0 = 0;
              uRam00000000026d5ee8 = 0;
              _DAT_026d5ef0 = 0;
              uRam00000000026d5ef8 = 0;
              _DAT_026d5f00 = 0;
              ___cxa_guard_release();
            }
            uVar5 = FUN_00e8dc10();
            pplVar9 = &local_60;
            if ((char)uVar5 == '\0') {
              pplVar9 = (longlong **)&DAT_02802688;
            }
          }
        }
      }
      plVar8 = *pplVar9;
      if (plVar8 == (longlong *)0x0) {
        local_70 = 0;
        plVar8 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar9 + 1) == '\0') {
          uVar5 = FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar9 + 1) = 0;
        }
        local_70 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar8 != (longlong *)0x0) {
      pplVar9 = (longlong **)FUN_00e8fc40();
      FUN_00022d50();
      (*(code *)(*pplVar9)[3])();
      local_58 = '\0';
      local_60 = (longlong *)0x0;
      local_50 = plVar8[2];
      local_48 = 0;
      local_b8 = pplVar9;
      if (0 < *(int *)(local_50 + 0xc)) {
        do {
          local_60 = *(longlong **)(*(longlong *)(local_50 + 0x10) + (longlong)local_48 * 8);
          FUN_01da7840((longlong)local_48,&local_60);
          plVar6 = local_40;
          if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_e8 = plVar6;
          local_e0 = '\0';
          local_d8 = local_60;
          local_d0 = '\0';
          uVar11 = FUN_01d3c700();
          plVar2 = local_40;
          local_78 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              uVar11 = FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_78 = '\x01';
          local_80 = plVar2;
          FUN_01da4b90(uVar11,&local_80);
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_48 = local_48 + 1;
        } while (local_48 < *(int *)(local_50 + 0xc));
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      pplVar10 = *(longlong ***)(unaff_RDI + 0x10);
      if (pplVar10 != pplVar9) {
        if (pplVar9 != (longlong **)0x0) {
          FUN_00d50b00();
        }
        *(longlong ***)(unaff_RDI + 0x10) = pplVar9;
        if (pplVar10 != (longlong **)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d51d20();
      plVar6 = *(longlong **)(unaff_RDI + 0x18);
      if (plVar6 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (longlong *)0x0) {
            *(undefined8 *)(unaff_RDI + 0x18) = 0;
          }
          else {
            FUN_00d50b00();
            plVar6 = *(longlong **)(unaff_RDI + 0x18);
            *(longlong **)(unaff_RDI + 0x18) = local_60;
          }
        }
        else {
          local_58 = '\0';
          *(longlong **)(unaff_RDI + 0x18) = local_60;
        }
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d51d20();
      plVar6 = *(longlong **)(unaff_RDI + 0x20);
      if (plVar6 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == (longlong *)0x0) {
            *(undefined8 *)(unaff_RDI + 0x20) = 0;
          }
          else {
            FUN_00d50b00();
            plVar6 = *(longlong **)(unaff_RDI + 0x20);
            *(longlong **)(unaff_RDI + 0x20) = local_60;
          }
        }
        else {
          local_58 = '\0';
          *(longlong **)(unaff_RDI + 0x20) = local_60;
        }
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01da5fb0();
      (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
      local_b0 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_a8 = '\x01';
      FUN_01da7910();
      plVar2 = local_60;
      plVar6 = *(longlong **)(unaff_RDI + 0x30);
      if (plVar6 == local_60) {
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_58 == '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b00();
          plVar6 = *(longlong **)(unaff_RDI + 0x30);
        }
        *(longlong **)(unaff_RDI + 0x30) = plVar2;
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01da44d0();
      if (pplVar9 != (longlong **)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_70 != '\0') {
        FUN_00d50b20();
      }
    }
    uVar7 = CONCAT71((int7)((ulonglong)pplVar9 >> 8),plVar8 != (longlong *)0x0);
    FUN_00d50b20();
  }
  return uVar7 & 0xffffffff;
}


