// Function: FUN_00253c20
// Address: 00253c20
// Size: 3576 bytes
// Class: MUDetectionSeparationTool
// String references:
//   "MUDetectionSeparationTool"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00253c20(void)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong **pplVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong local_98;
  char local_90;
  longlong *local_78;
  longlong *local_70;
  byte local_61;
  longlong *local_60;
  char local_58;
  byte local_4a;
  byte local_49;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar8 = local_48;
    local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
    pplVar6 = (longlong **)local_40;
    if (local_40[0] == '\0') {
      pplVar6 = &local_60;
    }
    *(undefined1 *)pplVar6 = 0;
    if ((local_40[0] != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (longlong *)(unaff_RDI + 0x90);
    local_70 = plVar9;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      if (*plVar9 != 0) goto LAB_00253cb5;
    }
    else {
      if ((char)local_60 == '\0') {
LAB_00253cb5:
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar8 = (longlong *)*plVar9;
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar7 = local_48;
      local_38[0] = local_40[0];
      pplVar6 = (longlong **)local_38;
      if (local_40[0] != '\0') {
        pplVar6 = (longlong **)local_40;
      }
      *(char *)pplVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)*plVar9;
LAB_00253d19:
        FUN_00d50b00();
      }
      else if (local_38[0] == '\0') goto LAB_00253d19;
      (**(code **)(*plVar7 + 0xed0))();
      plVar9 = local_60;
      local_78 = local_60;
      if (local_58 == '\0') {
        if (local_60 == (longlong *)0x0) {
          local_78 = (longlong *)0x0;
          plVar9 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = '\0';
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_002760e0();
      plVar8 = DAT_02802688;
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar8 = DAT_02802688;
        if (cVar2 != '\0') {
          plVar8 = local_78;
        }
      }
      if (plVar8 == (longlong *)0x0) {
        FUN_00276300();
        plVar8 = DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar2 = FUN_00e85ea0();
          plVar8 = DAT_02802688;
          if (cVar2 != '\0') {
            plVar8 = local_78;
          }
        }
        if (plVar8 == (longlong *)0x0) {
          if ((DAT_026f9dc8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            _DAT_026f9d18 = FUN_00276570();
            _DAT_026f9d00 = "MUDetectionSeparationTool";
            _DAT_026f9d08 = 0x40;
            _DAT_026f9d10 = FUN_00276520;
            _DAT_026f9d20 = 0;
            uRam00000000026f9d28 = 0;
            _DAT_026f9d30 = 0;
            _DAT_026f9da8 = 0;
            uRam00000000026f9db0 = 0;
            _DAT_026f9db8 = 0;
            DAT_026f9dba = 1;
            _DAT_026f9d38 = 0;
            uRam00000000026f9d40 = 0;
            _DAT_026f9d48 = 0;
            uRam00000000026f9d50 = 0;
            _DAT_026f9d58 = 0;
            uRam00000000026f9d60 = 0;
            _DAT_026f9d68 = 0;
            uRam00000000026f9d70 = 0;
            _DAT_026f9d78 = 0;
            uRam00000000026f9d80 = 0;
            _DAT_026f9d88 = 0;
            uRam00000000026f9d90 = 0;
            _DAT_026f9d98 = 0;
            uRam00000000026f9da0 = 0;
            DAT_026f9dc3 = 0;
            _DAT_026f9dbb = 0;
            ___cxa_guard_release();
          }
          lVar1 = DAT_026f6e18;
          plVar8 = DAT_02802688;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar2 = FUN_00e85ea0();
            lVar1 = DAT_026f6e18;
            plVar8 = DAT_02802688;
            if (cVar2 != '\0') {
              plVar8 = local_78;
            }
          }
          DAT_026f6e18 = lVar1;
          if (plVar8 == (longlong *)0x0) {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_00234140();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      plVar8 = (longlong *)*local_70;
      if (plVar8 == (longlong *)0x0) {
LAB_00253e6f:
        plVar7 = (longlong *)0x0;
      }
      else {
        (**(code **)(&UNK_00001550 + *plVar8))();
        plVar7 = local_48;
        pplVar6 = &local_60;
        if (local_40[0] != '\0') {
          pplVar6 = (longlong **)local_40;
        }
        local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
        *(undefined1 *)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)*local_70;
          if (plVar7 == (longlong *)0x0) goto LAB_00253e6f;
        }
        else if ((char)local_60 != '\0') goto LAB_00253e71;
        FUN_00d50b00();
      }
LAB_00253e71:
      FUN_019f77f0();
      plVar9 = local_70;
      if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      plVar8 = (longlong *)*plVar9;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar8 = local_48;
      pplVar6 = &local_60;
      if (local_40[0] != '\0') {
        pplVar6 = (longlong **)local_40;
      }
      local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
      *(undefined1 *)pplVar6 = 0;
      if ((local_40[0] != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (longlong *)0x0) {
        if (*plVar9 != 0) goto LAB_00253f07;
      }
      else {
        if ((char)local_60 == '\0') {
LAB_00253f07:
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar1 = DAT_026f6e28;
        if (DAT_026f6e28 != 0) {
          FUN_00d50b00();
        }
        FUN_00234140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_026f6e00;
        if (DAT_026f6e00 != 0) {
          FUN_00d50b00();
        }
        bVar3 = FUN_00234140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = DAT_026f6e08;
        if (DAT_026f6e08 != 0) {
          FUN_00d50b00();
        }
        bVar4 = FUN_00234140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        plVar9 = (longlong *)*plVar9;
        (**(code **)(&UNK_00001550 + *plVar9))();
        plVar8 = local_48;
        local_38[0] = local_40[0];
        pplVar6 = (longlong **)local_38;
        if (local_40[0] != '\0') {
          pplVar6 = (longlong **)local_40;
        }
        *(char *)pplVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = (longlong *)*local_70;
LAB_00254031:
          FUN_00d50b00();
        }
        else if (local_38[0] == '\0') goto LAB_00254031;
        local_61 = bVar3;
        (**(code **)(*plVar8 + 0xed0))();
        plVar8 = local_60;
        if (local_58 == '\0') {
          if (local_60 == (longlong *)0x0) {
            local_78 = (longlong *)0x0;
            plVar8 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            local_78 = plVar8;
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_78 = local_60;
          local_58 = '\0';
        }
        local_49 = bVar4;
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00276790();
        if (plVar8 == (longlong *)0x0) {
          local_4a = local_61;
          if (DAT_02802688 == (longlong *)0x0) goto LAB_002541e0;
LAB_002540f5:
          plVar9 = (longlong *)*local_70;
joined_r0x002542ed:
          if (plVar9 == (longlong *)0x0) goto LAB_002542f3;
LAB_00254105:
          (**(code **)(&UNK_00001550 + *plVar9))();
          plVar7 = local_48;
          local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
          pplVar6 = (longlong **)local_40;
          if (local_40[0] == '\0') {
            pplVar6 = &local_60;
          }
          *(undefined1 *)pplVar6 = 0;
          if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)*local_70;
            if (plVar7 == (longlong *)0x0) goto LAB_002542f3;
LAB_00254252:
            FUN_00d50b00();
          }
          else if ((char)local_60 == '\0') goto LAB_00254252;
        }
        else {
          (**(code **)(*plVar8 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') {
            pplVar6 = &DAT_02802688;
          }
          else {
            pplVar6 = &local_78;
          }
          plVar9 = *pplVar6;
          (**(code **)(*plVar8 + 0x3d0))();
          (**(code **)(*plVar8 + 0x3b8))();
          local_4a = (**(code **)(*plVar8 + 0x3c8))();
          bVar3 = (**(code **)(*plVar8 + 0x3b0))();
          bVar4 = (**(code **)(*plVar8 + 0x3a8))();
          local_4a = local_4a | local_61;
          local_49 = bVar4 | ~bVar3 & local_49;
          if (plVar9 != (longlong *)0x0) goto LAB_002540f5;
LAB_002541e0:
          lVar1 = DAT_026f6e20;
          if (DAT_026f6e20 != 0) {
            FUN_00d50b00();
          }
          FUN_00234140();
          if (lVar1 == 0) {
            plVar9 = (longlong *)*local_70;
            goto joined_r0x002542ed;
          }
          FUN_00d50b20();
          plVar9 = (longlong *)*local_70;
          if (plVar9 != (longlong *)0x0) goto LAB_00254105;
LAB_002542f3:
          plVar7 = (longlong *)0x0;
        }
        FUN_019f7820();
        if ((plVar9 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = (longlong *)*local_70;
        if (plVar9 == (longlong *)0x0) {
LAB_00254381:
          plVar7 = (longlong *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + *plVar9))();
          plVar7 = local_48;
          local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
          pplVar6 = (longlong **)local_40;
          if (local_40[0] == '\0') {
            pplVar6 = &local_60;
          }
          *(undefined1 *)pplVar6 = 0;
          if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)*local_70;
            if (plVar7 == (longlong *)0x0) goto LAB_00254381;
          }
          else if ((char)local_60 != '\0') goto LAB_00254383;
          FUN_00d50b00();
        }
LAB_00254383:
        FUN_019f7850();
        if ((plVar9 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = (longlong *)*local_70;
        (**(code **)(&UNK_00001550 + *plVar9))();
        plVar7 = local_48;
        local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
        pplVar6 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar6 = &local_60;
        }
        *(undefined1 *)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)*local_70;
LAB_002543fb:
          FUN_00d50b00();
        }
        else if ((char)local_60 == '\0') goto LAB_002543fb;
        (**(code **)((longlong)&dylib_command_00001288.dylib.name.offset + *plVar7))();
        plVar7 = local_70;
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar7 = (longlong *)*plVar7;
        (**(code **)(&UNK_00001550 + *plVar7))();
        plVar9 = local_48;
        local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
        pplVar6 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar6 = &local_60;
        }
        *(undefined1 *)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 == (longlong *)0x0) {
          plVar9 = (longlong *)*local_70;
LAB_00254482:
          FUN_00d50b00();
        }
        else if ((char)local_60 == '\0') goto LAB_00254482;
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *plVar9))();
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar9 = (longlong *)*local_70;
        (**(code **)(&UNK_00001550 + *plVar9))();
        plVar7 = local_48;
        pplVar6 = (longlong **)local_40;
        if (local_40[0] == '\0') {
          pplVar6 = &local_60;
        }
        local_60 = (longlong *)CONCAT71(local_60._1_7_,local_40[0]);
        *(undefined1 *)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)*local_70;
LAB_00254501:
          FUN_00d50b00();
        }
        else if ((char)local_60 == '\0') goto LAB_00254501;
        (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                    *plVar7 + 0x20))();
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  plVar8 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00254580;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_00254580:
    (**(code **)(*plVar8 + 0xed0))();
    plVar9 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 == (longlong *)0x0) {
        local_60 = (longlong *)0x0;
        plVar9 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
        local_60 = plVar9;
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_60 = local_48;
    }
    FUN_002769b0();
    plVar7 = DAT_02802688;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar7 = DAT_02802688;
      if (cVar2 != '\0') {
        plVar7 = local_60;
      }
    }
    if ((plVar7 == (longlong *)0x0) && (FUN_00276bd0(), plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x360))();
      FUN_00e85ea0();
    }
    (**(code **)(&UNK_000017e0 + *plVar8))();
    if (plVar9 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  if (*(longlong *)(unaff_RDI + 0xd8) == 0) {
    return;
  }
  FUN_0062abf0();
  plVar8 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  FUN_0062abf0();
  if (local_48 == (longlong *)0x0) {
    return;
  }
  if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = '\x01';
  if (*unaff_RSI != 0) {
    FUN_00d3ed20();
    plVar8 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (longlong *)0x0) {
      uVar10 = FUN_00d3ed20();
      local_98 = DAT_026f6f98;
      if (DAT_026f6f98 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_90 = '\x01';
      pplVar6 = &local_48;
      FUN_000175c0(uVar10,&local_98);
      plVar8 = local_48;
      FUN_00053ac0();
      if (plVar8 == (longlong *)0x0) {
LAB_00254717:
        pplVar6 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_00254717;
      }
      plVar8 = *pplVar6;
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar6 + 1) = 0;
      }
      cVar2 = '\x01';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (longlong *)0x0) {
        cVar2 = FUN_00d45ad0();
        FUN_00d50b20();
      }
    }
  }
  FUN_00b34cb0();
  plVar8 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_00254941;
    (**(code **)(*local_48 + 0x10))();
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
  }
  if ((plVar8 != (longlong *)0x0) && (cVar2 == '\x01')) {
    (**(code **)(*plVar8 + 0x50))();
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b20();
  }
LAB_00254941:
  FUN_00d50b20();
  return;
}


