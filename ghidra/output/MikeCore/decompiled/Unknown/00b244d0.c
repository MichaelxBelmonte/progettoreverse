// Function: FUN_00b244d0
// Address: 00b244d0
// Size: 1580 bytes
// Class: Unknown
// String references:
//   "nvilzisf#mtsyalstmfs"


/* WARNING: Removing unreachable block (ram,0x00b24acd) */
/* WARNING: Removing unreachable block (ram,0x00b24ad6) */

undefined8 * FUN_00b244d0(int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint *puVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar8;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  undefined4 local_38;
  
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_007c79c0();
  (**(code **)(*plVar6 + 0x18))();
  *(undefined1 *)((longlong)plVar6 + 0x74) = 0;
  *(undefined4 *)((longlong)plVar6 + 0xc) = 0x80;
  plVar6[0x14] = 0x200000000;
  plVar6[3] = 0x40e5888000000000;
  *(undefined4 *)(plVar6 + 0x20) = 2;
  *(int *)(plVar6 + 0x1a) = param_2;
  *(int *)((longlong)plVar6 + 0xd4) = param_1;
  lVar1 = *unaff_RSI;
  lVar2 = plVar6[0x21];
  local_44 = param_1;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar6[0x21] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00b24c20();
  if (cVar4 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_00b2486d;
  }
  local_40 = 0x676c6f626c69766e;
  local_38 = 0;
  local_50 = plVar6;
  local_48 = param_2;
  if (param_2 == local_44) {
    iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
    if (iVar5 == 0) {
      local_40 = 0x676c6f626673697a;
      local_38 = 0;
      iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
      uVar8 = 1;
      if (iVar5 == 0) {
        local_40 = 0x6f75747073746d23;
        local_38 = 0;
        iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
        uVar8 = 2;
        if (iVar5 == 0) {
          local_40 = 0x6f757470736c6179;
          local_38 = 0;
          iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
          uVar8 = 3;
          if (iVar5 == 0) {
            local_40 = 0x6f75747073666d74;
            local_38 = 0;
            iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
            uVar8 = 4;
            if (iVar5 == 0) {
LAB_00b24a4e:
              FUN_00d403d0();
              local_70 = DAT_0275e100;
              if (DAT_0275e100 != 0) {
                FUN_00d50b00();
              }
              local_68 = '\x01';
              local_58 = '\0';
              local_60 = plVar6;
              FUN_00d41430(&local_60,&local_70);
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (((char)local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              *unaff_RDI = plVar6;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              return unaff_RDI;
            }
          }
        }
      }
    }
    else {
      uVar8 = 0;
    }
    puVar7 = (uint *)("nvilzisf#mtsyalstmfs" + uVar8 * 4);
    do {
      local_40 = 0x6f75747000000000;
      if (uVar8 < 2) {
        local_40 = 0x676c6f6200000000;
      }
      local_40 = local_40 | *puVar7;
      local_38 = 0;
      _AudioObjectRemovePropertyListener(local_50,FUN_00b223e0);
      puVar7 = puVar7 + -1;
      bVar3 = 0 < (longlong)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  else {
    iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
    if (iVar5 == 0) {
      local_40 = 0x676c6f626c69766e;
      local_38 = 0;
      iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
      if (iVar5 != 0) goto LAB_00b24646;
      local_40 = 0x676c6f626673697a;
      local_38 = 0;
      iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
      uVar8 = 1;
      if (iVar5 == 0) {
        local_40 = 0x676c6f626673697a;
        local_38 = 0;
        iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
        if (iVar5 == 0) {
          local_40 = 0x6f75747073746d23;
          local_38 = 0;
          iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
          uVar8 = 2;
          if (iVar5 == 0) {
            local_40 = 0x696e707473746d23;
            local_38 = 0;
            iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
            if (iVar5 == 0) {
              local_40 = 0x6f757470736c6179;
              local_38 = 0;
              iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
              uVar8 = 3;
              if (iVar5 == 0) {
                local_40 = 0x696e7074736c6179;
                local_38 = 0;
                iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
                if (iVar5 == 0) {
                  local_40 = 0x6f75747073666d74;
                  local_38 = 0;
                  iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
                  uVar8 = 4;
                  if (iVar5 == 0) {
                    local_40 = 0x696e707473666d74;
                    local_38 = 0;
                    iVar5 = _AudioObjectAddPropertyListener(plVar6,FUN_00b223e0);
                    if (iVar5 == 0) goto LAB_00b24a4e;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
LAB_00b24646:
      uVar8 = 0;
    }
    plVar6 = local_50;
    puVar7 = (uint *)("nvilzisf#mtsyalstmfs" + uVar8 * 4);
    do {
      local_40 = 0x6f75747000000000;
      if (uVar8 < 2) {
        local_40 = 0x676c6f6200000000;
      }
      local_40 = local_40 | *puVar7;
      local_38 = 0;
      _AudioObjectRemovePropertyListener(plVar6,FUN_00b223e0);
      _AudioObjectRemovePropertyListener(plVar6,FUN_00b223e0);
      puVar7 = puVar7 + -1;
      bVar3 = 0 < (longlong)uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar3);
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  if (local_50 == (longlong *)0x0) {
    return unaff_RDI;
  }
LAB_00b2486d:
  FUN_00d50b20();
  return unaff_RDI;
}


