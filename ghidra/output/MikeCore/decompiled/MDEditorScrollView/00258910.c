// Function: FUN_00258910
// Address: 00258910
// Size: 4361 bytes
// Class: MDEditorScrollView
// String references:
//   "MDEditorScrollView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00258910(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong unaff_RDI;
  bool bVar14;
  undefined8 uVar15;
  int local_7c;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  char local_60 [8];
  longlong *local_58;
  char local_50;
  longlong *local_40;
  longlong *local_38;
  
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar13 = local_40;
    local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_38);
    pplVar11 = &local_58;
    if ((char)local_38 != '\0') {
      pplVar11 = &local_38;
    }
    *(undefined1 *)pplVar11 = 0;
    if (((char)local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 == (longlong *)0x0) {
      plVar13 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar13 != (longlong *)0x0) goto LAB_00258991;
    }
    else {
      if ((char)local_58 == '\0') {
LAB_00258991:
        FUN_00d50b00();
      }
      if (plVar13 != (longlong *)0x0) {
        plVar13 = *(longlong **)(unaff_RDI + 0x90);
        if (plVar13 == (longlong *)0x0) {
LAB_00258a17:
          plVar10 = (longlong *)0x0;
        }
        else {
          (**(code **)(&UNK_00001550 + *plVar13))();
          plVar10 = local_40;
          local_70 = (char)local_38;
          pplVar11 = (longlong **)&local_70;
          if ((char)local_38 != '\0') {
            pplVar11 = &local_38;
          }
          *(char *)pplVar11 = '\0';
          if (((char)local_38 != '\0') && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 == (longlong *)0x0) {
            plVar10 = *(longlong **)(unaff_RDI + 0x90);
            if (plVar10 == (longlong *)0x0) goto LAB_00258a17;
          }
          else if (local_70 != '\0') goto LAB_00258a1a;
          FUN_00d50b00();
        }
LAB_00258a1a:
        FUN_019f0ee0();
        plVar1 = local_58;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((plVar13 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (plVar1 != (longlong *)0x0) {
          plVar13 = *(longlong **)(unaff_RDI + 0x90);
          (**(code **)(&UNK_00001550 + *plVar13))();
          plVar10 = local_40;
          pplVar11 = &local_58;
          if ((char)local_38 != '\0') {
            pplVar11 = &local_38;
          }
          local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_38);
          *(undefined1 *)pplVar11 = 0;
          if (((char)local_38 != '\0') && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 == (longlong *)0x0) {
            plVar10 = *(longlong **)(unaff_RDI + 0x90);
LAB_00258ac2:
            FUN_00d50b00();
          }
          else if ((char)local_58 == '\0') goto LAB_00258ac2;
          (**(code **)(*plVar10 + 0xec0))();
          if (plVar13 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          plVar13 = *(longlong **)(unaff_RDI + 0x90);
          if (plVar13 == (longlong *)0x0) {
LAB_00258b6a:
            plVar10 = (longlong *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar13))();
            plVar10 = local_40;
            local_70 = (char)local_38;
            pplVar11 = (longlong **)&local_70;
            if ((char)local_38 != '\0') {
              pplVar11 = &local_38;
            }
            *(char *)pplVar11 = '\0';
            if (((char)local_38 != '\0') && (plVar10 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 == (longlong *)0x0) {
              plVar10 = *(longlong **)(unaff_RDI + 0x90);
              if (plVar10 == (longlong *)0x0) goto LAB_00258b6a;
            }
            else if (local_70 != '\0') goto LAB_00258b6d;
            FUN_00d50b00();
          }
LAB_00258b6d:
          FUN_019f0f90();
          plVar1 = *(longlong **)(unaff_RDI + 0x90);
          if (plVar1 == (longlong *)0x0) {
LAB_00258bf3:
            plVar12 = (longlong *)0x0;
          }
          else {
            (**(code **)(&UNK_00001550 + *plVar1))();
            plVar12 = local_40;
            pplVar11 = &local_38;
            if ((char)local_38 == '\0') {
              pplVar11 = (longlong **)local_60;
            }
            local_60[0] = (char)local_38;
            *(char *)pplVar11 = '\0';
            if (((char)local_38 != '\0') && (plVar12 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 == (longlong *)0x0) {
              plVar12 = *(longlong **)(unaff_RDI + 0x90);
              if (plVar12 == (longlong *)0x0) goto LAB_00258bf3;
            }
            else if (local_60[0] != '\0') goto LAB_00258bf6;
            FUN_00d50b00();
          }
LAB_00258bf6:
          FUN_019f0ee0();
          lVar2 = CONCAT71(uStack_6f,local_70);
          if (local_68 == '\0') {
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_01e26eb0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
            FUN_00d50b20();
          }
          if ((plVar1 != (longlong *)0x0) && (plVar12 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((plVar13 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
            (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
            plVar13 = local_40;
            if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar10 = DAT_026f6f08;
            if (plVar13 != (longlong *)0x0) {
              if (DAT_026f6f08 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              FUN_00e7d6f0();
              pVar9 = 0xaaaaaaab;
              uVar15 = FUN_0071a120();
              if (((((char)local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                  (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                uVar15 = FUN_00d50b20();
              }
              local_58 = plVar10;
              local_50 = '\0';
              FUN_000175c0(uVar15,&local_58);
              plVar13 = local_40;
              if ((char)local_38 == '\0') {
                if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
                   (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38._0_1_ = '\0';
              }
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 != (longlong *)0x0) {
                local_38._0_1_ = '\0';
                local_40 = plVar13;
                uVar6 = FUN_00c70bc0();
                plVar12 = (longlong *)(ulonglong)uVar6;
                if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
              FUN_00d50b20();
              if ((plVar13 != (longlong *)0x0 & (byte)plVar12) == 0) {
                (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
                (**(code **)(&UNK_00001668 + *local_58))();
                pvVar8 = _pthread_getspecific(pVar9);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar7 = FUN_01326de0();
                bVar14 = iVar7 == 3;
                if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                bVar14 = false;
              }
              if (plVar10 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if (!bVar14) goto LAB_00258f18;
              local_38._0_1_ = '\0';
              local_40 = (longlong *)0x0;
              local_58 = (longlong *)0x0;
              local_50 = '\0';
              FUN_00228b40(&local_58,&local_40);
            }
          }
          FUN_0022ee90();
        }
      }
    }
  }
LAB_00258f18:
  if ((*(longlong *)(unaff_RDI + 0x160) != 0) &&
     (FUN_00d50130(), *(longlong *)(unaff_RDI + 0x160) != 0)) {
    *(undefined8 *)(unaff_RDI + 0x160) = 0;
    FUN_00d50b20();
  }
  plVar13 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar10 = local_40;
  local_70 = (char)local_38;
  pplVar11 = (longlong **)&local_70;
  if ((char)local_38 != '\0') {
    pplVar11 = &local_38;
  }
  *(undefined1 *)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) {
    plVar10 = *(longlong **)(unaff_RDI + 0x90);
LAB_00258fa6:
    FUN_00d50b00();
  }
  else if (local_70 == '\0') goto LAB_00258fa6;
  pplVar11 = &local_58;
  (**(code **)(*plVar10 + 0x970))();
  plVar10 = local_58;
  if ((DAT_02709e70 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_026f8cd8 = FUN_00074a70();
    _DAT_026f8cc0 = "MDEditorScrollView";
    _DAT_026f8cc8 = 0x260;
    _DAT_026f8cd0 = FUN_000749b0;
    _DAT_026f8ce0 = 0;
    uRam00000000026f8ce8 = 0;
    _DAT_026f8cf0 = 0;
    _DAT_026f8d68 = 0;
    uRam00000000026f8d70 = 0;
    _DAT_026f8d78 = 0;
    DAT_026f8d7a = 1;
    _DAT_026f8cf8 = 0;
    uRam00000000026f8d00 = 0;
    _DAT_026f8d08 = 0;
    uRam00000000026f8d10 = 0;
    _DAT_026f8d18 = 0;
    uRam00000000026f8d20 = 0;
    _DAT_026f8d28 = 0;
    uRam00000000026f8d30 = 0;
    _DAT_026f8d38 = 0;
    uRam00000000026f8d40 = 0;
    _DAT_026f8d48 = 0;
    uRam00000000026f8d50 = 0;
    _DAT_026f8d58 = 0;
    uRam00000000026f8d60 = 0;
    DAT_026f8d83 = 0;
    _DAT_026f8d7b = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (longlong *)0x0) {
LAB_00258ff8:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00258ff8;
  }
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar13 = DAT_026f6df0;
  if (plVar1 == (longlong *)0x0) goto LAB_00259349;
  if (DAT_026f6df0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar15 = FUN_0071a120();
  if (((((char)local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  local_58 = plVar13;
  local_50 = '\0';
  FUN_000175c0(uVar15,&local_58);
  plVar10 = local_40;
  if ((char)local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38._0_1_ = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (longlong *)0x0) {
    local_7c = 0;
  }
  else {
    local_38._0_1_ = '\0';
    local_40 = plVar10;
    local_7c = FUN_00c716c0();
    if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00504770();
  plVar10 = plVar13;
  if (*(longlong **)(unaff_RDI + 0x90) == (longlong *)0x0) goto LAB_00259349;
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  plVar13 = local_40;
  local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_38);
  pplVar11 = &local_38;
  if ((char)local_38 == '\0') {
    pplVar11 = &local_58;
  }
  *(undefined1 *)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 == (longlong *)0x0) {
    plVar13 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar13 == (longlong *)0x0) goto LAB_00259349;
LAB_0025920a:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_0025920a;
  if (plVar13 == (longlong *)0x0) goto LAB_00259349;
  plVar13 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar12 = local_40;
  local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_38);
  pplVar11 = &local_38;
  if ((char)local_38 == '\0') {
    pplVar11 = &local_58;
  }
  *(undefined1 *)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (longlong *)0x0) {
    plVar12 = *(longlong **)(unaff_RDI + 0x90);
LAB_0025927c:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_0025927c;
  iVar7 = (**(code **)(&DAT_000015c0 + *plVar12))();
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (iVar7 <= local_7c) goto LAB_00259349;
  plVar13 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar12 = local_40;
  pplVar11 = &local_38;
  if ((char)local_38 == '\0') {
    pplVar11 = &local_58;
  }
  local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_38);
  *(undefined1 *)pplVar11 = 0;
  if (((char)local_38 != '\0') && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar12 == (longlong *)0x0) {
    plVar12 = *(longlong **)(unaff_RDI + 0x90);
LAB_00259325:
    FUN_00d50b00();
  }
  else if ((char)local_58 == '\0') goto LAB_00259325;
  (**(code **)(&DAT_000015b8 + *plVar12))();
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00259349:
  plVar13 = (longlong *)0x0;
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar13 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar12 = DAT_02709e30;
    if (DAT_02709e30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar15 = FUN_0071a120();
    plVar10 = local_40;
    if (((((char)local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    local_58 = plVar12;
    local_50 = '\0';
    FUN_000175c0(uVar15,&local_58);
    plVar3 = local_40;
    if ((char)local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38._0_1_ = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_38._0_1_ = '\0';
      local_40 = plVar3;
      FUN_00c70bc0();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    (**(code **)(&DAT_000015c8 + *plVar13))();
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    plVar13 = *(longlong **)(unaff_RDI + 0x90);
  }
  (**(code **)(&UNK_00001550 + *plVar13))();
  plVar13 = local_40;
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
    plVar12 = DAT_02709e30;
    plVar13 = (longlong *)CONCAT71(uStack_6f,local_70);
    if (DAT_02709e30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar15 = FUN_0071a120();
    plVar10 = local_40;
    if (((((char)local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    local_58 = plVar12;
    local_50 = '\0';
    FUN_000175c0(uVar15,&local_58);
    plVar3 = local_40;
    if ((char)local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38._0_1_ = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      local_38._0_1_ = '\0';
      local_40 = plVar3;
      FUN_00c70bc0();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    (**(code **)(&DAT_000015c8 + *plVar13))();
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
  }
  bVar5 = (byte)plVar10;
  (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
  plVar13 = local_40;
  if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar10 = DAT_026f6ea0;
  if (plVar13 != (longlong *)0x0) {
    if (DAT_026f6ea0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    uVar15 = FUN_0071a120();
    if (((((char)local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar15 = FUN_00d50b00(), (char)local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar15 = FUN_00d50b20();
    }
    local_58 = plVar10;
    local_50 = '\0';
    FUN_000175c0(uVar15,&local_58);
    plVar13 = local_40;
    if ((char)local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38._0_1_ = '\0';
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar13 != (longlong *)0x0) {
      local_38._0_1_ = '\0';
      local_40 = plVar13;
      bVar5 = FUN_00c70bc0();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((plVar13 != (longlong *)0x0 & bVar5) == 0) {
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      FUN_019f7880();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      FUN_00212950();
      FUN_019f78b0();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      FUN_00212a20();
      FUN_019f7a40();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RDI + 0x90)))();
      FUN_00212b00();
      FUN_019f7880();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


