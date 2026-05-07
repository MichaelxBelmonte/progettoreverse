// Function: FUN_01940080
// Address: 01940080
// Size: 1457 bytes
// Class: MUDetectionEditorView


/* WARNING: Removing unreachable block (ram,0x01940562) */
/* WARNING: Removing unreachable block (ram,0x0194056b) */
/* WARNING: Removing unreachable block (ram,0x01940128) */
/* WARNING: Removing unreachable block (ram,0x01940131) */
/* WARNING: Removing unreachable block (ram,0x01940168) */
/* WARNING: Removing unreachable block (ram,0x01940171) */

void FUN_01940080(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  float local_88;
  longlong local_48;
  char local_40;
  undefined8 extraout_XMM0_Qb;
  
  FUN_01e3f820();
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 5) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(&UNK_000017c8 + *unaff_RDI))();
    if ((char)unaff_RDI[0xb6] != '\0') {
      FUN_01d3abf0();
      uVar11 = FUN_01e466c0();
      (**(code **)(*unaff_RDI + 0xab8))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      (**(code **)(&UNK_000016c8 + *unaff_RDI))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
        *(undefined8 *)((longlong)unaff_RDI + 0x5bc) = uVar11;
        *(undefined1 *)((longlong)unaff_RDI + 0x5c4) = 1;
LAB_019401b7:
        FUN_00d50b20();
      }
      else {
        if (local_48 == 0) {
          *(undefined1 *)((longlong)unaff_RDI + 0x5c4) = 0;
          goto LAB_019401cc;
        }
        *(undefined8 *)((longlong)unaff_RDI + 0x5bc) = uVar11;
        *(undefined1 *)((longlong)unaff_RDI + 0x5c4) = 1;
        if (local_48 != 0) goto LAB_019401b7;
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
LAB_019401cc:
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 1)) {
    (**(code **)(&UNK_00001668 + *unaff_RDI))();
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar6 = FUN_01326de0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (iVar6 == 3) {
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(&DAT_00001730 + *unaff_RDI))();
      bVar4 = FUN_00d05410();
      if (bVar4 == 0) {
        (**(code **)(&DAT_00001738 + *unaff_RDI))();
        cVar5 = FUN_00d05410();
        if (cVar5 == '\0') goto LAB_01940545;
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013514c0();
        *(undefined4 *)(unaff_RDI + 0xae) = uVar9;
      }
      else {
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_013514d0();
        *(undefined4 *)((longlong)unaff_RDI + 0x56c) = uVar9;
      }
      local_88 = (float)(**(code **)(*unaff_RDI + 0xc00))();
      plVar8 = unaff_RDI + 0xae;
      lVar1 = (ulonglong)(bVar4 ^ 1) * 4 + 0x56c;
      do {
        (**(code **)(*unaff_RDI + 0x658))();
        lVar2 = *unaff_RSI;
        if (lVar2 == local_48) {
          if (((char)unaff_RSI[1] == '\0') && (local_48 != 0)) {
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_019404cc;
            }
LAB_01940482:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_40 = '\0';
          }
          lVar2 = *unaff_RSI;
        }
        else {
          lVar3 = unaff_RSI[1];
          if (local_40 != '\0') {
            *unaff_RSI = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01940482;
          }
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *unaff_RSI = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_019404cc:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          lVar2 = *unaff_RSI;
        }
        if (lVar2 == 0) {
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
LAB_01940596:
          pvVar7 = _pthread_getspecific(param_1);
          if (bVar4 == 0) {
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013548b0();
          }
          else {
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01354950();
            plVar8 = (longlong *)((longlong)unaff_RDI + 0x56c);
          }
          *(undefined4 *)plVar8 = 0x7fc00000;
          (**(code **)(*unaff_RDI + 0x620))();
          return;
        }
        iVar6 = FUN_01d3a5a0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar6 == 6) goto LAB_01940596;
        FUN_01d3abf0();
        auVar12._0_8_ = FUN_01e466c0();
        auVar12._8_8_ = extraout_XMM0_Qb;
        if ((float)((ulonglong)auVar12._0_8_ >> 0x20) < DAT_023908d8) {
          insertps(auVar12,ZEXT416((uint)DAT_023908d8),0x10);
        }
        fVar10 = (float)(**(code **)(*unaff_RDI + 0xc00))();
        *(float *)((longlong)unaff_RDI + lVar1) =
             (fVar10 - local_88) + *(float *)((longlong)unaff_RDI + lVar1);
        (**(code **)(*unaff_RDI + 0x620))();
        local_88 = fVar10;
      } while( true );
    }
  }
LAB_01940545:
  FUN_0199c1c0();
  return;
}


