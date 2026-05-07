// Function: FUN_00cd1020
// Address: 00cd1020
// Size: 3665 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x00cd128d) */
/* WARNING: Removing unreachable block (ram,0x00cd1299) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cd1020(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong **pplVar10;
  int iVar11;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if ((DAT_028a7350 == (undefined8 *)0x0) || (DAT_028a7359 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a7350 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      bVar12 = DAT_028a7350 == (undefined8 *)0x0;
      DAT_028a7350 = puVar5;
      if (((bVar12) || (FUN_00d50b20(), DAT_028a7350 != (undefined8 *)0x0)) &&
         (DAT_028a7358 == '\0')) {
        DAT_028a7358 = '\x01';
        FUN_00e8cb90();
      }
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar6 = (longlong)&DAT_025736a8;
      plVar6[3] = 0;
      *(undefined4 *)(plVar6 + 4) = 0;
      (*DAT_025736c0)();
      bVar12 = DAT_028a7360 == (longlong *)0x0;
      DAT_028a7360 = plVar6;
      if (((bVar12) || (FUN_00d50b20(), DAT_028a7360 != (longlong *)0x0)) && (DAT_028a7368 == '\0'))
      {
        DAT_028a7368 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028a7359 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a7359 = '\x01';
      FUN_00e8cb70();
    }
  }
  (**(code **)(*DAT_028a7360 + 0x368))();
  bVar12 = false;
  if (DAT_028a7350 != (undefined8 *)0x0) {
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_50 = DAT_028a7350;
    local_48 = 0xffffffff;
    local_40 = 0;
    while( true ) {
      lVar7 = (longlong)(int)local_48;
      iVar11 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar11);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar11) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar7 * 8);
      plVar6 = (longlong *)local_60[5];
      if (plVar6 == (longlong *)0x0) {
        (**(code **)(*(longlong *)local_60[3] + 0x370))();
      }
      else {
        local_68 = 0;
        FUN_00d50b00();
        local_68 = '\x01';
        local_70 = plVar6;
      }
      cVar4 = (**(code **)(*local_70 + 0x50))();
      uVar13 = extraout_XMM0_Da;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      plVar6 = local_60;
      if (cVar4 != '\0') {
        if (local_60 != (longlong *)0x0) {
          if (local_58 == '\0') {
            FUN_00d50b00();
          }
          else {
            local_58 = '\0';
          }
          bVar2 = true;
          FUN_00cdd7d0();
          bVar12 = true;
          if (plVar6 == (longlong *)0x0) goto LAB_00cd1314;
          goto LAB_00cd15a3;
        }
        break;
      }
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar11 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690(uVar13,local_48._4_4_);
          local_40 = local_40 + local_48._4_4_;
          iVar11 = 0;
        }
        local_48 = CONCAT44(iVar11,(int)local_48);
      }
    }
    FUN_00cdd7d0();
    bVar12 = false;
  }
LAB_00cd1314:
  bVar2 = bVar12;
  FUN_00cd2540();
  plVar6 = local_60;
  if (local_60 != (longlong *)0x0) {
    bVar2 = true;
    if (local_58 == '\0') {
      FUN_00d50b00();
    }
    if (plVar6 != (longlong *)0x0) {
      bVar2 = true;
      uVar13 = FUN_00cd0de0();
      plVar8 = local_70;
      local_150 = DAT_02774d50;
      if (DAT_02774d50 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_148 = '\x01';
      (**(code **)(*plVar8 + 0x400))(uVar13,&local_150);
      local_88 = local_60;
      plVar8 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (longlong *)0x0) &&
            (plVar8 = (longlong *)FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (longlong *)0x0)) {
          plVar8 = (longlong *)FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        plVar8 = (longlong *)FUN_00d50b20();
      }
      if (local_68 != '\0') {
        plVar8 = (longlong *)FUN_00d50b20();
      }
      if (local_88 == (longlong *)0x0) {
        local_38 = (longlong *)
                   CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((ulonglong)plVar8 >> 8),1));
        cVar4 = '\0';
      }
      else {
        uVar9 = (**(code **)(*local_88 + 0x398))();
        if ((char)uVar9 != '\0') {
          local_140 = local_88;
          local_138 = '\0';
          uVar9 = FUN_00ca94c0();
          plVar8 = local_60;
          uVar13 = extraout_XMM0_Da_00;
          if (local_58 == '\0') {
            if (((local_60 != (longlong *)0x0) &&
                (uVar9 = FUN_00d50b00(), uVar13 = extraout_XMM0_Da_03, local_58 != '\0')) &&
               (local_60 != (longlong *)0x0)) {
              uVar9 = FUN_00d50b20();
              uVar13 = extraout_XMM0_Da_04;
            }
          }
          else {
            local_58 = '\0';
          }
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            uVar9 = FUN_00d50b20();
            uVar13 = extraout_XMM0_Da_01;
          }
          lVar7 = DAT_027092b8;
          if (plVar8 != (longlong *)0x0) {
            local_b0 = plVar8;
            if (DAT_027092b8 != 0) {
              uVar9 = FUN_00d50b00();
              uVar13 = extraout_XMM0_Da_02;
            }
            local_38 = (longlong *)
                       CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
            local_130 = lVar7;
            local_128 = '\x01';
            pplVar10 = &local_60;
            FUN_000175c0(uVar13,&local_130);
            plVar8 = local_60;
            if ((DAT_026fd0c0 == '\0') && (iVar11 = ___cxa_guard_acquire(), iVar11 != 0)) {
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
            if (plVar8 == (longlong *)0x0) {
              pplVar10 = (longlong **)&DAT_02802688;
            }
            else {
              (**(code **)(*plVar8 + 0x360))();
              cVar4 = FUN_00e85ea0();
              if (cVar4 == '\0') {
                pplVar10 = (longlong **)&DAT_02802688;
              }
            }
            plVar8 = *pplVar10;
            if (plVar8 == (longlong *)0x0) {
              local_80 = 0;
              plVar8 = (longlong *)0x0;
            }
            else {
              if (*(char *)(pplVar10 + 1) == '\0') {
                pplVar10 = (longlong **)FUN_00d50b00();
              }
              else {
                *(undefined1 *)(pplVar10 + 1) = 0;
              }
              local_80 = CONCAT71((int7)((ulonglong)pplVar10 >> 8),1);
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (plVar8 == (longlong *)0x0) {
              cVar4 = (char)local_80;
              goto LAB_00cd1557;
            }
            plVar1 = (longlong *)plVar6[6];
            local_78 = plVar8;
            if (plVar1 != plVar8) {
              FUN_00d50b00();
              plVar6[6] = (longlong)plVar8;
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_00d6f370();
            local_120 = DAT_02774d60;
            if (DAT_02774d60 != 0) {
              FUN_00d50b00();
            }
            local_118 = '\x01';
            local_110 = 0;
            local_108 = '\0';
            FUN_00d704d0(&local_110,&local_120);
            plVar8 = local_60;
            if (DAT_026fdd40 == '\0') {
              local_38 = (longlong *)&DAT_026fdd40;
              iVar11 = ___cxa_guard_acquire();
              if (iVar11 != 0) {
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
            }
            pplVar10 = (longlong **)&DAT_02802688;
            if (plVar8 != (longlong *)0x0) {
              (**(code **)(*plVar8 + 0x360))();
              cVar4 = FUN_00e85ea0();
              if (cVar4 != '\0') {
                if (DAT_026fd0c0 == '\0') {
                  local_38 = (longlong *)&DAT_026fd0c0;
                  iVar11 = ___cxa_guard_acquire();
                  if (iVar11 != 0) {
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
                }
                cVar4 = FUN_00e8db60();
                if (cVar4 != '\0') {
                  if (DAT_026fd0c0 == '\0') {
                    local_38 = (longlong *)&DAT_026fd0c0;
                    iVar11 = ___cxa_guard_acquire();
                    if (iVar11 != 0) {
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
                  }
                  cVar4 = FUN_00e8dc10();
                  pplVar10 = &local_60;
                  if (cVar4 == '\0') {
                    pplVar10 = (longlong **)&DAT_02802688;
                  }
                }
              }
            }
            local_38 = *pplVar10;
            if (*(char *)(pplVar10 + 1) == '\0') {
              if (local_38 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar10 + 1) = 0;
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_38 == (longlong *)0x0) {
LAB_00cd1970:
              plVar3 = local_38;
              local_e8 = '\0';
              local_f0 = local_38;
              FUN_00cd2840();
              plVar1 = local_60;
              plVar8 = local_78;
              if (plVar3 == local_60) {
LAB_00cd19ea:
                if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_58 == '\0') {
                  if (local_60 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  if (local_38 == (longlong *)0x0) {
                    local_38 = plVar1;
                  }
                  else {
                    local_38 = plVar1;
                    FUN_00d50b20();
                  }
                  goto LAB_00cd19ea;
                }
                if (local_38 != (longlong *)0x0) {
                  local_38 = local_60;
                  FUN_00d50b20();
                }
                local_58 = '\0';
                local_38 = plVar1;
              }
              if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar13 = (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
              plVar1 = local_38;
              local_98 = local_60;
              local_90 = 0;
              if (local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              local_90 = '\x01';
              local_e0 = plVar8;
              local_d8 = '\0';
              FUN_00cd2930(uVar13,&local_e0);
              if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar13 = FUN_00d6f370();
              local_c0 = DAT_02774d60;
              local_d0 = plVar1;
              local_c8 = '\0';
              if (DAT_02774d60 != 0) {
                uVar13 = FUN_00d50b00();
              }
              local_b8 = '\x01';
              FUN_00d6f570(uVar13,&local_c0);
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = local_78;
              local_58 = '\0';
              cVar4 = FUN_00c9ff50();
              uVar13 = extraout_XMM0_Da_05;
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                uVar13 = FUN_00d50b20();
              }
              if (cVar4 == '\0') goto LAB_00cd1970;
              local_100 = local_78;
              local_f8 = '\0';
              FUN_01de4130(uVar13,&local_100);
              plVar8 = local_60;
              (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
              local_a8 = local_70;
              local_a0 = 0;
              if (local_68 == '\0') {
                if (local_70 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_a0 = '\x01';
              cVar4 = (**(code **)(*plVar8 + 0x50))();
              if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 == '\0') goto LAB_00cd1970;
            }
            if (local_38 == (longlong *)0x0) {
              local_38 = (longlong *)0x0;
              cVar4 = (char)local_80;
            }
            else {
              FUN_00d50b20();
              cVar4 = (char)local_80;
              local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
            }
            goto LAB_00cd1557;
          }
        }
        local_38 = (longlong *)
                   CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1));
        cVar4 = '\0';
      }
LAB_00cd1557:
      plVar8 = local_88;
      local_58 = '\0';
      local_60 = plVar6;
      FUN_00d21140();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0' && (char)local_38 == '\0') {
        FUN_00d50b20();
      }
      goto LAB_00cd15a3;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_00cd15a3:
  (**(code **)(*DAT_028a7360 + 0x378))();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar2) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


