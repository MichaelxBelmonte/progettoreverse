// Function: FUN_019b7240
// Address: 019b7240
// Size: 1327 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x019b776e) */
/* WARNING: Removing unreachable block (ram,0x019b777a) */
/* WARNING: Removing unreachable block (ram,0x019b75e6) */
/* WARNING: Removing unreachable block (ram,0x019b75ef) */
/* WARNING: Removing unreachable block (ram,0x019b7698) */
/* WARNING: Removing unreachable block (ram,0x019b76a1) */
/* WARNING: Removing unreachable block (ram,0x019b7727) */
/* WARNING: Removing unreachable block (ram,0x019b7733) */
/* WARNING: Removing unreachable block (ram,0x019b7304) */
/* WARNING: Removing unreachable block (ram,0x019b730d) */
/* WARNING: Removing unreachable block (ram,0x019b72b2) */
/* WARNING: Removing unreachable block (ram,0x019b72bb) */
/* WARNING: Removing unreachable block (ram,0x019b754b) */
/* WARNING: Removing unreachable block (ram,0x019b7558) */

void FUN_019b7240(undefined4 param_1,int param_2,char param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  undefined1 in_CL;
  longlong *plVar9;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  char local_80;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  plVar3 = local_40;
  if (param_2 == 0) {
    param_1 = (**(code **)(*unaff_RDI + 0xda0))();
  }
  (**(code **)(*unaff_RDI + 0x9b0))(param_1,in_CL);
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  uVar1 = *(uint *)((longlong)local_40 + 0xc);
  if ((ulonglong)uVar1 != 0) {
    (**(code **)(*unaff_RDI + 0xa28))();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar9 = (longlong *)&DAT_02572358;
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    uVar15 = FUN_00d21370();
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        plVar2 = *(longlong **)(plVar3[2] + uVar11 * 8);
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) {
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar15 = FUN_0125a2c0();
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          plVar10 = plVar3;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar9 = plVar3;
            plVar10 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          iVar5 = (**(code **)(*plVar10 + 0x3a8))(uVar15);
          uVar15 = extraout_XMM0_Da_00;
        }
        else {
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar5 = FUN_01507f00();
          uVar15 = extraout_XMM0_Da;
          if (local_40 != (longlong *)0x0) {
            uVar15 = FUN_00d50b20();
          }
        }
        if (iVar5 == unaff_ESI) {
          local_38 = '\0';
          uVar15 = FUN_00d21140();
          local_40 = plVar2;
        }
        if (plVar2 != (longlong *)0x0) {
          uVar15 = FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
    }
    uVar11 = (ulonglong)*(uint *)((longlong)puVar6 + 0xc);
    if (uVar11 != 0) {
      local_80 = (char)param_2;
      if ((local_80 == '\0') || (param_3 == '\0')) {
LAB_019b76f3:
        (**(code **)(*unaff_RDI + 0xdb8))(uVar15,1);
      }
      else {
        if (0 < (int)*(uint *)((longlong)puVar6 + 0xc)) {
          bVar13 = true;
          uVar12 = 1;
          do {
            lVar8 = *(longlong *)(puVar6[2] + -8 + uVar12 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*unaff_RDI + 0xe20))();
            cVar4 = FUN_00d23d70();
            uVar15 = extraout_XMM0_Da_01;
            if ((local_58 != '\0') && (local_60 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            if (lVar8 != 0) {
              uVar15 = FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              if (bVar13) goto LAB_019b76f3;
              break;
            }
            bVar13 = uVar12 < uVar11;
            bVar14 = uVar12 != uVar11;
            uVar12 = uVar12 + 1;
          } while (bVar14);
        }
        (**(code **)(*unaff_RDI + 0xdc0))(uVar15,1);
      }
    }
    FUN_00d50b20();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


