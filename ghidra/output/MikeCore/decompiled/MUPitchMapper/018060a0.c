// Function: FUN_018060a0
// Address: 018060a0
// Size: 793 bytes
// Class: MUPitchMapper


/* WARNING: Removing unreachable block (ram,0x018060eb) */
/* WARNING: Removing unreachable block (ram,0x018060f4) */
/* WARNING: Removing unreachable block (ram,0x01806142) */
/* WARNING: Removing unreachable block (ram,0x01806160) */
/* WARNING: Removing unreachable block (ram,0x01806144) */
/* WARNING: Removing unreachable block (ram,0x01806166) */

void FUN_018060a0(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_40;
  char local_38;
  
  FUN_017e1d40();
  if (local_68 == '\0') {
    if (local_70 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_70 == 0) {
    return;
  }
  local_58 = -1;
  do {
    do {
      local_58 = local_58 + 1;
      if (*(int *)(local_70 + 0xc) <= local_58) {
        FUN_01916320();
        FUN_00d50b20();
        return;
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(local_70 + 0x10));
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_017dca70();
      FUN_017e1a60();
      iVar5 = FUN_01715480();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1a60();
      iVar5 = iVar4 - iVar5;
      iVar5 = iVar5 + (((uint)(iVar5 / 6 + (iVar5 >> 0x1f)) >> 1) - (iVar5 >> 0x1f)) * -0xc;
      uVar1 = *(ulonglong *)(local_40 + 0x18);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar9 = (uint)(uVar1 >> ((((byte)(iVar5 >> 0x1f) & 0xc) + (char)iVar5) * '\x04' & 0x3f)) & 0xf
      ;
    } while (uVar9 == 0xf);
    FUN_017e1dd0();
    lVar2 = *(longlong *)(local_40 + 0x50);
    cVar3 = (char)(uVar9 * 0x25 >> 8);
    iVar5 = *(int *)(lVar2 + 0x18);
    lVar10 = (longlong)iVar5;
    iVar7 = iVar5 + 3;
    if (-1 < lVar10) {
      iVar7 = iVar5;
    }
    uVar9 = (uint)(byte)((char)uVar9 +
                        ((byte)(((byte)((char)uVar9 - cVar3) >> 1) + cVar3) >> 2) * -7);
    if (3 < lVar10) {
      lVar8 = 0;
      do {
        if (*(uint *)(*(longlong *)(lVar2 + 0x10) + lVar8 * 4) == uVar9) goto LAB_018062ea;
        lVar8 = lVar8 + 1;
      } while (iVar7 >> 2 != (int)lVar8);
    }
    FUN_00c8e340();
    *(uint *)(*(longlong *)(lVar2 + 0x10) + lVar10) = uVar9;
LAB_018062ea:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1dd0();
    lVar2 = *(longlong *)(local_40 + 0x58);
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    iVar4 = (iVar4 >> 0x1f & 0xcU) + iVar4;
    iVar5 = *(int *)(lVar2 + 0x18);
    lVar10 = (longlong)iVar5;
    iVar7 = iVar5 + 3;
    if (-1 < lVar10) {
      iVar7 = iVar5;
    }
    if (3 < lVar10) {
      iVar7 = iVar7 >> 2;
      lVar8 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar2 + 0x10) + lVar8 * 4) == iVar4) goto LAB_0180638a;
        lVar8 = lVar8 + 1;
      } while (iVar7 != (int)lVar8);
    }
    FUN_00c8e340(iVar7,1);
    *(int *)(*(longlong *)(lVar2 + 0x10) + lVar10) = iVar4;
LAB_0180638a:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  } while( true );
}


