// Function: FUN_00de7b20
// Address: 00de7b20
// Size: 1228 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Removing unreachable block (ram,0x00de7cbf) */
/* WARNING: Removing unreachable block (ram,0x00de7ccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_00de7b20(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  int local_58;
  undefined1 *local_50;
  longlong *local_48;
  char local_40;
  
  if ((*unaff_RSI == 0) || (*param_2 == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_68 = '\0';
    local_60 = *(longlong *)(*unaff_RSI + 0x10);
    local_58 = 0;
    if (0 < *(int *)(local_60 + 0xc)) {
      local_50 = &DAT_026fdd40;
      do {
        local_70 = *(longlong *)(*(longlong *)(local_60 + 0x10) + (longlong)local_58 * 8);
        FUN_00e6fcd0((longlong)local_58,&local_70);
        if (local_78 == '\0') {
          if (local_80 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
            local_40 = 1;
          }
          else {
            FUN_00d50b00();
            local_48 = local_80;
            local_40 = 1;
          }
        }
        else {
          local_48 = local_80;
          local_40 = 1;
        }
        plVar1 = local_48;
        local_40 = '\x01';
        if ((DAT_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar7 = (longlong **)&DAT_02802688;
          if (cVar5 != '\0') {
            if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
            pplVar7 = &local_48;
            if (cVar5 == '\0') {
              pplVar7 = (longlong **)&DAT_02802688;
            }
          }
        }
        plVar4 = local_48;
        lVar3 = local_70;
        plVar1 = *pplVar7;
        cVar5 = *(char *)(pplVar7 + 1);
        if ((cVar5 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b00();
          *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_00de7e96:
          *unaff_RDI = (longlong)plVar1;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
joined_r0x00de7eb6:
          if (local_68 == '\0') {
            return unaff_RDI;
          }
          if (local_70 == 0) {
            return unaff_RDI;
          }
          FUN_00d50b20();
          return unaff_RDI;
        }
        if (plVar1 != (longlong *)0x0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (cVar5 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_00de7e96;
        }
        if (local_48 == (longlong *)*param_2) {
          if (param_1 != (longlong *)0x0) {
            lVar2 = *param_1;
            if (lVar2 == local_70) {
              if (((char)param_1[1] == '\0') && (local_70 != 0)) {
                if (local_68 == '\0') {
                  FUN_00d50b00();
                  goto LAB_00de7f6d;
                }
                goto LAB_00de7f32;
              }
            }
            else if (local_68 == '\0') {
              local_50 = (undefined1 *)CONCAT71(local_50._1_7_,(char)param_1[1]);
              if (local_70 != 0) {
                FUN_00d50b00();
              }
              *param_1 = lVar3;
              if (((char)local_50 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_00de7f6d:
              *(undefined1 *)(param_1 + 1) = 1;
            }
            else {
              *param_1 = local_70;
              if (((char)param_1[1] != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_00de7f32:
              *(undefined1 *)(param_1 + 1) = 1;
              local_68 = '\0';
            }
          }
          *(undefined1 *)(unaff_RDI + 1) = 0;
          lVar3 = *unaff_RSI;
          if ((char)unaff_RSI[1] == '\0') {
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            *unaff_RDI = lVar3;
            *(undefined1 *)(unaff_RDI + 1) = 1;
          }
          else {
            *unaff_RDI = lVar3;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            *(undefined1 *)(unaff_RSI + 1) = 0;
          }
          if ((local_40 != '\0') && (plVar4 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto joined_r0x00de7eb6;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = local_58 + 1;
      } while (local_58 < *(int *)(local_60 + 0xc));
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return unaff_RDI;
}


