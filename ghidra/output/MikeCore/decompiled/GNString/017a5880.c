// Function: FUN_017a5880
// Address: 017a5880
// Size: 3520 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x017a5a57) */
/* WARNING: Removing unreachable block (ram,0x017a5a5c) */
/* WARNING: Removing unreachable block (ram,0x017a602b) */
/* WARNING: Removing unreachable block (ram,0x017a6030) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_017a5880(void)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar13;
  longlong local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  
  if (((longlong *)*unaff_RSI == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))(), cVar5 == '\0')) {
LAB_017a6369:
    uVar11 = 0;
  }
  else {
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    plVar8 = local_80;
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_017a5901;
      }
    }
    else if (local_80 != (longlong *)0x0) {
LAB_017a5901:
      FUN_017a52b0();
      local_100 = plVar8;
      local_f8 = '\0';
      cVar5 = (**(code **)(*local_80 + 0x50))();
      if (cVar5 == '\0') {
        FUN_017a5530();
        local_f0 = plVar8;
        local_e8 = '\0';
        bVar6 = (**(code **)(*local_48 + 0x50))();
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != '\0') {
          FUN_00d50b20();
        }
        bVar6 = bVar6 ^ 1;
      }
      else {
        bVar6 = 0;
      }
      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != '\0') {
        FUN_00d50b20();
      }
      if (bVar6 != 0) {
        FUN_00d50b20();
        goto LAB_017a6369;
      }
      FUN_00d50b20();
    }
    lVar12 = *unaff_RSI;
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
    if (lVar1 != lVar12) {
      if (lVar12 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x18) = lVar12;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    local_78 = '\0';
    local_80 = (longlong *)0x0;
    FUN_00da5ad0();
    local_68 = local_40 != '\0';
    local_70 = local_48;
    if ((bool)local_68) {
      local_40 = '\0';
    }
    local_60 = FUN_00da7170();
    uVar13 = FUN_00da7180();
    if (local_70 == (longlong *)0x0) {
      bVar2 = false;
      local_50 = (longlong *)0x0;
    }
    else {
      local_50 = (longlong *)0x0;
      local_88 = (longlong *)&DAT_026fdd40;
      bVar2 = false;
      do {
        local_a0 = 0;
        lVar12 = *(longlong *)(unaff_RDI + 0x18);
        if (lVar12 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_a0 = '\x01';
        local_a8 = lVar12;
        FUN_00e88a90(uVar13,0);
        plVar8 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        lVar12 = DAT_027c2518;
        if (plVar8 != (longlong *)0x0) {
          if (DAT_027c2518 != 0) {
            FUN_00d50b00();
          }
          local_e0 = lVar12;
          local_d8 = '\x01';
          FUN_00e8a230(1,&local_e0,0);
          plVar8 = local_48;
          if ((DAT_026fdd40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
            ___cxa_guard_release();
          }
          pplVar10 = (longlong **)&DAT_02802688;
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar10 = (longlong **)&DAT_02802688;
            if (cVar5 != '\0') {
              if ((DAT_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
              cVar5 = FUN_00e8db60();
              pplVar10 = &local_48;
              if (cVar5 == '\0') {
                pplVar10 = (longlong **)&DAT_02802688;
              }
            }
          }
          plVar9 = *(longlong **)(unaff_RDI + 0x30);
          plVar8 = *pplVar10;
          if (plVar9 != plVar8) {
            if (*(char *)(pplVar10 + 1) == '\0') {
              if (plVar8 == (longlong *)0x0) {
                *(undefined8 *)(unaff_RDI + 0x30) = 0;
              }
              else {
                FUN_00d50b00();
                plVar9 = *(longlong **)(unaff_RDI + 0x30);
                *(longlong **)(unaff_RDI + 0x30) = *pplVar10;
              }
            }
            else {
              *(undefined1 *)(pplVar10 + 1) = 0;
              *(longlong **)(unaff_RDI + 0x30) = plVar8;
            }
            if (plVar9 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          lVar12 = DAT_027d2048;
          if (DAT_027d2048 != 0) {
            FUN_00d50b00();
          }
          local_d0 = lVar12;
          local_c8 = '\x01';
          FUN_00e89d80(0xd);
          plVar8 = local_48;
          if (local_48 == local_50) {
            plVar8 = local_50;
            bVar4 = bVar2;
            if ((bVar2) || (local_48 == (longlong *)0x0)) goto joined_r0x017a5d79;
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_017a5d90;
            }
LAB_017a5d34:
            local_40 = '\0';
            bVar2 = true;
            local_50 = plVar8;
          }
          else {
            if (local_40 != '\0') {
              if ((bVar2) && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_017a5d34;
            }
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            if ((bVar2) && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_50 = plVar8;
LAB_017a5d90:
              plVar8 = local_50;
              bVar4 = true;
            }
joined_r0x017a5d79:
            bVar2 = bVar4;
            local_50 = plVar8;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        uVar13 = FUN_00da7180();
        if (local_70 == (longlong *)0x0) break;
        local_70 = (longlong *)0x0;
        if (local_68 == '\0') {
          local_68 = '\0';
          break;
        }
        uVar13 = FUN_00d50b20();
        local_68 = '\0';
      } while (local_70 != (longlong *)0x0);
    }
    local_70 = (longlong *)0x0;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((*(longlong *)(unaff_RDI + 0x30) == 0) && (local_50 == (longlong *)0x0)) {
      local_78 = '\0';
      local_80 = (longlong *)0x0;
      FUN_00da5ad0();
      local_68 = local_40 != '\0';
      local_70 = local_48;
      if ((bool)local_68) {
        local_40 = '\0';
      }
      local_60 = FUN_00da7170();
      uVar13 = FUN_00da7180();
      local_88 = local_70;
      if (local_70 == (longlong *)0x0) {
        uVar11 = 0;
      }
      else {
        plVar8 = (longlong *)FUN_00e8fc40();
        FUN_0002cb50();
        uVar13 = (**(code **)(*plVar8 + 0x18))();
        local_90 = 0;
        local_98 = *(longlong *)(unaff_RDI + 0x18);
        if (local_98 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_90 = '\x01';
        FUN_00e53ff0(uVar13,&local_98);
        plVar8 = local_48;
        if ((DAT_026fdd40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
          ___cxa_guard_release();
        }
        pplVar10 = (longlong **)&DAT_02802688;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x360))();
          cVar5 = FUN_00e85ea0();
          if (cVar5 != '\0') {
            if ((DAT_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
            cVar5 = FUN_00e8db60();
            pplVar10 = &local_48;
            if (cVar5 == '\0') {
              pplVar10 = (longlong **)&DAT_02802688;
            }
          }
        }
        plVar8 = *(longlong **)(unaff_RDI + 0x30);
        plVar9 = *pplVar10;
        plVar3 = plVar8;
        if (plVar8 != plVar9) {
          if (*(char *)(pplVar10 + 1) == '\0') {
            if (plVar9 == (longlong *)0x0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar9 = *pplVar10;
              plVar8 = *(longlong **)(unaff_RDI + 0x30);
            }
          }
          else {
            *(undefined1 *)(pplVar10 + 1) = 0;
          }
          *(longlong **)(unaff_RDI + 0x30) = plVar9;
          plVar3 = plVar9;
          if (plVar8 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar3 = *(longlong **)(unaff_RDI + 0x30);
          }
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        plVar8 = DAT_027d2050;
        if (plVar3 == (longlong *)0x0) {
          uVar11 = 0;
        }
        else {
          if (DAT_027d2050 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_48 = plVar8;
          local_40 = '\0';
          cVar5 = FUN_00c9ff50();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          uVar11 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          if (cVar5 == '\0') {
            lVar12 = *(longlong *)(unaff_RDI + 0x30);
            lVar1 = *(longlong *)(unaff_RDI + 0x38);
            if (lVar1 != lVar12) {
              if (lVar12 != 0) {
                FUN_00d50b00();
              }
              *(longlong *)(unaff_RDI + 0x38) = lVar12;
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              lVar12 = *(longlong *)(unaff_RDI + 0x30);
            }
            if (lVar12 != 0) {
              *(undefined8 *)(unaff_RDI + 0x30) = 0;
              FUN_00d50b20();
            }
          }
        }
        uVar13 = FUN_00d50b20();
        if ((local_70 != (longlong *)0x0) && (uVar13 = FUN_00da7180(), local_70 != (longlong *)0x0))
        {
          local_70 = (longlong *)0x0;
          if (local_68 != '\0') {
            uVar13 = FUN_00d50b20();
          }
          local_68 = '\0';
        }
      }
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      if (local_88 == (longlong *)0x0) goto LAB_017a62c9;
    }
    else {
LAB_017a62c9:
      if (local_50 == (longlong *)0x0) goto LAB_017a6369;
      lVar12 = *(longlong *)(unaff_RDI + 0x30);
      if (lVar12 == 0) {
        FUN_00d46530();
        lVar12 = DAT_027d2058;
        if (DAT_027d2058 != 0) {
          FUN_00d50b00();
        }
        local_118 = lVar12;
        FUN_00083ea0(2,&local_118);
        uVar13 = FUN_000b4da0();
        plVar8 = *(longlong **)(unaff_RDI + 0x30);
        plVar9 = plVar8;
        if (plVar8 != local_48) {
          if (local_40 == '\0') {
            if (local_48 == (longlong *)0x0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              uVar13 = FUN_00d50b00();
              plVar8 = *(longlong **)(unaff_RDI + 0x30);
              plVar9 = local_48;
            }
          }
          else {
            local_40 = '\0';
            plVar9 = local_48;
          }
          *(longlong **)(unaff_RDI + 0x30) = plVar9;
          if (plVar8 != (longlong *)0x0) {
            uVar13 = FUN_00d50b20();
            plVar9 = local_48;
          }
        }
        if ((local_40 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        local_80 = (longlong *)&DAT_0253d630;
        if ((local_58 != '\0') && (local_60 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        local_80 = &DAT_024c5048;
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if (lVar12 != 0) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_108 != '\0') && (local_110 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        lVar12 = *(longlong *)(unaff_RDI + 0x30);
      }
      plVar8 = DAT_027d2050;
      local_c0 = local_50;
      local_b8 = '\0';
      if (DAT_027d2050 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
      local_80 = plVar8;
      local_78 = '\0';
      FUN_00ca0840(uVar13,&local_80);
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar11 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((bVar2) && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return uVar11 & 0xffffffff;
}


