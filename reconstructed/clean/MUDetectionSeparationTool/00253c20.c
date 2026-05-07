// Function: FUN_00253c20
// Address: 00253c20
// Size: 3576 bytes
// Class: MUDetectionSeparationTool
// String references:
//   "MUDetectionSeparationTool"

void FUN_00253c20(void)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int64_t **pplVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  uint32_t uVar10;
  int64_t local_98;
  char local_90;
  int64_t *local_78;
  int64_t *local_70;
  byte local_61;
  int64_t *local_60;
  char local_58;
  byte local_4a;
  byte local_49;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x90) != (int64_t *)0x0) {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar8 = local_48;
    local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_40[0]);
    pplVar6 = (int64_t **)local_40;
    if (local_40[0] == '\0') {
      pplVar6 = &local_60;
    }
    *(void*)pplVar6 = 0;
    if ((local_40[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)(this_ptr + 0x90);
    local_70 = plVar9;
    if (plVar8 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
      if (*plVar9 != 0) goto LAB_00253cb5;
    }
    else {
      if ((char)local_60 == '\0') {
LAB_00253cb5:
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar8 = (int64_t *)*plVar9;
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar7 = local_48;
      local_38[0] = local_40[0];
      pplVar6 = (int64_t **)local_38;
      if (local_40[0] != '\0') {
        pplVar6 = (int64_t **)local_40;
      }
      *(char *)pplVar6 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (int64_t *)0x0) {
        plVar7 = (int64_t *)*plVar9;
LAB_00253d19:
        FUN_00d50b00();
      }
      else if (local_38[0] == '\0') goto LAB_00253d19;
      (**(code **)(*plVar7 + 0xed0))();
      plVar9 = local_60;
      local_78 = local_60;
      if (local_58 == '\0') {
        if (local_60 == (int64_t *)0x0) {
          local_78 = (int64_t *)0x0;
          plVar9 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = '\0';
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_002760e0();
      plVar8 = g_02802688;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar8 = g_02802688;
        if (cVar2 != '\0') {
          plVar8 = local_78;
        }
      }
      if (plVar8 == (int64_t *)0x0) {
        FUN_00276300();
        plVar8 = g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar2 = FUN_00e85ea0();
          plVar8 = g_02802688;
          if (cVar2 != '\0') {
            plVar8 = local_78;
          }
        }
        if (plVar8 == (int64_t *)0x0) {
          if ((g_026f9dc8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
            g_026f9d18 = FUN_00276570();
            g_026f9d00 = "MUDetectionSeparationTool";
            g_026f9d08 = 0x40;
            g_026f9d10 = FUN_00276520;
            g_026f9d20 = 0;
            ram_00000000026f9d28 = 0;
            g_026f9d30 = 0;
            g_026f9da8 = 0;
            ram_00000000026f9db0 = 0;
            g_026f9db8 = 0;
            g_026f9dba = 1;
            g_026f9d38 = 0;
            ram_00000000026f9d40 = 0;
            g_026f9d48 = 0;
            ram_00000000026f9d50 = 0;
            g_026f9d58 = 0;
            ram_00000000026f9d60 = 0;
            g_026f9d68 = 0;
            ram_00000000026f9d70 = 0;
            g_026f9d78 = 0;
            ram_00000000026f9d80 = 0;
            g_026f9d88 = 0;
            ram_00000000026f9d90 = 0;
            g_026f9d98 = 0;
            ram_00000000026f9da0 = 0;
            g_026f9dc3 = 0;
            g_026f9dbb = 0;
            ___cxa_guard_release();
          }
          lVar1 = g_026f6e18;
          plVar8 = g_02802688;
          if (plVar9 != (int64_t *)0x0) {
            (**(code **)(*plVar9 + 0x360))();
            cVar2 = FUN_00e85ea0();
            lVar1 = g_026f6e18;
            plVar8 = g_02802688;
            if (cVar2 != '\0') {
              plVar8 = local_78;
            }
          }
          g_026f6e18 = lVar1;
          if (plVar8 == (int64_t *)0x0) {
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
      plVar8 = (int64_t *)*local_70;
      if (plVar8 == (int64_t *)0x0) {
LAB_00253e6f:
        plVar7 = (int64_t *)0x0;
      }
      else {
        (**(code **)(&UNK_00001550 + *plVar8))();
        plVar7 = local_48;
        pplVar6 = &local_60;
        if (local_40[0] != '\0') {
          pplVar6 = (int64_t **)local_40;
        }
        local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_40[0]);
        *(void*)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (int64_t *)0x0) {
          plVar7 = (int64_t *)*local_70;
          if (plVar7 == (int64_t *)0x0) goto LAB_00253e6f;
        }
        else if ((char)local_60 != '\0') goto LAB_00253e71;
        FUN_00d50b00();
      }
LAB_00253e71:
      FUN_019f77f0();
      plVar9 = local_70;
      if ((plVar8 != (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_78 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar8 = (int64_t *)*plVar9;
    }
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(&UNK_00001550 + *plVar8))();
      plVar8 = local_48;
      pplVar6 = &local_60;
      if (local_40[0] != '\0') {
        pplVar6 = (int64_t **)local_40;
      }
      local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_40[0]);
      *(void*)pplVar6 = 0;
      if ((local_40[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (int64_t *)0x0) {
        if (*plVar9 != 0) goto LAB_00253f07;
      }
      else {
        if ((char)local_60 == '\0') {
LAB_00253f07:
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar1 = g_026f6e28;
        if (g_026f6e28 != 0) {
          FUN_00d50b00();
        }
        FUN_00234140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = g_026f6e00;
        if (g_026f6e00 != 0) {
          FUN_00d50b00();
        }
        bVar3 = FUN_00234140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = g_026f6e08;
        if (g_026f6e08 != 0) {
          FUN_00d50b00();
        }
        bVar4 = FUN_00234140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        plVar9 = (int64_t *)*plVar9;
        (**(code **)(&UNK_00001550 + *plVar9))();
        plVar8 = local_48;
        local_38[0] = local_40[0];
        pplVar6 = (int64_t **)local_38;
        if (local_40[0] != '\0') {
          pplVar6 = (int64_t **)local_40;
        }
        *(char *)pplVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == (int64_t *)0x0) {
          plVar8 = (int64_t *)*local_70;
LAB_00254031:
          FUN_00d50b00();
        }
        else if (local_38[0] == '\0') goto LAB_00254031;
        local_61 = bVar3;
        (**(code **)(*plVar8 + 0xed0))();
        plVar8 = local_60;
        if (local_58 == '\0') {
          if (local_60 == (int64_t *)0x0) {
            local_78 = (int64_t *)0x0;
            plVar8 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            local_78 = plVar8;
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_78 = local_60;
          local_58 = '\0';
        }
        local_49 = bVar4;
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00276790();
        if (plVar8 == (int64_t *)0x0) {
          local_4a = local_61;
          if (g_02802688 == (int64_t *)0x0) goto LAB_002541e0;
LAB_002540f5:
          plVar9 = (int64_t *)*local_70;
joined_r0x002542ed:
          if (plVar9 == (int64_t *)0x0) goto LAB_002542f3;
LAB_00254105:
          (**(code **)(&UNK_00001550 + *plVar9))();
          plVar7 = local_48;
          local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_40[0]);
          pplVar6 = (int64_t **)local_40;
          if (local_40[0] == '\0') {
            pplVar6 = &local_60;
          }
          *(void*)pplVar6 = 0;
          if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (int64_t *)0x0) {
            plVar7 = (int64_t *)*local_70;
            if (plVar7 == (int64_t *)0x0) goto LAB_002542f3;
LAB_00254252:
            FUN_00d50b00();
          }
          else if ((char)local_60 == '\0') goto LAB_00254252;
        }
        else {
          (**(code **)(*plVar8 + 0x360))();
          cVar2 = FUN_00e85ea0();
          if (cVar2 == '\0') {
            pplVar6 = &g_02802688;
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
          if (plVar9 != (int64_t *)0x0) goto LAB_002540f5;
LAB_002541e0:
          lVar1 = g_026f6e20;
          if (g_026f6e20 != 0) {
            FUN_00d50b00();
          }
          FUN_00234140();
          if (lVar1 == 0) {
            plVar9 = (int64_t *)*local_70;
            goto joined_r0x002542ed;
          }
          FUN_00d50b20();
          plVar9 = (int64_t *)*local_70;
          if (plVar9 != (int64_t *)0x0) goto LAB_00254105;
LAB_002542f3:
          plVar7 = (int64_t *)0x0;
        }
        FUN_019f7820();
        if ((plVar9 != (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = (int64_t *)*local_70;
        if (plVar9 == (int64_t *)0x0) {
LAB_00254381:
          plVar7 = (int64_t *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + *plVar9))();
          plVar7 = local_48;
          local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_40[0]);
          pplVar6 = (int64_t **)local_40;
          if (local_40[0] == '\0') {
            pplVar6 = &local_60;
          }
          *(void*)pplVar6 = 0;
          if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar7 == (int64_t *)0x0) {
            plVar7 = (int64_t *)*local_70;
            if (plVar7 == (int64_t *)0x0) goto LAB_00254381;
          }
          else if ((char)local_60 != '\0') goto LAB_00254383;
          FUN_00d50b00();
        }
LAB_00254383:
        FUN_019f7850();
        if ((plVar9 != (int64_t *)0x0) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = (int64_t *)*local_70;
        (**(code **)(&UNK_00001550 + *plVar9))();
        plVar7 = local_48;
        local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_40[0]);
        pplVar6 = (int64_t **)local_40;
        if (local_40[0] == '\0') {
          pplVar6 = &local_60;
        }
        *(void*)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (int64_t *)0x0) {
          plVar7 = (int64_t *)*local_70;
LAB_002543fb:
          FUN_00d50b00();
        }
        else if ((char)local_60 == '\0') goto LAB_002543fb;
        (**(code **)((int64_t)&dylib_command_00001288.dylib.name.offset + *plVar7))();
        plVar7 = local_70;
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar7 = (int64_t *)*plVar7;
        (**(code **)(&UNK_00001550 + *plVar7))();
        plVar9 = local_48;
        local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_40[0]);
        pplVar6 = (int64_t **)local_40;
        if (local_40[0] == '\0') {
          pplVar6 = &local_60;
        }
        *(void*)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 == (int64_t *)0x0) {
          plVar9 = (int64_t *)*local_70;
LAB_00254482:
          FUN_00d50b00();
        }
        else if ((char)local_60 == '\0') goto LAB_00254482;
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *plVar9))();
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar9 = (int64_t *)*local_70;
        (**(code **)(&UNK_00001550 + *plVar9))();
        plVar7 = local_48;
        pplVar6 = (int64_t **)local_40;
        if (local_40[0] == '\0') {
          pplVar6 = &local_60;
        }
        local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_40[0]);
        *(void*)pplVar6 = 0;
        if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 == (int64_t *)0x0) {
          plVar7 = (int64_t *)*local_70;
LAB_00254501:
          FUN_00d50b00();
        }
        else if ((char)local_60 == '\0') goto LAB_00254501;
        (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                    *plVar7 + 0x20))();
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar8 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00254580;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_00254580:
    (**(code **)(*plVar8 + 0xed0))();
    plVar9 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 == (int64_t *)0x0) {
        local_60 = (int64_t *)0x0;
        plVar9 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        local_60 = plVar9;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_60 = local_48;
    }
    FUN_002769b0();
    plVar7 = g_02802688;
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar7 = g_02802688;
      if (cVar2 != '\0') {
        plVar7 = local_60;
      }
    }
    if ((plVar7 == (int64_t *)0x0) && (FUN_00276bd0(), plVar9 != (int64_t *)0x0)) {
      (**(code **)(*plVar9 + 0x360))();
      FUN_00e85ea0();
    }
    (**(code **)(&UNK_000017e0 + *plVar8))();
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    return;
  }
  if (*(int64_t *)(this_ptr + 0xd8) == 0) {
    return;
  }
  FUN_0062abf0();
  plVar8 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    return;
  }
  FUN_0062abf0();
  if (local_48 == (int64_t *)0x0) {
    return;
  }
  if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar2 = '\x01';
  if (*arg1 != 0) {
    FUN_00d3ed20();
    plVar8 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      uVar10 = FUN_00d3ed20();
      local_98 = g_026f6f98;
      if (g_026f6f98 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_90 = '\x01';
      pplVar6 = &local_48;
      FUN_000175c0(uVar10,&local_98);
      plVar8 = local_48;
      FUN_00053ac0();
      if (plVar8 == (int64_t *)0x0) {
LAB_00254717:
        pplVar6 = &g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 == '\0') goto LAB_00254717;
      }
      plVar8 = *pplVar6;
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar6 + 1) = 0;
      }
      cVar2 = '\x01';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        cVar2 = FUN_00d45ad0();
        FUN_00d50b20();
      }
    }
  }
  FUN_00b34cb0();
  plVar8 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_00254941;
    (**(code **)(*local_48 + 0x10))();
    FUN_00d50b00();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      (**(code **)(*local_48 + 0x10))();
      FUN_00d50b20();
    }
  }
  if ((plVar8 != (int64_t *)0x0) && (cVar2 == '\x01')) {
    (**(code **)(*plVar8 + 0x50))();
  }
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b20();
  }
LAB_00254941:
  FUN_00d50b20();
  return;
}

