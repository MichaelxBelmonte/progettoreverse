// Function: FUN_0025b1d0
// Address: 0025b1d0
// Size: 1255 bytes
// Class: MDEditorScrollView


/* WARNING: Removing unreachable block (ram,0x0025b56e) */
/* WARNING: Removing unreachable block (ram,0x0025b57a) */

ulonglong FUN_0025b1d0(undefined8 param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  bool bVar10;
  longlong local_a8;
  char local_a0;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  longlong local_38;
  
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  plVar8 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar8 = local_48;
    local_58 = local_40[0];
    pcVar5 = &local_58;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) {
      plVar8 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025b280:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0025b280;
    uVar4 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" + *plVar8
                        ))();
    uVar9 = (ulonglong)uVar4;
    FUN_00d50b20();
    if (((byte)uVar4 & param_2) == 0) goto LAB_0025b219;
    plVar8 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar8))();
    plVar6 = local_48;
    local_88 = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = &local_88;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025b307:
      FUN_00d50b00();
    }
    else if (local_88 == '\0') goto LAB_0025b307;
    (**(code **)(*plVar6 + 0xe20))();
    local_38 = CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (((local_38 != 0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 == 0) || (lVar7 = local_38, *(int *)(local_38 + 0xc) == 0)) {
      plVar8 = *(longlong **)(unaff_RDI + 0x90);
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar6 = local_48;
      pcVar5 = &local_88;
      if (local_40[0] != '\0') {
        pcVar5 = local_40;
      }
      local_88 = local_40[0];
      *pcVar5 = '\0';
      if ((local_40[0] != '\0') && (plVar6 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 == (longlong *)0x0) {
        plVar6 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025b3d7:
        FUN_00d50b00();
      }
      else if (local_88 == '\0') goto LAB_0025b3d7;
      (**(code **)(*plVar6 + 0xe38))();
      lVar2 = local_38;
      lVar1 = CONCAT71(uStack_57,local_58);
      lVar7 = local_38;
      if (local_38 == lVar1) {
LAB_0025b43e:
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar7 = lVar1;
        if (local_50 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          goto LAB_0025b43e;
        }
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        local_50 = '\0';
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 == 0) goto LAB_0025b217;
    }
    if (*(int *)(lVar7 + 0xc) != 0) {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_48 + 0x450))();
      if (cVar3 == '\0') {
        FUN_01e561b0();
        if (CONCAT71(uStack_57,local_58) == 0) {
          bVar10 = true;
        }
        else {
          FUN_01e561b0();
          FUN_01d8f0f0();
          bVar10 = CONCAT71(uStack_87,local_88) != 0;
          if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar10 = false;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        if (*(longlong *)(unaff_RDI + 0x170) == 0) {
          plVar6 = (longlong *)FUN_00272f20();
          (**(code **)(*plVar6 + 0x18))();
          plVar8 = *(longlong **)(unaff_RDI + 0x170);
          if (plVar8 == plVar6) {
            FUN_00d50b20();
          }
          else {
            *(longlong **)(unaff_RDI + 0x170) = plVar6;
            if (plVar8 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00364a30();
        if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) {
          local_78 = (longlong *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
          pcVar5 = local_40;
          if (local_40[0] == '\0') {
            pcVar5 = &local_58;
          }
          local_58 = local_40[0];
          *pcVar5 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 == (longlong *)0x0) {
            plVar8 = *(longlong **)(unaff_RDI + 0x90);
            if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) goto LAB_0025b627;
            local_78 = (longlong *)0x0;
          }
          else {
            plVar8 = local_48;
            local_78 = local_48;
            if (local_58 == '\0') {
LAB_0025b627:
              FUN_00d50b00();
              local_78 = plVar8;
            }
          }
        }
        local_70 = '\x01';
        FUN_00365580();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_60 = 0;
        lVar7 = *(longlong *)(unaff_RDI + 0x170);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = lVar7;
        FUN_01d83990();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        uVar9 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
        FUN_00d50b20();
        goto LAB_0025b219;
      }
    }
    FUN_00d50b20();
  }
LAB_0025b217:
  uVar9 = 0;
LAB_0025b219:
  return uVar9 & 0xffffffff;
}


