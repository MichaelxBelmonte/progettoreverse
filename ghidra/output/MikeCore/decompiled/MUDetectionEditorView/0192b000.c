// Function: FUN_0192b000
// Address: 0192b000
// Size: 1495 bytes
// Class: MUDetectionEditorView


/* WARNING: Removing unreachable block (ram,0x0192b134) */
/* WARNING: Removing unreachable block (ram,0x0192b0cc) */
/* WARNING: Removing unreachable block (ram,0x0192b0c0) */
/* WARNING: Removing unreachable block (ram,0x0192b0da) */
/* WARNING: Removing unreachable block (ram,0x0192b0e6) */

void FUN_0192b000(void)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  char *pcVar11;
  longlong unaff_RDI;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  float local_a4;
  int *local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38 [8];
  
  plVar13 = local_70;
  FUN_0192b8f0();
  if ((local_68[0] == '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01293ed0(&local_c8);
  if (local_68[0] == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 == (longlong *)0x0) || (*(int *)((longlong)local_70 + 0xc) == 0)) {
    local_a0 = (int *)((longlong)local_70 + 0xc);
    bVar2 = true;
    plVar14 = local_70;
  }
  else {
    local_40 = local_70;
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_48 = plVar13;
    local_60 = plVar13;
    local_58 = 0xffffffff;
    local_50 = 0;
    while( true ) {
      lVar6 = (longlong)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      iVar10 = *(int *)((longlong)local_60 + 0xc);
      bVar2 = iVar12 < iVar10;
      plVar8 = local_60;
      if (iVar10 <= iVar12) break;
      plVar8 = (longlong *)local_60[2];
      local_70 = (longlong *)plVar8[lVar6 + 1];
      pvVar7 = _pthread_getspecific((pthread_key_t)plVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01334f30();
      if (cVar4 == '\0') break;
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar10 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar10 = 0;
        }
        local_58 = CONCAT44(iVar10,(int)local_58);
      }
    }
    FUN_00115190();
    local_a0 = (int *)((longlong)local_40 + 0xc);
    plVar13 = local_48;
    plVar14 = local_40;
    if ((iVar10 <= iVar12) && (0 < *(int *)((longlong)local_40 + 0xc))) {
      plVar13 = *(longlong **)(unaff_RDI + 0xd8);
      FUN_00d23310();
      piVar3 = local_a0;
      uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),local_68[0]);
      pcVar11 = local_38;
      if (local_68[0] != '\0') {
        pcVar11 = local_68;
      }
      local_38[0] = local_68[0];
      *pcVar11 = '\0';
      if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012660a0();
      (**(code **)(*plVar13 + 0x928))();
      if ((local_38[0] != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (1 < *(int *)((longlong)local_40 + 0xc)) {
        lVar6 = 1;
        do {
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_a4 = (float)FUN_012660a0();
          pvVar7 = _pthread_getspecific((pthread_key_t)uVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar15 = (float)FUN_012660a0();
          if ((local_a4 != fVar15) || (NAN(local_a4) || NAN(fVar15))) {
            plVar13 = *(longlong **)(unaff_RDI + 0xd8);
            FUN_00e99dd0();
            local_80 = 0;
            if (local_68[0] == '\0') {
              if (local_70 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68[0] = '\0';
            }
            local_80 = '\x01';
            local_88 = local_70;
            (**(code **)(*plVar13 + 0x968))();
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar2 = false;
            plVar13 = local_48;
            plVar14 = local_40;
            goto LAB_0192b4e9;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *piVar3);
      }
      bVar2 = false;
      plVar13 = local_48;
      plVar14 = local_40;
      goto LAB_0192b4e9;
    }
  }
  plVar8 = *(longlong **)(unaff_RDI + 0xd8);
  FUN_00d8ede0();
  local_90 = 0;
  if (local_68[0] == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68[0] = '\0';
  }
  local_90 = '\x01';
  local_98 = local_70;
  (**(code **)(*plVar8 + 0x968))();
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_0192b4e9:
  FUN_01a13070();
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 == (longlong *)0x0) {
    bVar5 = 0;
  }
  else {
    FUN_01a13070();
    local_b0 = '\0';
    local_b8 = plVar14;
    bVar5 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *local_70 + 8))();
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = bVar5 ^ 1;
  }
  pcVar1 = *(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x998);
  if (bVar2 || (*local_a0 < 1 || bVar5 != 0)) {
    (*pcVar1)();
  }
  else {
    (*pcVar1)();
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


